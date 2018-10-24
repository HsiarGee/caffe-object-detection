#include <detection.hpp>

int main(int argc, char **argv)
{
	string work_folder = argv[1];
	string save_folder = argv[2];
	string gpu_id = argv[3];
    string model_file = "./model/faster_rcnn_test_cplus.prototxt";    
    string weights_file = "./model/screw_detect.caffemodel";
    
	int GPUID = 0;
	//stringstream stream(gpu_id);
	//stream >> GPUID;
    Caffe::SetDevice(GPUID);
    Caffe::set_mode(Caffe::GPU);

    Detector det = Detector(model_file, weights_file);
	
    
	DIR* dir = opendir(work_folder.c_str());
    dirent* p = NULL;
	cv::Mat result;
    while((p = readdir(dir)) != NULL)
    {
        if(p->d_name[0] != '.')
        {
			string file_name = string(p->d_name);
            if(-1 == file_name.find(".jpg")) continue;
            else
            {
				string image_path = work_folder + file_name;
				string save_path = save_folder + file_name;
				result = det.Detect(image_path);
				cv::imwrite(save_path, result);
            }
        }
    }
    closedir(dir);
	return 0;
}

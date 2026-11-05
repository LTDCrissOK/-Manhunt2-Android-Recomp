#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B4218
// Address: 0x3b4218 - 0x3b4788
void sub_003B4218_0x3b4218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4218_0x3b4218");
#endif

    switch (ctx->pc) {
        case 0x3b4218u: goto label_3b4218;
        case 0x3b421cu: goto label_3b421c;
        case 0x3b4220u: goto label_3b4220;
        case 0x3b4224u: goto label_3b4224;
        case 0x3b4228u: goto label_3b4228;
        case 0x3b422cu: goto label_3b422c;
        case 0x3b4230u: goto label_3b4230;
        case 0x3b4234u: goto label_3b4234;
        case 0x3b4238u: goto label_3b4238;
        case 0x3b423cu: goto label_3b423c;
        case 0x3b4240u: goto label_3b4240;
        case 0x3b4244u: goto label_3b4244;
        case 0x3b4248u: goto label_3b4248;
        case 0x3b424cu: goto label_3b424c;
        case 0x3b4250u: goto label_3b4250;
        case 0x3b4254u: goto label_3b4254;
        case 0x3b4258u: goto label_3b4258;
        case 0x3b425cu: goto label_3b425c;
        case 0x3b4260u: goto label_3b4260;
        case 0x3b4264u: goto label_3b4264;
        case 0x3b4268u: goto label_3b4268;
        case 0x3b426cu: goto label_3b426c;
        case 0x3b4270u: goto label_3b4270;
        case 0x3b4274u: goto label_3b4274;
        case 0x3b4278u: goto label_3b4278;
        case 0x3b427cu: goto label_3b427c;
        case 0x3b4280u: goto label_3b4280;
        case 0x3b4284u: goto label_3b4284;
        case 0x3b4288u: goto label_3b4288;
        case 0x3b428cu: goto label_3b428c;
        case 0x3b4290u: goto label_3b4290;
        case 0x3b4294u: goto label_3b4294;
        case 0x3b4298u: goto label_3b4298;
        case 0x3b429cu: goto label_3b429c;
        case 0x3b42a0u: goto label_3b42a0;
        case 0x3b42a4u: goto label_3b42a4;
        case 0x3b42a8u: goto label_3b42a8;
        case 0x3b42acu: goto label_3b42ac;
        case 0x3b42b0u: goto label_3b42b0;
        case 0x3b42b4u: goto label_3b42b4;
        case 0x3b42b8u: goto label_3b42b8;
        case 0x3b42bcu: goto label_3b42bc;
        case 0x3b42c0u: goto label_3b42c0;
        case 0x3b42c4u: goto label_3b42c4;
        case 0x3b42c8u: goto label_3b42c8;
        case 0x3b42ccu: goto label_3b42cc;
        case 0x3b42d0u: goto label_3b42d0;
        case 0x3b42d4u: goto label_3b42d4;
        case 0x3b42d8u: goto label_3b42d8;
        case 0x3b42dcu: goto label_3b42dc;
        case 0x3b42e0u: goto label_3b42e0;
        case 0x3b42e4u: goto label_3b42e4;
        case 0x3b42e8u: goto label_3b42e8;
        case 0x3b42ecu: goto label_3b42ec;
        case 0x3b42f0u: goto label_3b42f0;
        case 0x3b42f4u: goto label_3b42f4;
        case 0x3b42f8u: goto label_3b42f8;
        case 0x3b42fcu: goto label_3b42fc;
        case 0x3b4300u: goto label_3b4300;
        case 0x3b4304u: goto label_3b4304;
        case 0x3b4308u: goto label_3b4308;
        case 0x3b430cu: goto label_3b430c;
        case 0x3b4310u: goto label_3b4310;
        case 0x3b4314u: goto label_3b4314;
        case 0x3b4318u: goto label_3b4318;
        case 0x3b431cu: goto label_3b431c;
        case 0x3b4320u: goto label_3b4320;
        case 0x3b4324u: goto label_3b4324;
        case 0x3b4328u: goto label_3b4328;
        case 0x3b432cu: goto label_3b432c;
        case 0x3b4330u: goto label_3b4330;
        case 0x3b4334u: goto label_3b4334;
        case 0x3b4338u: goto label_3b4338;
        case 0x3b433cu: goto label_3b433c;
        case 0x3b4340u: goto label_3b4340;
        case 0x3b4344u: goto label_3b4344;
        case 0x3b4348u: goto label_3b4348;
        case 0x3b434cu: goto label_3b434c;
        case 0x3b4350u: goto label_3b4350;
        case 0x3b4354u: goto label_3b4354;
        case 0x3b4358u: goto label_3b4358;
        case 0x3b435cu: goto label_3b435c;
        case 0x3b4360u: goto label_3b4360;
        case 0x3b4364u: goto label_3b4364;
        case 0x3b4368u: goto label_3b4368;
        case 0x3b436cu: goto label_3b436c;
        case 0x3b4370u: goto label_3b4370;
        case 0x3b4374u: goto label_3b4374;
        case 0x3b4378u: goto label_3b4378;
        case 0x3b437cu: goto label_3b437c;
        case 0x3b4380u: goto label_3b4380;
        case 0x3b4384u: goto label_3b4384;
        case 0x3b4388u: goto label_3b4388;
        case 0x3b438cu: goto label_3b438c;
        case 0x3b4390u: goto label_3b4390;
        case 0x3b4394u: goto label_3b4394;
        case 0x3b4398u: goto label_3b4398;
        case 0x3b439cu: goto label_3b439c;
        case 0x3b43a0u: goto label_3b43a0;
        case 0x3b43a4u: goto label_3b43a4;
        case 0x3b43a8u: goto label_3b43a8;
        case 0x3b43acu: goto label_3b43ac;
        case 0x3b43b0u: goto label_3b43b0;
        case 0x3b43b4u: goto label_3b43b4;
        case 0x3b43b8u: goto label_3b43b8;
        case 0x3b43bcu: goto label_3b43bc;
        case 0x3b43c0u: goto label_3b43c0;
        case 0x3b43c4u: goto label_3b43c4;
        case 0x3b43c8u: goto label_3b43c8;
        case 0x3b43ccu: goto label_3b43cc;
        case 0x3b43d0u: goto label_3b43d0;
        case 0x3b43d4u: goto label_3b43d4;
        case 0x3b43d8u: goto label_3b43d8;
        case 0x3b43dcu: goto label_3b43dc;
        case 0x3b43e0u: goto label_3b43e0;
        case 0x3b43e4u: goto label_3b43e4;
        case 0x3b43e8u: goto label_3b43e8;
        case 0x3b43ecu: goto label_3b43ec;
        case 0x3b43f0u: goto label_3b43f0;
        case 0x3b43f4u: goto label_3b43f4;
        case 0x3b43f8u: goto label_3b43f8;
        case 0x3b43fcu: goto label_3b43fc;
        case 0x3b4400u: goto label_3b4400;
        case 0x3b4404u: goto label_3b4404;
        case 0x3b4408u: goto label_3b4408;
        case 0x3b440cu: goto label_3b440c;
        case 0x3b4410u: goto label_3b4410;
        case 0x3b4414u: goto label_3b4414;
        case 0x3b4418u: goto label_3b4418;
        case 0x3b441cu: goto label_3b441c;
        case 0x3b4420u: goto label_3b4420;
        case 0x3b4424u: goto label_3b4424;
        case 0x3b4428u: goto label_3b4428;
        case 0x3b442cu: goto label_3b442c;
        case 0x3b4430u: goto label_3b4430;
        case 0x3b4434u: goto label_3b4434;
        case 0x3b4438u: goto label_3b4438;
        case 0x3b443cu: goto label_3b443c;
        case 0x3b4440u: goto label_3b4440;
        case 0x3b4444u: goto label_3b4444;
        case 0x3b4448u: goto label_3b4448;
        case 0x3b444cu: goto label_3b444c;
        case 0x3b4450u: goto label_3b4450;
        case 0x3b4454u: goto label_3b4454;
        case 0x3b4458u: goto label_3b4458;
        case 0x3b445cu: goto label_3b445c;
        case 0x3b4460u: goto label_3b4460;
        case 0x3b4464u: goto label_3b4464;
        case 0x3b4468u: goto label_3b4468;
        case 0x3b446cu: goto label_3b446c;
        case 0x3b4470u: goto label_3b4470;
        case 0x3b4474u: goto label_3b4474;
        case 0x3b4478u: goto label_3b4478;
        case 0x3b447cu: goto label_3b447c;
        case 0x3b4480u: goto label_3b4480;
        case 0x3b4484u: goto label_3b4484;
        case 0x3b4488u: goto label_3b4488;
        case 0x3b448cu: goto label_3b448c;
        case 0x3b4490u: goto label_3b4490;
        case 0x3b4494u: goto label_3b4494;
        case 0x3b4498u: goto label_3b4498;
        case 0x3b449cu: goto label_3b449c;
        case 0x3b44a0u: goto label_3b44a0;
        case 0x3b44a4u: goto label_3b44a4;
        case 0x3b44a8u: goto label_3b44a8;
        case 0x3b44acu: goto label_3b44ac;
        case 0x3b44b0u: goto label_3b44b0;
        case 0x3b44b4u: goto label_3b44b4;
        case 0x3b44b8u: goto label_3b44b8;
        case 0x3b44bcu: goto label_3b44bc;
        case 0x3b44c0u: goto label_3b44c0;
        case 0x3b44c4u: goto label_3b44c4;
        case 0x3b44c8u: goto label_3b44c8;
        case 0x3b44ccu: goto label_3b44cc;
        case 0x3b44d0u: goto label_3b44d0;
        case 0x3b44d4u: goto label_3b44d4;
        case 0x3b44d8u: goto label_3b44d8;
        case 0x3b44dcu: goto label_3b44dc;
        case 0x3b44e0u: goto label_3b44e0;
        case 0x3b44e4u: goto label_3b44e4;
        case 0x3b44e8u: goto label_3b44e8;
        case 0x3b44ecu: goto label_3b44ec;
        case 0x3b44f0u: goto label_3b44f0;
        case 0x3b44f4u: goto label_3b44f4;
        case 0x3b44f8u: goto label_3b44f8;
        case 0x3b44fcu: goto label_3b44fc;
        case 0x3b4500u: goto label_3b4500;
        case 0x3b4504u: goto label_3b4504;
        case 0x3b4508u: goto label_3b4508;
        case 0x3b450cu: goto label_3b450c;
        case 0x3b4510u: goto label_3b4510;
        case 0x3b4514u: goto label_3b4514;
        case 0x3b4518u: goto label_3b4518;
        case 0x3b451cu: goto label_3b451c;
        case 0x3b4520u: goto label_3b4520;
        case 0x3b4524u: goto label_3b4524;
        case 0x3b4528u: goto label_3b4528;
        case 0x3b452cu: goto label_3b452c;
        case 0x3b4530u: goto label_3b4530;
        case 0x3b4534u: goto label_3b4534;
        case 0x3b4538u: goto label_3b4538;
        case 0x3b453cu: goto label_3b453c;
        case 0x3b4540u: goto label_3b4540;
        case 0x3b4544u: goto label_3b4544;
        case 0x3b4548u: goto label_3b4548;
        case 0x3b454cu: goto label_3b454c;
        case 0x3b4550u: goto label_3b4550;
        case 0x3b4554u: goto label_3b4554;
        case 0x3b4558u: goto label_3b4558;
        case 0x3b455cu: goto label_3b455c;
        case 0x3b4560u: goto label_3b4560;
        case 0x3b4564u: goto label_3b4564;
        case 0x3b4568u: goto label_3b4568;
        case 0x3b456cu: goto label_3b456c;
        case 0x3b4570u: goto label_3b4570;
        case 0x3b4574u: goto label_3b4574;
        case 0x3b4578u: goto label_3b4578;
        case 0x3b457cu: goto label_3b457c;
        case 0x3b4580u: goto label_3b4580;
        case 0x3b4584u: goto label_3b4584;
        case 0x3b4588u: goto label_3b4588;
        case 0x3b458cu: goto label_3b458c;
        case 0x3b4590u: goto label_3b4590;
        case 0x3b4594u: goto label_3b4594;
        case 0x3b4598u: goto label_3b4598;
        case 0x3b459cu: goto label_3b459c;
        case 0x3b45a0u: goto label_3b45a0;
        case 0x3b45a4u: goto label_3b45a4;
        case 0x3b45a8u: goto label_3b45a8;
        case 0x3b45acu: goto label_3b45ac;
        case 0x3b45b0u: goto label_3b45b0;
        case 0x3b45b4u: goto label_3b45b4;
        case 0x3b45b8u: goto label_3b45b8;
        case 0x3b45bcu: goto label_3b45bc;
        case 0x3b45c0u: goto label_3b45c0;
        case 0x3b45c4u: goto label_3b45c4;
        case 0x3b45c8u: goto label_3b45c8;
        case 0x3b45ccu: goto label_3b45cc;
        case 0x3b45d0u: goto label_3b45d0;
        case 0x3b45d4u: goto label_3b45d4;
        case 0x3b45d8u: goto label_3b45d8;
        case 0x3b45dcu: goto label_3b45dc;
        case 0x3b45e0u: goto label_3b45e0;
        case 0x3b45e4u: goto label_3b45e4;
        case 0x3b45e8u: goto label_3b45e8;
        case 0x3b45ecu: goto label_3b45ec;
        case 0x3b45f0u: goto label_3b45f0;
        case 0x3b45f4u: goto label_3b45f4;
        case 0x3b45f8u: goto label_3b45f8;
        case 0x3b45fcu: goto label_3b45fc;
        case 0x3b4600u: goto label_3b4600;
        case 0x3b4604u: goto label_3b4604;
        case 0x3b4608u: goto label_3b4608;
        case 0x3b460cu: goto label_3b460c;
        case 0x3b4610u: goto label_3b4610;
        case 0x3b4614u: goto label_3b4614;
        case 0x3b4618u: goto label_3b4618;
        case 0x3b461cu: goto label_3b461c;
        case 0x3b4620u: goto label_3b4620;
        case 0x3b4624u: goto label_3b4624;
        case 0x3b4628u: goto label_3b4628;
        case 0x3b462cu: goto label_3b462c;
        case 0x3b4630u: goto label_3b4630;
        case 0x3b4634u: goto label_3b4634;
        case 0x3b4638u: goto label_3b4638;
        case 0x3b463cu: goto label_3b463c;
        case 0x3b4640u: goto label_3b4640;
        case 0x3b4644u: goto label_3b4644;
        case 0x3b4648u: goto label_3b4648;
        case 0x3b464cu: goto label_3b464c;
        case 0x3b4650u: goto label_3b4650;
        case 0x3b4654u: goto label_3b4654;
        case 0x3b4658u: goto label_3b4658;
        case 0x3b465cu: goto label_3b465c;
        case 0x3b4660u: goto label_3b4660;
        case 0x3b4664u: goto label_3b4664;
        case 0x3b4668u: goto label_3b4668;
        case 0x3b466cu: goto label_3b466c;
        case 0x3b4670u: goto label_3b4670;
        case 0x3b4674u: goto label_3b4674;
        case 0x3b4678u: goto label_3b4678;
        case 0x3b467cu: goto label_3b467c;
        case 0x3b4680u: goto label_3b4680;
        case 0x3b4684u: goto label_3b4684;
        case 0x3b4688u: goto label_3b4688;
        case 0x3b468cu: goto label_3b468c;
        case 0x3b4690u: goto label_3b4690;
        case 0x3b4694u: goto label_3b4694;
        case 0x3b4698u: goto label_3b4698;
        case 0x3b469cu: goto label_3b469c;
        case 0x3b46a0u: goto label_3b46a0;
        case 0x3b46a4u: goto label_3b46a4;
        case 0x3b46a8u: goto label_3b46a8;
        case 0x3b46acu: goto label_3b46ac;
        case 0x3b46b0u: goto label_3b46b0;
        case 0x3b46b4u: goto label_3b46b4;
        case 0x3b46b8u: goto label_3b46b8;
        case 0x3b46bcu: goto label_3b46bc;
        case 0x3b46c0u: goto label_3b46c0;
        case 0x3b46c4u: goto label_3b46c4;
        case 0x3b46c8u: goto label_3b46c8;
        case 0x3b46ccu: goto label_3b46cc;
        case 0x3b46d0u: goto label_3b46d0;
        case 0x3b46d4u: goto label_3b46d4;
        case 0x3b46d8u: goto label_3b46d8;
        case 0x3b46dcu: goto label_3b46dc;
        case 0x3b46e0u: goto label_3b46e0;
        case 0x3b46e4u: goto label_3b46e4;
        case 0x3b46e8u: goto label_3b46e8;
        case 0x3b46ecu: goto label_3b46ec;
        case 0x3b46f0u: goto label_3b46f0;
        case 0x3b46f4u: goto label_3b46f4;
        case 0x3b46f8u: goto label_3b46f8;
        case 0x3b46fcu: goto label_3b46fc;
        case 0x3b4700u: goto label_3b4700;
        case 0x3b4704u: goto label_3b4704;
        case 0x3b4708u: goto label_3b4708;
        case 0x3b470cu: goto label_3b470c;
        case 0x3b4710u: goto label_3b4710;
        case 0x3b4714u: goto label_3b4714;
        case 0x3b4718u: goto label_3b4718;
        case 0x3b471cu: goto label_3b471c;
        case 0x3b4720u: goto label_3b4720;
        case 0x3b4724u: goto label_3b4724;
        case 0x3b4728u: goto label_3b4728;
        case 0x3b472cu: goto label_3b472c;
        case 0x3b4730u: goto label_3b4730;
        case 0x3b4734u: goto label_3b4734;
        case 0x3b4738u: goto label_3b4738;
        case 0x3b473cu: goto label_3b473c;
        case 0x3b4740u: goto label_3b4740;
        case 0x3b4744u: goto label_3b4744;
        case 0x3b4748u: goto label_3b4748;
        case 0x3b474cu: goto label_3b474c;
        case 0x3b4750u: goto label_3b4750;
        case 0x3b4754u: goto label_3b4754;
        case 0x3b4758u: goto label_3b4758;
        case 0x3b475cu: goto label_3b475c;
        case 0x3b4760u: goto label_3b4760;
        case 0x3b4764u: goto label_3b4764;
        case 0x3b4768u: goto label_3b4768;
        case 0x3b476cu: goto label_3b476c;
        case 0x3b4770u: goto label_3b4770;
        case 0x3b4774u: goto label_3b4774;
        case 0x3b4778u: goto label_3b4778;
        case 0x3b477cu: goto label_3b477c;
        case 0x3b4780u: goto label_3b4780;
        case 0x3b4784u: goto label_3b4784;
        default: break;
    }

    ctx->pc = 0x3b4218u;

label_3b4218:
    // 0x3b4218: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b4218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b421c:
    // 0x3b421c: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x3b421cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
label_3b4220:
    // 0x3b4220: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3b4224:
    // 0x3b4224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4228:
    // 0x3b4228: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3b422c:
    // 0x3b422c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b422cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b4230:
    // 0x3b4230: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b4230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b4234:
    // 0x3b4234: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3b4234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b4238:
    // 0x3b4238: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3b4238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3b423c:
    // 0x3b423c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3b423cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b4240:
    // 0x3b4240: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3b4240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_3b4244:
    // 0x3b4244: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x3b4244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3b4248:
    // 0x3b4248: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3b4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_3b424c:
    // 0x3b424c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3b424cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b4250:
    // 0x3b4250: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3b4250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_3b4254:
    // 0x3b4254: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3b4254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b4258:
    // 0x3b4258: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3b4258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_3b425c:
    // 0x3b425c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b4260:
    // 0x3b4260: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x3b4260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_3b4264:
    // 0x3b4264: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x3b4264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_3b4268:
    // 0x3b4268: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x3b4268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3b426c:
    // 0x3b426c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3b4270:
    // 0x3b4270: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3b4270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3b4274:
    // 0x3b4274: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b4274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3b4278:
    // 0x3b4278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b427c:
    if (ctx->pc == 0x3B427Cu) {
        ctx->pc = 0x3B427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4278u;
        // 0x3b427c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4280u;
        goto label_3b4280;
    }
    ctx->pc = 0x3B4278u;
    {
        const bool branch_taken_0x3b4278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4278u;
        // 0x3b427c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4278) {
            ctx->pc = 0x3B4290u;
            goto label_3b4290;
        }
    }
    ctx->pc = 0x3B4280u;
label_3b4280:
    // 0x3b4280: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3b4280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_3b4284:
    // 0x3b4284: 0x10000022  b           . + 4 + (0x22 << 2)
label_3b4288:
    if (ctx->pc == 0x3B4288u) {
        ctx->pc = 0x3B4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4284u;
        // 0x3b4288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B428Cu;
        goto label_3b428c;
    }
    ctx->pc = 0x3B4284u;
    {
        const bool branch_taken_0x3b4284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4284u;
        // 0x3b4288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4284) {
            ctx->pc = 0x3B4310u;
            goto label_3b4310;
        }
    }
    ctx->pc = 0x3B428Cu;
label_3b428c:
    // 0x3b428c: 0x0  nop
    ctx->pc = 0x3b428cu;
    // NOP
label_3b4290:
    // 0x3b4290: 0xc0ecf88  jal         func_3B3E20
label_3b4294:
    if (ctx->pc == 0x3B4294u) {
        ctx->pc = 0x3B4298u;
        goto label_3b4298;
    }
    ctx->pc = 0x3B4290u;
    SET_GPR_U32(ctx, 31, 0x3B4298u);
    ctx->pc = 0x3B3E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E20u, 0x3B4290u, 0x3B4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4298u;
label_3b4298:
    // 0x3b4298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b4298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b429c:
    // 0x3b429c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3b42a0:
    if (ctx->pc == 0x3B42A0u) {
        ctx->pc = 0x3B42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B429Cu;
        // 0x3b42a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B42A4u;
        goto label_3b42a4;
    }
    ctx->pc = 0x3B429Cu;
    {
        const bool branch_taken_0x3b429c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B429Cu;
        // 0x3b42a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b429c) {
            ctx->pc = 0x3B4310u;
            goto label_3b4310;
        }
    }
    ctx->pc = 0x3B42A4u;
label_3b42a4:
    // 0x3b42a4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3b42a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3b42a8:
    // 0x3b42a8: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x3b42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3b42ac:
    // 0x3b42ac: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
label_3b42b0:
    if (ctx->pc == 0x3B42B0u) {
        ctx->pc = 0x3B42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42ACu;
        // 0x3b42b0: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B42B4u;
        goto label_3b42b4;
    }
    ctx->pc = 0x3B42ACu;
    {
        const bool branch_taken_0x3b42ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3B42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42ACu;
        // 0x3b42b0: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42ac) {
            ctx->pc = 0x3B4310u;
            goto label_3b4310;
        }
    }
    ctx->pc = 0x3B42B4u;
label_3b42b4:
    // 0x3b42b4: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x3b42b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_3b42b8:
    // 0x3b42b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3b42b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b42bc:
    // 0x3b42bc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3b42bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b42c0:
    // 0x3b42c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3b42c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b42c4:
    // 0x3b42c4: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x3b42c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_3b42c8:
    // 0x3b42c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b42c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b42cc:
    // 0x3b42cc: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x3b42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_3b42d0:
    // 0x3b42d0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3b42d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3b42d4:
    // 0x3b42d4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3b42d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_3b42d8:
    // 0x3b42d8: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x3b42d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_3b42dc:
    // 0x3b42dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3b42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b42e0:
    // 0x3b42e0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3b42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3b42e4:
    // 0x3b42e4: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x3b42e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_3b42e8:
    // 0x3b42e8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3b42e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3b42ec:
    // 0x3b42ec: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3b42ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b42f0:
    // 0x3b42f0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3b42f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b42f4:
    // 0x3b42f4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3b42f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_3b42f8:
    // 0x3b42f8: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x3b42f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3b42fc:
    // 0x3b42fc: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x3b42fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_3b4300:
    // 0x3b4300: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b4300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b4304:
    // 0x3b4304: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3b4304u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_3b4308:
    // 0x3b4308: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x3b4308u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_3b430c:
    // 0x3b430c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3b430cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_3b4310:
    // 0x3b4310: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b4310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4314:
    // 0x3b4314: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b4314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b4318:
    // 0x3b4318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b4318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b431c:
    // 0x3b431c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3b431cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3b4320:
    // 0x3b4320: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3b4320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4324:
    // 0x3b4324: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3b4324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3b4328:
    // 0x3b4328: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3b4328u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b432c:
    // 0x3b432c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3b432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3b4330:
    // 0x3b4330: 0x3e00008  jr          $ra
label_3b4334:
    if (ctx->pc == 0x3B4334u) {
        ctx->pc = 0x3B4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4330u;
        // 0x3b4334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4338u;
        goto label_3b4338;
    }
    ctx->pc = 0x3B4330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4330u;
        // 0x3b4334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4338u;
label_3b4338:
    // 0x3b4338: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b4338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b433c:
    // 0x3b433c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3b4340:
    // 0x3b4340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4344:
    // 0x3b4344: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3b4344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_3b4348:
    // 0x3b4348: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3b4348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b434c:
    // 0x3b434c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3b434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3b4350:
    // 0x3b4350: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x3b4350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_3b4354:
    // 0x3b4354: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3b4354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3b4358:
    // 0x3b4358: 0x2612000f  addiu       $s2, $s0, 0xF
    ctx->pc = 0x3b4358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3b435c:
    // 0x3b435c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3b435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3b4360:
    // 0x3b4360: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x3b4360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3b4364:
    // 0x3b4364: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b4364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3b4368:
    // 0x3b4368: 0x2614000d  addiu       $s4, $s0, 0xD
    ctx->pc = 0x3b4368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3b436c:
    // 0x3b436c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3b4370:
    // 0x3b4370: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b4374:
    // 0x3b4374: 0xa6150002  sh          $s5, 0x2($s0)
    ctx->pc = 0x3b4374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
label_3b4378:
    // 0x3b4378: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3b4378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3b437c:
    // 0x3b437c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3b437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b4380:
    // 0x3b4380: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3b4380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b4384:
    // 0x3b4384: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x3b4384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3b4388:
    // 0x3b4388: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b4388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b438c:
    // 0x3b438c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3b438cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4390:
    // 0x3b4390: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3b4390u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4394:
    // 0x3b4394: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x3b4394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3b4398:
    // 0x3b4398: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3b4398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3b439c:
    // 0x3b439c: 0xc0ed086  jal         func_3B4218
label_3b43a0:
    if (ctx->pc == 0x3B43A0u) {
        ctx->pc = 0x3B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B439Cu;
        // 0x3b43a0: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43A4u;
        goto label_3b43a4;
    }
    ctx->pc = 0x3B439Cu;
    SET_GPR_U32(ctx, 31, 0x3B43A4u);
    ctx->pc = 0x3B43A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B439Cu;
    // 0x3b43a0: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4218u;
    goto label_3b4218;
    ctx->pc = 0x3B43A4u;
label_3b43a4:
    // 0x3b43a4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_3b43a8:
    if (ctx->pc == 0x3B43A8u) {
        ctx->pc = 0x3B43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43A4u;
        // 0x3b43a8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43ACu;
        goto label_3b43ac;
    }
    ctx->pc = 0x3B43A4u;
    {
        const bool branch_taken_0x3b43a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43A4u;
        // 0x3b43a8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b43a4) {
            ctx->pc = 0x3B43B8u;
            goto label_3b43b8;
        }
    }
    ctx->pc = 0x3B43ACu;
label_3b43ac:
    // 0x3b43ac: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3b43b0:
    if (ctx->pc == 0x3B43B0u) {
        ctx->pc = 0x3B43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43ACu;
        // 0x3b43b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43B4u;
        goto label_3b43b4;
    }
    ctx->pc = 0x3B43ACu;
    {
        const bool branch_taken_0x3b43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43ACu;
        // 0x3b43b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b43ac) {
            ctx->pc = 0x3B442Cu;
            goto label_3b442c;
        }
    }
    ctx->pc = 0x3B43B4u;
label_3b43b4:
    // 0x3b43b4: 0x0  nop
    ctx->pc = 0x3b43b4u;
    // NOP
label_3b43b8:
    // 0x3b43b8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3b43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3b43bc:
    // 0x3b43bc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3b43bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3b43c0:
    // 0x3b43c0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3b43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3b43c4:
    // 0x3b43c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3b43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3b43c8:
    // 0x3b43c8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3b43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3b43cc:
    // 0x3b43cc: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x3b43ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_3b43d0:
    // 0x3b43d0: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3b43d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_3b43d4:
    // 0x3b43d4: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x3b43d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_3b43d8:
    // 0x3b43d8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3b43d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3b43dc:
    // 0x3b43dc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b43dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b43e0:
    // 0x3b43e0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x3b43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3b43e4:
    // 0x3b43e4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3b43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_3b43e8:
    // 0x3b43e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b43ec:
    // 0x3b43ec: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x3b43ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3b43f0:
    // 0x3b43f0: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3b43f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b43f4:
    // 0x3b43f4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x3b43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_3b43f8:
    // 0x3b43f8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b43fc:
    // 0x3b43fc: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x3b43fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
label_3b4400:
    // 0x3b4400: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3b4400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3b4404:
    // 0x3b4404: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x3b4404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_3b4408:
    // 0x3b4408: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x3b4408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_3b440c:
    // 0x3b440c: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x3b440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_3b4410:
    // 0x3b4410: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3b4410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_3b4414:
    // 0x3b4414: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3b4414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3b4418:
    // 0x3b4418: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x3b4418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3b441c:
    // 0x3b441c: 0x54470002  bnel        $v0, $a3, . + 4 + (0x2 << 2)
label_3b4420:
    if (ctx->pc == 0x3B4420u) {
        ctx->pc = 0x3B4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B441Cu;
        // 0x3b4420: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4424u;
        goto label_3b4424;
    }
    ctx->pc = 0x3B441Cu;
    {
        const bool branch_taken_0x3b441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3b441c) {
            ctx->pc = 0x3B4420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B441Cu;
            // 0x3b4420: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4428u;
            goto label_3b4428;
        }
    }
    ctx->pc = 0x3B4424u;
label_3b4424:
    // 0x3b4424: 0xa615009c  sh          $s5, 0x9C($s0)
    ctx->pc = 0x3b4424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 21));
label_3b4428:
    // 0x3b4428: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x3b4428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_3b442c:
    // 0x3b442c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b442cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4430:
    // 0x3b4430: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3b4430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3b4434:
    // 0x3b4434: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b4434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4438:
    // 0x3b4438: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3b4438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3b443c:
    // 0x3b443c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b443cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b4440:
    // 0x3b4440: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3b4440u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3b4444:
    // 0x3b4444: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b4444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b4448:
    // 0x3b4448: 0x3e00008  jr          $ra
label_3b444c:
    if (ctx->pc == 0x3B444Cu) {
        ctx->pc = 0x3B444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4448u;
        // 0x3b444c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4450u;
        goto label_3b4450;
    }
    ctx->pc = 0x3B4448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4448u;
        // 0x3b444c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4450u;
label_3b4450:
    // 0x3b4450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b4454:
    // 0x3b4454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4458:
    // 0x3b4458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b4458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b445c:
    // 0x3b445c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b445cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4460:
    // 0x3b4460: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b4460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b4464:
    // 0x3b4464: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3b4464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3b4468:
    // 0x3b4468: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b4468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b446c:
    // 0x3b446c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3b4470:
    // 0x3b4470: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b4474:
    // 0x3b4474: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_3b4478:
    if (ctx->pc == 0x3B4478u) {
        ctx->pc = 0x3B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4474u;
        // 0x3b4478: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B447Cu;
        goto label_3b447c;
    }
    ctx->pc = 0x3B4474u;
    {
        const bool branch_taken_0x3b4474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4474u;
        // 0x3b4478: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4474) {
            ctx->pc = 0x3B45C4u;
            goto label_3b45c4;
        }
    }
    ctx->pc = 0x3B447Cu;
label_3b447c:
    // 0x3b447c: 0xc0ec416  jal         func_3B1058
label_3b4480:
    if (ctx->pc == 0x3B4480u) {
        ctx->pc = 0x3B4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B447Cu;
        // 0x3b4480: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4484u;
        goto label_3b4484;
    }
    ctx->pc = 0x3B447Cu;
    SET_GPR_U32(ctx, 31, 0x3B4484u);
    ctx->pc = 0x3B4480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B447Cu;
    // 0x3b4480: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3B447Cu, 0x3B4484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4484u;
label_3b4484:
    // 0x3b4484: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_3b4488:
    if (ctx->pc == 0x3B4488u) {
        ctx->pc = 0x3B4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4484u;
        // 0x3b4488: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B448Cu;
        goto label_3b448c;
    }
    ctx->pc = 0x3B4484u;
    {
        const bool branch_taken_0x3b4484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4484) {
            ctx->pc = 0x3B4488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4484u;
            // 0x3b4488: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B45C4u;
            goto label_3b45c4;
        }
    }
    ctx->pc = 0x3B448Cu;
label_3b448c:
    // 0x3b448c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3b448cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3b4490:
    // 0x3b4490: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3b4490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3b4494:
    // 0x3b4494: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3b4494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3b4498:
    // 0x3b4498: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3b4498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3b449c:
    // 0x3b449c: 0x40f809  jalr        $v0
label_3b44a0:
    if (ctx->pc == 0x3B44A0u) {
        ctx->pc = 0x3B44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B449Cu;
        // 0x3b44a0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44A4u;
        goto label_3b44a4;
    }
    ctx->pc = 0x3B449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B44A4u);
        ctx->pc = 0x3B44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B449Cu;
        // 0x3b44a0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B449Cu, 0x3B44A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B44A4u;
label_3b44a4:
    // 0x3b44a4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b44a8:
    // 0x3b44a8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3b44a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b44ac:
    // 0x3b44ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b44acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b44b0:
    // 0x3b44b0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3b44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b44b4:
    // 0x3b44b4: 0x875023  subu        $t2, $a0, $a3
    ctx->pc = 0x3b44b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3b44b8:
    // 0x3b44b8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3b44b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b44bc:
    // 0x3b44bc: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x3b44bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3b44c0:
    // 0x3b44c0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3b44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b44c4:
    // 0x3b44c4: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x3b44c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
label_3b44c8:
    // 0x3b44c8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3b44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b44cc:
    // 0x3b44cc: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x3b44ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b44d0:
    // 0x3b44d0: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x3b44d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3b44d4:
    // 0x3b44d4: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x3b44d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
label_3b44d8:
    // 0x3b44d8: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x3b44d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3b44dc:
    // 0x3b44dc: 0x14860020  bne         $a0, $a2, . + 4 + (0x20 << 2)
label_3b44e0:
    if (ctx->pc == 0x3B44E0u) {
        ctx->pc = 0x3B44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44DCu;
        // 0x3b44e0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44E4u;
        goto label_3b44e4;
    }
    ctx->pc = 0x3B44DCu;
    {
        const bool branch_taken_0x3b44dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3B44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44DCu;
        // 0x3b44e0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b44dc) {
            ctx->pc = 0x3B4560u;
            goto label_3b4560;
        }
    }
    ctx->pc = 0x3B44E4u;
label_3b44e4:
    // 0x3b44e4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b44e8:
    // 0x3b44e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b44e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b44ec:
    // 0x3b44ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3b44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3b44f0:
    // 0x3b44f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b44f4:
    // 0x3b44f4: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
label_3b44f8:
    if (ctx->pc == 0x3B44F8u) {
        ctx->pc = 0x3B44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44F4u;
        // 0x3b44f8: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44FCu;
        goto label_3b44fc;
    }
    ctx->pc = 0x3B44F4u;
    {
        const bool branch_taken_0x3b44f4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3B44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44F4u;
        // 0x3b44f8: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b44f4) {
            ctx->pc = 0x3B45A4u;
            goto label_3b45a4;
        }
    }
    ctx->pc = 0x3B44FCu;
label_3b44fc:
    // 0x3b44fc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3b44fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4500:
    // 0x3b4500: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x3b4500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3b4504:
    // 0x3b4504: 0x0  nop
    ctx->pc = 0x3b4504u;
    // NOP
label_3b4508:
    // 0x3b4508: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x3b4508u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3b450c:
    // 0x3b450c: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x3b450cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3b4510:
    // 0x3b4510: 0xac3021  addu        $a2, $a1, $t4
    ctx->pc = 0x3b4510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_3b4514:
    // 0x3b4514: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x3b4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_3b4518:
    // 0x3b4518: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x3b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_3b451c:
    // 0x3b451c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x3b451cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_3b4520:
    // 0x3b4520: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x3b4520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_3b4524:
    // 0x3b4524: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3b4524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3b4528:
    // 0x3b4528: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b4528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3b452c:
    // 0x3b452c: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x3b452cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3b4530:
    // 0x3b4530: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3b4530u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_3b4534:
    // 0x3b4534: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x3b4534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_3b4538:
    // 0x3b4538: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3b4538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3b453c:
    // 0x3b453c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x3b453cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3b4540:
    // 0x3b4540: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3b4540u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_3b4544:
    // 0x3b4544: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x3b4544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_3b4548:
    // 0x3b4548: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b4548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b454c:
    // 0x3b454c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
label_3b4550:
    if (ctx->pc == 0x3B4550u) {
        ctx->pc = 0x3B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B454Cu;
        // 0x3b4550: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4554u;
        goto label_3b4554;
    }
    ctx->pc = 0x3B454Cu;
    {
        const bool branch_taken_0x3b454c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B454Cu;
        // 0x3b4550: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b454c) {
            ctx->pc = 0x3B4508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4508;
        }
    }
    ctx->pc = 0x3B4554u;
label_3b4554:
    // 0x3b4554: 0x10000013  b           . + 4 + (0x13 << 2)
label_3b4558:
    if (ctx->pc == 0x3B4558u) {
        ctx->pc = 0x3B4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4554u;
        // 0x3b4558: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B455Cu;
        goto label_3b455c;
    }
    ctx->pc = 0x3B4554u;
    {
        const bool branch_taken_0x3b4554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4554u;
        // 0x3b4558: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4554) {
            ctx->pc = 0x3B45A4u;
            goto label_3b45a4;
        }
    }
    ctx->pc = 0x3B455Cu;
label_3b455c:
    // 0x3b455c: 0x0  nop
    ctx->pc = 0x3b455cu;
    // NOP
label_3b4560:
    // 0x3b4560: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
label_3b4564:
    if (ctx->pc == 0x3B4564u) {
        ctx->pc = 0x3B4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4560u;
        // 0x3b4564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4568u;
        goto label_3b4568;
    }
    ctx->pc = 0x3B4560u;
    {
        const bool branch_taken_0x3b4560 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3B4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4560u;
        // 0x3b4564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4560) {
            ctx->pc = 0x3B45A4u;
            goto label_3b45a4;
        }
    }
    ctx->pc = 0x3B4568u;
label_3b4568:
    // 0x3b4568: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x3b4568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3b456c:
    // 0x3b456c: 0x0  nop
    ctx->pc = 0x3b456cu;
    // NOP
label_3b4570:
    // 0x3b4570: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x3b4570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3b4574:
    // 0x3b4574: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3b4574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3b4578:
    // 0x3b4578: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x3b4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3b457c:
    // 0x3b457c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x3b457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_3b4580:
    // 0x3b4580: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3b4580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3b4584:
    // 0x3b4584: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x3b4584u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3b4588:
    // 0x3b4588: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x3b4588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3b458c:
    // 0x3b458c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3b458cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_3b4590:
    // 0x3b4590: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3b4590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_3b4594:
    // 0x3b4594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b4594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b4598:
    // 0x3b4598: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_3b459c:
    if (ctx->pc == 0x3B459Cu) {
        ctx->pc = 0x3B459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4598u;
        // 0x3b459c: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45A0u;
        goto label_3b45a0;
    }
    ctx->pc = 0x3B4598u;
    {
        const bool branch_taken_0x3b4598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4598u;
        // 0x3b459c: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4598) {
            ctx->pc = 0x3B4570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4570;
        }
    }
    ctx->pc = 0x3B45A0u;
label_3b45a0:
    // 0x3b45a0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b45a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b45a4:
    // 0x3b45a4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b45a8:
    // 0x3b45a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b45ac:
    // 0x3b45ac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3b45acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3b45b0:
    // 0x3b45b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b45b4:
    // 0x3b45b4: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x3b45b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b45b8:
    // 0x3b45b8: 0xae0a0090  sw          $t2, 0x90($s0)
    ctx->pc = 0x3b45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 10));
label_3b45bc:
    // 0x3b45bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b45c0:
    // 0x3b45c0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3b45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3b45c4:
    // 0x3b45c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b45c8:
    // 0x3b45c8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3b45cc:
    if (ctx->pc == 0x3B45CCu) {
        ctx->pc = 0x3B45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45C8u;
        // 0x3b45cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45D0u;
        goto label_3b45d0;
    }
    ctx->pc = 0x3B45C8u;
    {
        const bool branch_taken_0x3b45c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b45c8) {
            ctx->pc = 0x3B45CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B45C8u;
            // 0x3b45cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B45F0u;
            goto label_3b45f0;
        }
    }
    ctx->pc = 0x3B45D0u;
label_3b45d0:
    // 0x3b45d0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3b45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3b45d4:
    // 0x3b45d4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3b45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3b45d8:
    // 0x3b45d8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3b45d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3b45dc:
    // 0x3b45dc: 0x60f809  jalr        $v1
label_3b45e0:
    if (ctx->pc == 0x3B45E0u) {
        ctx->pc = 0x3B45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45DCu;
        // 0x3b45e0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45E4u;
        goto label_3b45e4;
    }
    ctx->pc = 0x3B45DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B45E4u);
        ctx->pc = 0x3B45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45DCu;
        // 0x3b45e0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B45DCu, 0x3B45E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B45E4u;
label_3b45e4:
    // 0x3b45e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b45e8:
    // 0x3b45e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b45e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b45ec:
    // 0x3b45ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b45ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b45f0:
    // 0x3b45f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b45f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b45f4:
    // 0x3b45f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b45f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b45f8:
    // 0x3b45f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b45f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b45fc:
    // 0x3b45fc: 0x3e00008  jr          $ra
label_3b4600:
    if (ctx->pc == 0x3B4600u) {
        ctx->pc = 0x3B4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45FCu;
        // 0x3b4600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4604u;
        goto label_3b4604;
    }
    ctx->pc = 0x3B45FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45FCu;
        // 0x3b4600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B45FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4604u;
label_3b4604:
    // 0x3b4604: 0x0  nop
    ctx->pc = 0x3b4604u;
    // NOP
label_3b4608:
    // 0x3b4608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b460c:
    // 0x3b460c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4610:
    // 0x3b4610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b4610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b4614:
    // 0x3b4614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4618:
    // 0x3b4618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b461c:
    // 0x3b461c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3b461cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3b4620:
    // 0x3b4620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b4620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b4624:
    // 0x3b4624: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b4624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3b4628:
    // 0x3b4628: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b4628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b462c:
    // 0x3b462c: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_3b4630:
    if (ctx->pc == 0x3B4630u) {
        ctx->pc = 0x3B4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B462Cu;
        // 0x3b4630: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4634u;
        goto label_3b4634;
    }
    ctx->pc = 0x3B462Cu;
    {
        const bool branch_taken_0x3b462c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B462Cu;
        // 0x3b4630: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b462c) {
            ctx->pc = 0x3B4748u;
            goto label_3b4748;
        }
    }
    ctx->pc = 0x3B4634u;
label_3b4634:
    // 0x3b4634: 0xc0ec416  jal         func_3B1058
label_3b4638:
    if (ctx->pc == 0x3B4638u) {
        ctx->pc = 0x3B4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4634u;
        // 0x3b4638: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B463Cu;
        goto label_3b463c;
    }
    ctx->pc = 0x3B4634u;
    SET_GPR_U32(ctx, 31, 0x3B463Cu);
    ctx->pc = 0x3B4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4634u;
    // 0x3b4638: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3B4634u, 0x3B463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B463Cu;
label_3b463c:
    // 0x3b463c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_3b4640:
    if (ctx->pc == 0x3B4640u) {
        ctx->pc = 0x3B4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B463Cu;
        // 0x3b4640: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4644u;
        goto label_3b4644;
    }
    ctx->pc = 0x3B463Cu;
    {
        const bool branch_taken_0x3b463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b463c) {
            ctx->pc = 0x3B4640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B463Cu;
            // 0x3b4640: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4748u;
            goto label_3b4748;
        }
    }
    ctx->pc = 0x3B4644u;
label_3b4644:
    // 0x3b4644: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3b4644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3b4648:
    // 0x3b4648: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3b4648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3b464c:
    // 0x3b464c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3b464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3b4650:
    // 0x3b4650: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3b4650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3b4654:
    // 0x3b4654: 0x40f809  jalr        $v0
label_3b4658:
    if (ctx->pc == 0x3B4658u) {
        ctx->pc = 0x3B4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4654u;
        // 0x3b4658: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B465Cu;
        goto label_3b465c;
    }
    ctx->pc = 0x3B4654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B465Cu);
        ctx->pc = 0x3B4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4654u;
        // 0x3b4658: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4654u, 0x3B465Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B465Cu;
label_3b465c:
    // 0x3b465c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b465cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b4660:
    // 0x3b4660: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x3b4660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b4664:
    // 0x3b4664: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b4664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4668:
    // 0x3b4668: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3b4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b466c:
    // 0x3b466c: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x3b466cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_3b4670:
    // 0x3b4670: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3b4670u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b4674:
    // 0x3b4674: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x3b4674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b4678:
    // 0x3b4678: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3b4678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b467c:
    // 0x3b467c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x3b467cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_3b4680:
    // 0x3b4680: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x3b4680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3b4684:
    // 0x3b4684: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x3b4684u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b4688:
    // 0x3b4688: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x3b4688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b468c:
    // 0x3b468c: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x3b468cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_3b4690:
    // 0x3b4690: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x3b4690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3b4694:
    // 0x3b4694: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_3b4698:
    if (ctx->pc == 0x3B4698u) {
        ctx->pc = 0x3B4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4694u;
        // 0x3b4698: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B469Cu;
        goto label_3b469c;
    }
    ctx->pc = 0x3B4694u;
    {
        const bool branch_taken_0x3b4694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3B4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4694u;
        // 0x3b4698: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4694) {
            ctx->pc = 0x3B46F8u;
            goto label_3b46f8;
        }
    }
    ctx->pc = 0x3B469Cu;
label_3b469c:
    // 0x3b469c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b46a0:
    // 0x3b46a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b46a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b46a4:
    // 0x3b46a4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3b46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3b46a8:
    // 0x3b46a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b46ac:
    // 0x3b46ac: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_3b46b0:
    if (ctx->pc == 0x3B46B0u) {
        ctx->pc = 0x3B46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46ACu;
        // 0x3b46b0: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B46B4u;
        goto label_3b46b4;
    }
    ctx->pc = 0x3B46ACu;
    {
        const bool branch_taken_0x3b46ac = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3B46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46ACu;
        // 0x3b46b0: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46ac) {
            ctx->pc = 0x3B472Cu;
            goto label_3b472c;
        }
    }
    ctx->pc = 0x3B46B4u;
label_3b46b4:
    // 0x3b46b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b46b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b46b8:
    // 0x3b46b8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b46b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3b46bc:
    // 0x3b46bc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3b46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b46c0:
    // 0x3b46c0: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x3b46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_3b46c4:
    // 0x3b46c4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3b46c8:
    // 0x3b46c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b46cc:
    // 0x3b46cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b46ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b46d0:
    // 0x3b46d0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3b46d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_3b46d4:
    // 0x3b46d4: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x3b46d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b46d8:
    // 0x3b46d8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3b46d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3b46dc:
    // 0x3b46dc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3b46dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3b46e0:
    // 0x3b46e0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b46e4:
    // 0x3b46e4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_3b46e8:
    if (ctx->pc == 0x3B46E8u) {
        ctx->pc = 0x3B46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46E4u;
        // 0x3b46e8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B46ECu;
        goto label_3b46ec;
    }
    ctx->pc = 0x3B46E4u;
    {
        const bool branch_taken_0x3b46e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46E4u;
        // 0x3b46e8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46e4) {
            ctx->pc = 0x3B46B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b46b8;
        }
    }
    ctx->pc = 0x3B46ECu;
label_3b46ec:
    // 0x3b46ec: 0x1000000f  b           . + 4 + (0xF << 2)
label_3b46f0:
    if (ctx->pc == 0x3B46F0u) {
        ctx->pc = 0x3B46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46ECu;
        // 0x3b46f0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B46F4u;
        goto label_3b46f4;
    }
    ctx->pc = 0x3B46ECu;
    {
        const bool branch_taken_0x3b46ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46ECu;
        // 0x3b46f0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46ec) {
            ctx->pc = 0x3B472Cu;
            goto label_3b472c;
        }
    }
    ctx->pc = 0x3B46F4u;
label_3b46f4:
    // 0x3b46f4: 0x0  nop
    ctx->pc = 0x3b46f4u;
    // NOP
label_3b46f8:
    // 0x3b46f8: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3b46fc:
    if (ctx->pc == 0x3B46FCu) {
        ctx->pc = 0x3B46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46F8u;
        // 0x3b46fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4700u;
        goto label_3b4700;
    }
    ctx->pc = 0x3B46F8u;
    {
        const bool branch_taken_0x3b46f8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3B46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46F8u;
        // 0x3b46fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46f8) {
            ctx->pc = 0x3B472Cu;
            goto label_3b472c;
        }
    }
    ctx->pc = 0x3B4700u;
label_3b4700:
    // 0x3b4700: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3b4700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b4704:
    // 0x3b4704: 0x0  nop
    ctx->pc = 0x3b4704u;
    // NOP
label_3b4708:
    // 0x3b4708: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x3b4708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_3b470c:
    // 0x3b470c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b470cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b4710:
    // 0x3b4710: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b4710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b4714:
    // 0x3b4714: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x3b4714u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b4718:
    // 0x3b4718: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b4718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3b471c:
    // 0x3b471c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3b471cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3b4720:
    // 0x3b4720: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_3b4724:
    if (ctx->pc == 0x3B4724u) {
        ctx->pc = 0x3B4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4720u;
        // 0x3b4724: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4728u;
        goto label_3b4728;
    }
    ctx->pc = 0x3B4720u;
    {
        const bool branch_taken_0x3b4720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4720u;
        // 0x3b4724: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4720) {
            ctx->pc = 0x3B4708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4708;
        }
    }
    ctx->pc = 0x3B4728u;
label_3b4728:
    // 0x3b4728: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b4728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b472c:
    // 0x3b472c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b472cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b4730:
    // 0x3b4730: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b4730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4734:
    // 0x3b4734: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3b4734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3b4738:
    // 0x3b4738: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b4738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b473c:
    // 0x3b473c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x3b473cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b4740:
    // 0x3b4740: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x3b4740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_3b4744:
    // 0x3b4744: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3b4744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3b4748:
    // 0x3b4748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b474c:
    // 0x3b474c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3b4750:
    if (ctx->pc == 0x3B4750u) {
        ctx->pc = 0x3B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B474Cu;
        // 0x3b4750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4754u;
        goto label_3b4754;
    }
    ctx->pc = 0x3B474Cu;
    {
        const bool branch_taken_0x3b474c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b474c) {
            ctx->pc = 0x3B4750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B474Cu;
            // 0x3b4750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4774u;
            goto label_3b4774;
        }
    }
    ctx->pc = 0x3B4754u;
label_3b4754:
    // 0x3b4754: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3b4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3b4758:
    // 0x3b4758: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3b4758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3b475c:
    // 0x3b475c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3b475cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3b4760:
    // 0x3b4760: 0x60f809  jalr        $v1
label_3b4764:
    if (ctx->pc == 0x3B4764u) {
        ctx->pc = 0x3B4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4760u;
        // 0x3b4764: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4768u;
        goto label_3b4768;
    }
    ctx->pc = 0x3B4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B4768u);
        ctx->pc = 0x3B4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4760u;
        // 0x3b4764: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4760u, 0x3B4768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4768u;
label_3b4768:
    // 0x3b4768: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b476c:
    // 0x3b476c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b476cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b4770:
    // 0x3b4770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b4770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4774:
    // 0x3b4774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b4774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b4778:
    // 0x3b4778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b4778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b477c:
    // 0x3b477c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b477cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b4780:
    // 0x3b4780: 0x3e00008  jr          $ra
label_3b4784:
    if (ctx->pc == 0x3B4784u) {
        ctx->pc = 0x3B4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4780u;
        // 0x3b4784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4788u;
        goto label_fallthrough_0x3b4780;
    }
    ctx->pc = 0x3B4780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4780u;
        // 0x3b4784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b4780:
    ctx->pc = 0x3B4788u;
}

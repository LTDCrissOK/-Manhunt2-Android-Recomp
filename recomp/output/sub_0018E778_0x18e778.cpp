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

// Function: sub_0018E778
// Address: 0x18e778 - 0x18ebe8
void sub_0018E778_0x18e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E778_0x18e778");
#endif

    switch (ctx->pc) {
        case 0x18e778u: goto label_18e778;
        case 0x18e77cu: goto label_18e77c;
        case 0x18e780u: goto label_18e780;
        case 0x18e784u: goto label_18e784;
        case 0x18e788u: goto label_18e788;
        case 0x18e78cu: goto label_18e78c;
        case 0x18e790u: goto label_18e790;
        case 0x18e794u: goto label_18e794;
        case 0x18e798u: goto label_18e798;
        case 0x18e79cu: goto label_18e79c;
        case 0x18e7a0u: goto label_18e7a0;
        case 0x18e7a4u: goto label_18e7a4;
        case 0x18e7a8u: goto label_18e7a8;
        case 0x18e7acu: goto label_18e7ac;
        case 0x18e7b0u: goto label_18e7b0;
        case 0x18e7b4u: goto label_18e7b4;
        case 0x18e7b8u: goto label_18e7b8;
        case 0x18e7bcu: goto label_18e7bc;
        case 0x18e7c0u: goto label_18e7c0;
        case 0x18e7c4u: goto label_18e7c4;
        case 0x18e7c8u: goto label_18e7c8;
        case 0x18e7ccu: goto label_18e7cc;
        case 0x18e7d0u: goto label_18e7d0;
        case 0x18e7d4u: goto label_18e7d4;
        case 0x18e7d8u: goto label_18e7d8;
        case 0x18e7dcu: goto label_18e7dc;
        case 0x18e7e0u: goto label_18e7e0;
        case 0x18e7e4u: goto label_18e7e4;
        case 0x18e7e8u: goto label_18e7e8;
        case 0x18e7ecu: goto label_18e7ec;
        case 0x18e7f0u: goto label_18e7f0;
        case 0x18e7f4u: goto label_18e7f4;
        case 0x18e7f8u: goto label_18e7f8;
        case 0x18e7fcu: goto label_18e7fc;
        case 0x18e800u: goto label_18e800;
        case 0x18e804u: goto label_18e804;
        case 0x18e808u: goto label_18e808;
        case 0x18e80cu: goto label_18e80c;
        case 0x18e810u: goto label_18e810;
        case 0x18e814u: goto label_18e814;
        case 0x18e818u: goto label_18e818;
        case 0x18e81cu: goto label_18e81c;
        case 0x18e820u: goto label_18e820;
        case 0x18e824u: goto label_18e824;
        case 0x18e828u: goto label_18e828;
        case 0x18e82cu: goto label_18e82c;
        case 0x18e830u: goto label_18e830;
        case 0x18e834u: goto label_18e834;
        case 0x18e838u: goto label_18e838;
        case 0x18e83cu: goto label_18e83c;
        case 0x18e840u: goto label_18e840;
        case 0x18e844u: goto label_18e844;
        case 0x18e848u: goto label_18e848;
        case 0x18e84cu: goto label_18e84c;
        case 0x18e850u: goto label_18e850;
        case 0x18e854u: goto label_18e854;
        case 0x18e858u: goto label_18e858;
        case 0x18e85cu: goto label_18e85c;
        case 0x18e860u: goto label_18e860;
        case 0x18e864u: goto label_18e864;
        case 0x18e868u: goto label_18e868;
        case 0x18e86cu: goto label_18e86c;
        case 0x18e870u: goto label_18e870;
        case 0x18e874u: goto label_18e874;
        case 0x18e878u: goto label_18e878;
        case 0x18e87cu: goto label_18e87c;
        case 0x18e880u: goto label_18e880;
        case 0x18e884u: goto label_18e884;
        case 0x18e888u: goto label_18e888;
        case 0x18e88cu: goto label_18e88c;
        case 0x18e890u: goto label_18e890;
        case 0x18e894u: goto label_18e894;
        case 0x18e898u: goto label_18e898;
        case 0x18e89cu: goto label_18e89c;
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8a4u: goto label_18e8a4;
        case 0x18e8a8u: goto label_18e8a8;
        case 0x18e8acu: goto label_18e8ac;
        case 0x18e8b0u: goto label_18e8b0;
        case 0x18e8b4u: goto label_18e8b4;
        case 0x18e8b8u: goto label_18e8b8;
        case 0x18e8bcu: goto label_18e8bc;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8c8u: goto label_18e8c8;
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8d0u: goto label_18e8d0;
        case 0x18e8d4u: goto label_18e8d4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8dcu: goto label_18e8dc;
        case 0x18e8e0u: goto label_18e8e0;
        case 0x18e8e4u: goto label_18e8e4;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e8f0u: goto label_18e8f0;
        case 0x18e8f4u: goto label_18e8f4;
        case 0x18e8f8u: goto label_18e8f8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e900u: goto label_18e900;
        case 0x18e904u: goto label_18e904;
        case 0x18e908u: goto label_18e908;
        case 0x18e90cu: goto label_18e90c;
        case 0x18e910u: goto label_18e910;
        case 0x18e914u: goto label_18e914;
        case 0x18e918u: goto label_18e918;
        case 0x18e91cu: goto label_18e91c;
        case 0x18e920u: goto label_18e920;
        case 0x18e924u: goto label_18e924;
        case 0x18e928u: goto label_18e928;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e930u: goto label_18e930;
        case 0x18e934u: goto label_18e934;
        case 0x18e938u: goto label_18e938;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e940u: goto label_18e940;
        case 0x18e944u: goto label_18e944;
        case 0x18e948u: goto label_18e948;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e950u: goto label_18e950;
        case 0x18e954u: goto label_18e954;
        case 0x18e958u: goto label_18e958;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e960u: goto label_18e960;
        case 0x18e964u: goto label_18e964;
        case 0x18e968u: goto label_18e968;
        case 0x18e96cu: goto label_18e96c;
        case 0x18e970u: goto label_18e970;
        case 0x18e974u: goto label_18e974;
        case 0x18e978u: goto label_18e978;
        case 0x18e97cu: goto label_18e97c;
        case 0x18e980u: goto label_18e980;
        case 0x18e984u: goto label_18e984;
        case 0x18e988u: goto label_18e988;
        case 0x18e98cu: goto label_18e98c;
        case 0x18e990u: goto label_18e990;
        case 0x18e994u: goto label_18e994;
        case 0x18e998u: goto label_18e998;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a4u: goto label_18e9a4;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9acu: goto label_18e9ac;
        case 0x18e9b0u: goto label_18e9b0;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9b8u: goto label_18e9b8;
        case 0x18e9bcu: goto label_18e9bc;
        case 0x18e9c0u: goto label_18e9c0;
        case 0x18e9c4u: goto label_18e9c4;
        case 0x18e9c8u: goto label_18e9c8;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        case 0x18e9d8u: goto label_18e9d8;
        case 0x18e9dcu: goto label_18e9dc;
        case 0x18e9e0u: goto label_18e9e0;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9e8u: goto label_18e9e8;
        case 0x18e9ecu: goto label_18e9ec;
        case 0x18e9f0u: goto label_18e9f0;
        case 0x18e9f4u: goto label_18e9f4;
        case 0x18e9f8u: goto label_18e9f8;
        case 0x18e9fcu: goto label_18e9fc;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea04u: goto label_18ea04;
        case 0x18ea08u: goto label_18ea08;
        case 0x18ea0cu: goto label_18ea0c;
        case 0x18ea10u: goto label_18ea10;
        case 0x18ea14u: goto label_18ea14;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea1cu: goto label_18ea1c;
        case 0x18ea20u: goto label_18ea20;
        case 0x18ea24u: goto label_18ea24;
        case 0x18ea28u: goto label_18ea28;
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea30u: goto label_18ea30;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea38u: goto label_18ea38;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea40u: goto label_18ea40;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea48u: goto label_18ea48;
        case 0x18ea4cu: goto label_18ea4c;
        case 0x18ea50u: goto label_18ea50;
        case 0x18ea54u: goto label_18ea54;
        case 0x18ea58u: goto label_18ea58;
        case 0x18ea5cu: goto label_18ea5c;
        case 0x18ea60u: goto label_18ea60;
        case 0x18ea64u: goto label_18ea64;
        case 0x18ea68u: goto label_18ea68;
        case 0x18ea6cu: goto label_18ea6c;
        case 0x18ea70u: goto label_18ea70;
        case 0x18ea74u: goto label_18ea74;
        case 0x18ea78u: goto label_18ea78;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea80u: goto label_18ea80;
        case 0x18ea84u: goto label_18ea84;
        case 0x18ea88u: goto label_18ea88;
        case 0x18ea8cu: goto label_18ea8c;
        case 0x18ea90u: goto label_18ea90;
        case 0x18ea94u: goto label_18ea94;
        case 0x18ea98u: goto label_18ea98;
        case 0x18ea9cu: goto label_18ea9c;
        case 0x18eaa0u: goto label_18eaa0;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eaa8u: goto label_18eaa8;
        case 0x18eaacu: goto label_18eaac;
        case 0x18eab0u: goto label_18eab0;
        case 0x18eab4u: goto label_18eab4;
        case 0x18eab8u: goto label_18eab8;
        case 0x18eabcu: goto label_18eabc;
        case 0x18eac0u: goto label_18eac0;
        case 0x18eac4u: goto label_18eac4;
        case 0x18eac8u: goto label_18eac8;
        case 0x18eaccu: goto label_18eacc;
        case 0x18ead0u: goto label_18ead0;
        case 0x18ead4u: goto label_18ead4;
        case 0x18ead8u: goto label_18ead8;
        case 0x18eadcu: goto label_18eadc;
        case 0x18eae0u: goto label_18eae0;
        case 0x18eae4u: goto label_18eae4;
        case 0x18eae8u: goto label_18eae8;
        case 0x18eaecu: goto label_18eaec;
        case 0x18eaf0u: goto label_18eaf0;
        case 0x18eaf4u: goto label_18eaf4;
        case 0x18eaf8u: goto label_18eaf8;
        case 0x18eafcu: goto label_18eafc;
        case 0x18eb00u: goto label_18eb00;
        case 0x18eb04u: goto label_18eb04;
        case 0x18eb08u: goto label_18eb08;
        case 0x18eb0cu: goto label_18eb0c;
        case 0x18eb10u: goto label_18eb10;
        case 0x18eb14u: goto label_18eb14;
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb1cu: goto label_18eb1c;
        case 0x18eb20u: goto label_18eb20;
        case 0x18eb24u: goto label_18eb24;
        case 0x18eb28u: goto label_18eb28;
        case 0x18eb2cu: goto label_18eb2c;
        case 0x18eb30u: goto label_18eb30;
        case 0x18eb34u: goto label_18eb34;
        case 0x18eb38u: goto label_18eb38;
        case 0x18eb3cu: goto label_18eb3c;
        case 0x18eb40u: goto label_18eb40;
        case 0x18eb44u: goto label_18eb44;
        case 0x18eb48u: goto label_18eb48;
        case 0x18eb4cu: goto label_18eb4c;
        case 0x18eb50u: goto label_18eb50;
        case 0x18eb54u: goto label_18eb54;
        case 0x18eb58u: goto label_18eb58;
        case 0x18eb5cu: goto label_18eb5c;
        case 0x18eb60u: goto label_18eb60;
        case 0x18eb64u: goto label_18eb64;
        case 0x18eb68u: goto label_18eb68;
        case 0x18eb6cu: goto label_18eb6c;
        case 0x18eb70u: goto label_18eb70;
        case 0x18eb74u: goto label_18eb74;
        case 0x18eb78u: goto label_18eb78;
        case 0x18eb7cu: goto label_18eb7c;
        case 0x18eb80u: goto label_18eb80;
        case 0x18eb84u: goto label_18eb84;
        case 0x18eb88u: goto label_18eb88;
        case 0x18eb8cu: goto label_18eb8c;
        case 0x18eb90u: goto label_18eb90;
        case 0x18eb94u: goto label_18eb94;
        case 0x18eb98u: goto label_18eb98;
        case 0x18eb9cu: goto label_18eb9c;
        case 0x18eba0u: goto label_18eba0;
        case 0x18eba4u: goto label_18eba4;
        case 0x18eba8u: goto label_18eba8;
        case 0x18ebacu: goto label_18ebac;
        case 0x18ebb0u: goto label_18ebb0;
        case 0x18ebb4u: goto label_18ebb4;
        case 0x18ebb8u: goto label_18ebb8;
        case 0x18ebbcu: goto label_18ebbc;
        case 0x18ebc0u: goto label_18ebc0;
        case 0x18ebc4u: goto label_18ebc4;
        case 0x18ebc8u: goto label_18ebc8;
        case 0x18ebccu: goto label_18ebcc;
        case 0x18ebd0u: goto label_18ebd0;
        case 0x18ebd4u: goto label_18ebd4;
        case 0x18ebd8u: goto label_18ebd8;
        case 0x18ebdcu: goto label_18ebdc;
        case 0x18ebe0u: goto label_18ebe0;
        case 0x18ebe4u: goto label_18ebe4;
        default: break;
    }

    ctx->pc = 0x18e778u;

label_18e778:
    // 0x18e778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18e77c:
    // 0x18e77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18e780:
    // 0x18e780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e784:
    // 0x18e784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18e788:
    // 0x18e788: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_18e78c:
    // 0x18e78c: 0xc061a2a  jal         func_1868A8
label_18e790:
    if (ctx->pc == 0x18E790u) {
        ctx->pc = 0x18E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E78Cu;
        // 0x18e790: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E794u;
        goto label_18e794;
    }
    ctx->pc = 0x18E78Cu;
    SET_GPR_U32(ctx, 31, 0x18E794u);
    ctx->pc = 0x18E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E78Cu;
    // 0x18e790: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E78Cu, 0x18E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E794u;
label_18e794:
    // 0x18e794: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18e798:
    // 0x18e798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e79c:
    // 0x18e79c: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
label_18e7a0:
    if (ctx->pc == 0x18E7A0u) {
        ctx->pc = 0x18E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E79Cu;
        // 0x18e7a0: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7A4u;
        goto label_18e7a4;
    }
    ctx->pc = 0x18E79Cu;
    {
        const bool branch_taken_0x18e79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e79c) {
            ctx->pc = 0x18E7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E79Cu;
            // 0x18e7a0: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E85Cu;
            goto label_18e85c;
        }
    }
    ctx->pc = 0x18E7A4u;
label_18e7a4:
    // 0x18e7a4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x18e7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_18e7a8:
    // 0x18e7a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18e7ac:
    // 0x18e7ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18e7b0:
    if (ctx->pc == 0x18E7B0u) {
        ctx->pc = 0x18E7B4u;
        goto label_18e7b4;
    }
    ctx->pc = 0x18E7ACu;
    {
        const bool branch_taken_0x18e7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e7ac) {
            ctx->pc = 0x18E7F4u;
            goto label_18e7f4;
        }
    }
    ctx->pc = 0x18E7B4u;
label_18e7b4:
    // 0x18e7b4: 0xc061a12  jal         func_186848
label_18e7b8:
    if (ctx->pc == 0x18E7B8u) {
        ctx->pc = 0x18E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7B4u;
        // 0x18e7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7BCu;
        goto label_18e7bc;
    }
    ctx->pc = 0x18E7B4u;
    SET_GPR_U32(ctx, 31, 0x18E7BCu);
    ctx->pc = 0x18E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7B4u;
    // 0x18e7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E7B4u, 0x18E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E7BCu;
label_18e7bc:
    // 0x18e7bc: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x18e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_18e7c0:
    // 0x18e7c0: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_18e7c4:
    if (ctx->pc == 0x18E7C4u) {
        ctx->pc = 0x18E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7C0u;
        // 0x18e7c4: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7C8u;
        goto label_18e7c8;
    }
    ctx->pc = 0x18E7C0u;
    {
        const bool branch_taken_0x18e7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7c0) {
            ctx->pc = 0x18E7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E7C0u;
            // 0x18e7c4: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E85Cu;
            goto label_18e85c;
        }
    }
    ctx->pc = 0x18E7C8u;
label_18e7c8:
    // 0x18e7c8: 0xc061a12  jal         func_186848
label_18e7cc:
    if (ctx->pc == 0x18E7CCu) {
        ctx->pc = 0x18E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7C8u;
        // 0x18e7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7D0u;
        goto label_18e7d0;
    }
    ctx->pc = 0x18E7C8u;
    SET_GPR_U32(ctx, 31, 0x18E7D0u);
    ctx->pc = 0x18E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7C8u;
    // 0x18e7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E7C8u, 0x18E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E7D0u;
label_18e7d0:
    // 0x18e7d0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e7d4:
    // 0x18e7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e7d8:
    // 0x18e7d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18e7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e7dc:
    // 0x18e7dc: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_18e7e0:
    // 0x18e7e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e7e4:
    // 0x18e7e4: 0x40f809  jalr        $v0
label_18e7e8:
    if (ctx->pc == 0x18E7E8u) {
        ctx->pc = 0x18E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7E4u;
        // 0x18e7e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7ECu;
        goto label_18e7ec;
    }
    ctx->pc = 0x18E7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E7ECu);
        ctx->pc = 0x18E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7E4u;
        // 0x18e7e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E7E4u, 0x18E7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E7ECu;
label_18e7ec:
    // 0x18e7ec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18e7f0:
    if (ctx->pc == 0x18E7F0u) {
        ctx->pc = 0x18E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7ECu;
        // 0x18e7f0: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7F4u;
        goto label_18e7f4;
    }
    ctx->pc = 0x18E7ECu;
    {
        const bool branch_taken_0x18e7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7ECu;
        // 0x18e7f0: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7ec) {
            ctx->pc = 0x18E85Cu;
            goto label_18e85c;
        }
    }
    ctx->pc = 0x18E7F4u;
label_18e7f4:
    // 0x18e7f4: 0xc061a12  jal         func_186848
label_18e7f8:
    if (ctx->pc == 0x18E7F8u) {
        ctx->pc = 0x18E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7F4u;
        // 0x18e7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7FCu;
        goto label_18e7fc;
    }
    ctx->pc = 0x18E7F4u;
    SET_GPR_U32(ctx, 31, 0x18E7FCu);
    ctx->pc = 0x18E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7F4u;
    // 0x18e7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E7F4u, 0x18E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E7FCu;
label_18e7fc:
    // 0x18e7fc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e800:
    // 0x18e800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e804:
    // 0x18e804: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18e808:
    // 0x18e808: 0x40f809  jalr        $v0
label_18e80c:
    if (ctx->pc == 0x18E80Cu) {
        ctx->pc = 0x18E810u;
        goto label_18e810;
    }
    ctx->pc = 0x18E808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E810u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E808u, 0x18E810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E810u;
label_18e810:
    // 0x18e810: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_18e814:
    if (ctx->pc == 0x18E814u) {
        ctx->pc = 0x18E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E810u;
        // 0x18e814: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E818u;
        goto label_18e818;
    }
    ctx->pc = 0x18E810u;
    {
        const bool branch_taken_0x18e810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e810) {
            ctx->pc = 0x18E814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E810u;
            // 0x18e814: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E85Cu;
            goto label_18e85c;
        }
    }
    ctx->pc = 0x18E818u;
label_18e818:
    // 0x18e818: 0xc061a12  jal         func_186848
label_18e81c:
    if (ctx->pc == 0x18E81Cu) {
        ctx->pc = 0x18E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E818u;
        // 0x18e81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E820u;
        goto label_18e820;
    }
    ctx->pc = 0x18E818u;
    SET_GPR_U32(ctx, 31, 0x18E820u);
    ctx->pc = 0x18E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E818u;
    // 0x18e81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E818u, 0x18E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E820u;
label_18e820:
    // 0x18e820: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x18e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_18e824:
    // 0x18e824: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x18e824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_18e828:
    // 0x18e828: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18e82c:
    // 0x18e82c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_18e830:
    if (ctx->pc == 0x18E830u) {
        ctx->pc = 0x18E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E82Cu;
        // 0x18e830: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E834u;
        goto label_18e834;
    }
    ctx->pc = 0x18E82Cu;
    {
        const bool branch_taken_0x18e82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E82Cu;
        // 0x18e830: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e82c) {
            ctx->pc = 0x18E858u;
            goto label_18e858;
        }
    }
    ctx->pc = 0x18E834u;
label_18e834:
    // 0x18e834: 0xc061a12  jal         func_186848
label_18e838:
    if (ctx->pc == 0x18E838u) {
        ctx->pc = 0x18E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E834u;
        // 0x18e838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E83Cu;
        goto label_18e83c;
    }
    ctx->pc = 0x18E834u;
    SET_GPR_U32(ctx, 31, 0x18E83Cu);
    ctx->pc = 0x18E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E834u;
    // 0x18e838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E834u, 0x18E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E83Cu;
label_18e83c:
    // 0x18e83c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e840:
    // 0x18e840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e844:
    // 0x18e844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18e844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e848:
    // 0x18e848: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18e848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18e84c:
    // 0x18e84c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e850:
    // 0x18e850: 0x40f809  jalr        $v0
label_18e854:
    if (ctx->pc == 0x18E854u) {
        ctx->pc = 0x18E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E850u;
        // 0x18e854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E858u;
        goto label_18e858;
    }
    ctx->pc = 0x18E850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E858u);
        ctx->pc = 0x18E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E850u;
        // 0x18e854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E850u, 0x18E858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E858u;
label_18e858:
    // 0x18e858: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_18e85c:
    // 0x18e85c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18e860:
    if (ctx->pc == 0x18E860u) {
        ctx->pc = 0x18E864u;
        goto label_18e864;
    }
    ctx->pc = 0x18E85Cu;
    {
        const bool branch_taken_0x18e85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e85c) {
            ctx->pc = 0x18E880u;
            goto label_18e880;
        }
    }
    ctx->pc = 0x18E864u;
label_18e864:
    // 0x18e864: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_18e868:
    // 0x18e868: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18e86c:
    // 0x18e86c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e870:
    // 0x18e870: 0x40f809  jalr        $v0
label_18e874:
    if (ctx->pc == 0x18E874u) {
        ctx->pc = 0x18E878u;
        goto label_18e878;
    }
    ctx->pc = 0x18E870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E870u, 0x18E878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E878u;
label_18e878:
    // 0x18e878: 0x1000000d  b           . + 4 + (0xD << 2)
label_18e87c:
    if (ctx->pc == 0x18E87Cu) {
        ctx->pc = 0x18E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E878u;
        // 0x18e87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E880u;
        goto label_18e880;
    }
    ctx->pc = 0x18E878u;
    {
        const bool branch_taken_0x18e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E878u;
        // 0x18e87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e878) {
            ctx->pc = 0x18E8B0u;
            goto label_18e8b0;
        }
    }
    ctx->pc = 0x18E880u;
label_18e880:
    // 0x18e880: 0xc061a2a  jal         func_1868A8
label_18e884:
    if (ctx->pc == 0x18E884u) {
        ctx->pc = 0x18E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E880u;
        // 0x18e884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E888u;
        goto label_18e888;
    }
    ctx->pc = 0x18E880u;
    SET_GPR_U32(ctx, 31, 0x18E888u);
    ctx->pc = 0x18E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E880u;
    // 0x18e884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E880u, 0x18E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E888u;
label_18e888:
    // 0x18e888: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18e888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18e88c:
    // 0x18e88c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18e88cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e890:
    // 0x18e890: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_18e894:
    if (ctx->pc == 0x18E894u) {
        ctx->pc = 0x18E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E890u;
        // 0x18e894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E898u;
        goto label_18e898;
    }
    ctx->pc = 0x18E890u;
    {
        const bool branch_taken_0x18e890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e890) {
            ctx->pc = 0x18E894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E890u;
            // 0x18e894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E8B0u;
            goto label_18e8b0;
        }
    }
    ctx->pc = 0x18E898u;
label_18e898:
    // 0x18e898: 0xc061a2a  jal         func_1868A8
label_18e89c:
    if (ctx->pc == 0x18E89Cu) {
        ctx->pc = 0x18E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E898u;
        // 0x18e89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8A0u;
        goto label_18e8a0;
    }
    ctx->pc = 0x18E898u;
    SET_GPR_U32(ctx, 31, 0x18E8A0u);
    ctx->pc = 0x18E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E898u;
    // 0x18e89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E898u, 0x18E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8A0u;
label_18e8a0:
    // 0x18e8a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e8a4:
    // 0x18e8a4: 0xc071154  jal         func_1C4550
label_18e8a8:
    if (ctx->pc == 0x18E8A8u) {
        ctx->pc = 0x18E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8A4u;
        // 0x18e8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8ACu;
        goto label_18e8ac;
    }
    ctx->pc = 0x18E8A4u;
    SET_GPR_U32(ctx, 31, 0x18E8ACu);
    ctx->pc = 0x18E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8A4u;
    // 0x18e8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x18E8A4u, 0x18E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8ACu;
label_18e8ac:
    // 0x18e8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e8b0:
    // 0x18e8b0: 0xc061a12  jal         func_186848
label_18e8b4:
    if (ctx->pc == 0x18E8B4u) {
        ctx->pc = 0x18E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8B0u;
        // 0x18e8b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8B8u;
        goto label_18e8b8;
    }
    ctx->pc = 0x18E8B0u;
    SET_GPR_U32(ctx, 31, 0x18E8B8u);
    ctx->pc = 0x18E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8B0u;
    // 0x18e8b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E8B0u, 0x18E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8B8u;
label_18e8b8:
    // 0x18e8b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e8bc:
    // 0x18e8bc: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x18e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_18e8c0:
    // 0x18e8c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18e8c4:
    // 0x18e8c4: 0x40f809  jalr        $v0
label_18e8c8:
    if (ctx->pc == 0x18E8C8u) {
        ctx->pc = 0x18E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8C4u;
        // 0x18e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8CCu;
        goto label_18e8cc;
    }
    ctx->pc = 0x18E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E8CCu);
        ctx->pc = 0x18E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8C4u;
        // 0x18e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E8C4u, 0x18E8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E8CCu;
label_18e8cc:
    // 0x18e8cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18e8d0:
    if (ctx->pc == 0x18E8D0u) {
        ctx->pc = 0x18E8D4u;
        goto label_18e8d4;
    }
    ctx->pc = 0x18E8CCu;
    {
        const bool branch_taken_0x18e8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e8cc) {
            ctx->pc = 0x18E8E8u;
            goto label_18e8e8;
        }
    }
    ctx->pc = 0x18E8D4u;
label_18e8d4:
    // 0x18e8d4: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_18e8d8:
    // 0x18e8d8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_18e8dc:
    // 0x18e8dc: 0xc0f62ca  jal         func_3D8B28
label_18e8e0:
    if (ctx->pc == 0x18E8E0u) {
        ctx->pc = 0x18E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8DCu;
        // 0x18e8e0: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8E4u;
        goto label_18e8e4;
    }
    ctx->pc = 0x18E8DCu;
    SET_GPR_U32(ctx, 31, 0x18E8E4u);
    ctx->pc = 0x18E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8DCu;
    // 0x18e8e0: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x18E8DCu, 0x18E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8E4u;
label_18e8e4:
    // 0x18e8e4: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x18e8e4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e8e8:
    // 0x18e8e8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_18e8ec:
    if (ctx->pc == 0x18E8ECu) {
        ctx->pc = 0x18E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8E8u;
        // 0x18e8ec: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8F0u;
        goto label_18e8f0;
    }
    ctx->pc = 0x18E8E8u;
    {
        const bool branch_taken_0x18e8e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8E8u;
        // 0x18e8ec: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8e8) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E8F0u;
label_18e8f0:
    // 0x18e8f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18e8f4:
    // 0x18e8f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18e8f8:
    if (ctx->pc == 0x18E8F8u) {
        ctx->pc = 0x18E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8F4u;
        // 0x18e8f8: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8FCu;
        goto label_18e8fc;
    }
    ctx->pc = 0x18E8F4u;
    {
        const bool branch_taken_0x18e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8F4u;
        // 0x18e8f8: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8f4) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E8FCu;
label_18e8fc:
    // 0x18e8fc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_18e900:
    if (ctx->pc == 0x18E900u) {
        ctx->pc = 0x18E904u;
        goto label_18e904;
    }
    ctx->pc = 0x18E8FCu;
    {
        const bool branch_taken_0x18e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e8fc) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E904u;
label_18e904:
    // 0x18e904: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18e908:
    // 0x18e908: 0xc061a12  jal         func_186848
label_18e90c:
    if (ctx->pc == 0x18E90Cu) {
        ctx->pc = 0x18E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E908u;
        // 0x18e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E910u;
        goto label_18e910;
    }
    ctx->pc = 0x18E908u;
    SET_GPR_U32(ctx, 31, 0x18E910u);
    ctx->pc = 0x18E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E908u;
    // 0x18e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E908u, 0x18E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E910u;
label_18e910:
    // 0x18e910: 0x8c420318  lw          $v0, 0x318($v0)
    ctx->pc = 0x18e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 792)));
label_18e914:
    // 0x18e914: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18e918:
    if (ctx->pc == 0x18E918u) {
        ctx->pc = 0x18E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E914u;
        // 0x18e918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E91Cu;
        goto label_18e91c;
    }
    ctx->pc = 0x18E914u;
    {
        const bool branch_taken_0x18e914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E914u;
        // 0x18e918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e914) {
            ctx->pc = 0x18E920u;
            goto label_18e920;
        }
    }
    ctx->pc = 0x18E91Cu;
label_18e91c:
    // 0x18e91c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e920:
    // 0x18e920: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_18e924:
    if (ctx->pc == 0x18E924u) {
        ctx->pc = 0x18E928u;
        goto label_18e928;
    }
    ctx->pc = 0x18E920u;
    {
        const bool branch_taken_0x18e920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e920) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E928u;
label_18e928:
    // 0x18e928: 0xc063b9c  jal         func_18EE70
label_18e92c:
    if (ctx->pc == 0x18E92Cu) {
        ctx->pc = 0x18E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E928u;
        // 0x18e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E930u;
        goto label_18e930;
    }
    ctx->pc = 0x18E928u;
    SET_GPR_U32(ctx, 31, 0x18E930u);
    ctx->pc = 0x18E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E928u;
    // 0x18e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE70u, 0x18E928u, 0x18E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E930u;
label_18e930:
    // 0x18e930: 0xc061a2e  jal         func_1868B8
label_18e934:
    if (ctx->pc == 0x18E934u) {
        ctx->pc = 0x18E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E930u;
        // 0x18e934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E938u;
        goto label_18e938;
    }
    ctx->pc = 0x18E930u;
    SET_GPR_U32(ctx, 31, 0x18E938u);
    ctx->pc = 0x18E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E930u;
    // 0x18e934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18E930u, 0x18E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E938u;
label_18e938:
    // 0x18e938: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18e93c:
    // 0x18e93c: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18e940:
    // 0x18e940: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18e944:
    // 0x18e944: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18e948:
    // 0x18e948: 0x1445005e  bne         $v0, $a1, . + 4 + (0x5E << 2)
label_18e94c:
    if (ctx->pc == 0x18E94Cu) {
        ctx->pc = 0x18E950u;
        goto label_18e950;
    }
    ctx->pc = 0x18E948u;
    {
        const bool branch_taken_0x18e948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18e948) {
            ctx->pc = 0x18EAC4u;
            goto label_18eac4;
        }
    }
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0xc063290  jal         func_18CA40
label_18e954:
    if (ctx->pc == 0x18E954u) {
        ctx->pc = 0x18E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E950u;
        // 0x18e954: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E958u;
        goto label_18e958;
    }
    ctx->pc = 0x18E950u;
    SET_GPR_U32(ctx, 31, 0x18E958u);
    ctx->pc = 0x18E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E950u;
    // 0x18e954: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA40u, 0x18E950u, 0x18E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E958u;
label_18e958:
    // 0x18e958: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_18e95c:
    if (ctx->pc == 0x18E95Cu) {
        ctx->pc = 0x18E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E958u;
        // 0x18e95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E960u;
        goto label_18e960;
    }
    ctx->pc = 0x18E958u;
    {
        const bool branch_taken_0x18e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e958) {
            ctx->pc = 0x18E95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E958u;
            // 0x18e95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E990u;
            goto label_18e990;
        }
    }
    ctx->pc = 0x18E960u;
label_18e960:
    // 0x18e960: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_18e964:
    // 0x18e964: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_18e968:
    if (ctx->pc == 0x18E968u) {
        ctx->pc = 0x18E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E964u;
        // 0x18e968: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E96Cu;
        goto label_18e96c;
    }
    ctx->pc = 0x18E964u;
    {
        const bool branch_taken_0x18e964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E964u;
        // 0x18e968: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e964) {
            ctx->pc = 0x18E9B8u;
            goto label_18e9b8;
        }
    }
    ctx->pc = 0x18E96Cu;
label_18e96c:
    // 0x18e96c: 0xc061a2e  jal         func_1868B8
label_18e970:
    if (ctx->pc == 0x18E970u) {
        ctx->pc = 0x18E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E96Cu;
        // 0x18e970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E974u;
        goto label_18e974;
    }
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x18E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E96Cu;
    // 0x18e970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18E96Cu, 0x18E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E974u;
label_18e974:
    // 0x18e974: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18e978:
    // 0x18e978: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18e97c:
    // 0x18e97c: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18e980:
    // 0x18e980: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18e984:
    // 0x18e984: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
label_18e988:
    if (ctx->pc == 0x18E988u) {
        ctx->pc = 0x18E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E984u;
        // 0x18e988: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E98Cu;
        goto label_18e98c;
    }
    ctx->pc = 0x18E984u;
    {
        const bool branch_taken_0x18e984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18e984) {
            ctx->pc = 0x18E988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E984u;
            // 0x18e988: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E9BCu;
            goto label_18e9bc;
        }
    }
    ctx->pc = 0x18E98Cu;
label_18e98c:
    // 0x18e98c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e990:
    // 0x18e990: 0xc061a12  jal         func_186848
label_18e994:
    if (ctx->pc == 0x18E994u) {
        ctx->pc = 0x18E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E990u;
        // 0x18e994: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E998u;
        goto label_18e998;
    }
    ctx->pc = 0x18E990u;
    SET_GPR_U32(ctx, 31, 0x18E998u);
    ctx->pc = 0x18E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E990u;
    // 0x18e994: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E990u, 0x18E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E998u;
label_18e998:
    // 0x18e998: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e99c:
    // 0x18e99c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e9a0:
    // 0x18e9a0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x18e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_18e9a4:
    // 0x18e9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18e9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e9a8:
    // 0x18e9a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e9ac:
    // 0x18e9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e9b0:
    // 0x18e9b0: 0x40f809  jalr        $v0
label_18e9b4:
    if (ctx->pc == 0x18E9B4u) {
        ctx->pc = 0x18E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9B0u;
        // 0x18e9b4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9B8u;
        goto label_18e9b8;
    }
    ctx->pc = 0x18E9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E9B8u);
        ctx->pc = 0x18E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9B0u;
        // 0x18e9b4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E9B0u, 0x18E9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E9B8u;
label_18e9b8:
    // 0x18e9b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18e9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e9bc:
    // 0x18e9bc: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x18e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_18e9c0:
    // 0x18e9c0: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x18e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_18e9c4:
    // 0x18e9c4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x18e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_18e9c8:
    // 0x18e9c8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_18e9cc:
    if (ctx->pc == 0x18E9CCu) {
        ctx->pc = 0x18E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C8u;
        // 0x18e9cc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9D0u;
        goto label_18e9d0;
    }
    ctx->pc = 0x18E9C8u;
    {
        const bool branch_taken_0x18e9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C8u;
        // 0x18e9cc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9c8) {
            ctx->pc = 0x18EA80u;
            goto label_18ea80;
        }
    }
    ctx->pc = 0x18E9D0u;
label_18e9d0:
    // 0x18e9d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_18e9d4:
    // 0x18e9d4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x18e9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_18e9d8:
    // 0x18e9d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18e9dc:
    if (ctx->pc == 0x18E9DCu) {
        ctx->pc = 0x18E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9D8u;
        // 0x18e9dc: 0x8ca2036c  lw          $v0, 0x36C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9E0u;
        goto label_18e9e0;
    }
    ctx->pc = 0x18E9D8u;
    {
        const bool branch_taken_0x18e9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e9d8) {
            ctx->pc = 0x18E9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E9D8u;
            // 0x18e9dc: 0x8ca2036c  lw          $v0, 0x36C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E9FCu;
            goto label_18e9fc;
        }
    }
    ctx->pc = 0x18E9E0u;
label_18e9e0:
    // 0x18e9e0: 0xc061a16  jal         func_186858
label_18e9e4:
    if (ctx->pc == 0x18E9E4u) {
        ctx->pc = 0x18E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9E0u;
        // 0x18e9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9E8u;
        goto label_18e9e8;
    }
    ctx->pc = 0x18E9E0u;
    SET_GPR_U32(ctx, 31, 0x18E9E8u);
    ctx->pc = 0x18E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9E0u;
    // 0x18e9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18E9E0u, 0x18E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9E8u;
label_18e9e8:
    // 0x18e9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e9ec:
    // 0x18e9ec: 0xc06ee5c  jal         func_1BB970
label_18e9f0:
    if (ctx->pc == 0x18E9F0u) {
        ctx->pc = 0x18E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ECu;
        // 0x18e9f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9F4u;
        goto label_18e9f4;
    }
    ctx->pc = 0x18E9ECu;
    SET_GPR_U32(ctx, 31, 0x18E9F4u);
    ctx->pc = 0x18E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9ECu;
    // 0x18e9f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x18E9ECu, 0x18E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9F4u;
label_18e9f4:
    // 0x18e9f4: 0x10000022  b           . + 4 + (0x22 << 2)
label_18e9f8:
    if (ctx->pc == 0x18E9F8u) {
        ctx->pc = 0x18E9FCu;
        goto label_18e9fc;
    }
    ctx->pc = 0x18E9F4u;
    {
        const bool branch_taken_0x18e9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9f4) {
            ctx->pc = 0x18EA80u;
            goto label_18ea80;
        }
    }
    ctx->pc = 0x18E9FCu;
label_18e9fc:
    // 0x18e9fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18ea00:
    // 0x18ea00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18ea04:
    if (ctx->pc == 0x18EA04u) {
        ctx->pc = 0x18EA08u;
        goto label_18ea08;
    }
    ctx->pc = 0x18EA00u;
    {
        const bool branch_taken_0x18ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea00) {
            ctx->pc = 0x18EA6Cu;
            goto label_18ea6c;
        }
    }
    ctx->pc = 0x18EA08u;
label_18ea08:
    // 0x18ea08: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_18ea0c:
    if (ctx->pc == 0x18EA0Cu) {
        ctx->pc = 0x18EA10u;
        goto label_18ea10;
    }
    ctx->pc = 0x18EA08u;
    {
        const bool branch_taken_0x18ea08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ea08) {
            ctx->pc = 0x18EA80u;
            goto label_18ea80;
        }
    }
    ctx->pc = 0x18EA10u;
label_18ea10:
    // 0x18ea10: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_18ea14:
    // 0x18ea14: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x18ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_18ea18:
    // 0x18ea18: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_18ea1c:
    // 0x18ea1c: 0x2463ffcf  addiu       $v1, $v1, -0x31
    ctx->pc = 0x18ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_18ea20:
    // 0x18ea20: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x18ea20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_18ea24:
    // 0x18ea24: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_18ea28:
    if (ctx->pc == 0x18EA28u) {
        ctx->pc = 0x18EA2Cu;
        goto label_18ea2c;
    }
    ctx->pc = 0x18EA24u;
    {
        const bool branch_taken_0x18ea24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea24) {
            ctx->pc = 0x18EA50u;
            goto label_18ea50;
        }
    }
    ctx->pc = 0x18EA2Cu;
label_18ea2c:
    // 0x18ea2c: 0xc061a16  jal         func_186858
label_18ea30:
    if (ctx->pc == 0x18EA30u) {
        ctx->pc = 0x18EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA2Cu;
        // 0x18ea30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA34u;
        goto label_18ea34;
    }
    ctx->pc = 0x18EA2Cu;
    SET_GPR_U32(ctx, 31, 0x18EA34u);
    ctx->pc = 0x18EA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA2Cu;
    // 0x18ea30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18EA2Cu, 0x18EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA34u;
label_18ea34:
    // 0x18ea34: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x18ea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_18ea38:
    // 0x18ea38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18ea38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18ea3c:
    // 0x18ea3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea40:
    // 0x18ea40: 0xc06ee7e  jal         func_1BB9F8
label_18ea44:
    if (ctx->pc == 0x18EA44u) {
        ctx->pc = 0x18EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA40u;
        // 0x18ea44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA48u;
        goto label_18ea48;
    }
    ctx->pc = 0x18EA40u;
    SET_GPR_U32(ctx, 31, 0x18EA48u);
    ctx->pc = 0x18EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA40u;
    // 0x18ea44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x18EA40u, 0x18EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA48u;
label_18ea48:
    // 0x18ea48: 0x1000000d  b           . + 4 + (0xD << 2)
label_18ea4c:
    if (ctx->pc == 0x18EA4Cu) {
        ctx->pc = 0x18EA50u;
        goto label_18ea50;
    }
    ctx->pc = 0x18EA48u;
    {
        const bool branch_taken_0x18ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea48) {
            ctx->pc = 0x18EA80u;
            goto label_18ea80;
        }
    }
    ctx->pc = 0x18EA50u;
label_18ea50:
    // 0x18ea50: 0xc061a16  jal         func_186858
label_18ea54:
    if (ctx->pc == 0x18EA54u) {
        ctx->pc = 0x18EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA50u;
        // 0x18ea54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA58u;
        goto label_18ea58;
    }
    ctx->pc = 0x18EA50u;
    SET_GPR_U32(ctx, 31, 0x18EA58u);
    ctx->pc = 0x18EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA50u;
    // 0x18ea54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18EA50u, 0x18EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA58u;
label_18ea58:
    // 0x18ea58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea5c:
    // 0x18ea5c: 0xc06ee30  jal         func_1BB8C0
label_18ea60:
    if (ctx->pc == 0x18EA60u) {
        ctx->pc = 0x18EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA5Cu;
        // 0x18ea60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA64u;
        goto label_18ea64;
    }
    ctx->pc = 0x18EA5Cu;
    SET_GPR_U32(ctx, 31, 0x18EA64u);
    ctx->pc = 0x18EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA5Cu;
    // 0x18ea60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x18EA5Cu, 0x18EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA64u;
label_18ea64:
    // 0x18ea64: 0x10000006  b           . + 4 + (0x6 << 2)
label_18ea68:
    if (ctx->pc == 0x18EA68u) {
        ctx->pc = 0x18EA6Cu;
        goto label_18ea6c;
    }
    ctx->pc = 0x18EA64u;
    {
        const bool branch_taken_0x18ea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea64) {
            ctx->pc = 0x18EA80u;
            goto label_18ea80;
        }
    }
    ctx->pc = 0x18EA6Cu;
label_18ea6c:
    // 0x18ea6c: 0xc061a16  jal         func_186858
label_18ea70:
    if (ctx->pc == 0x18EA70u) {
        ctx->pc = 0x18EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA6Cu;
        // 0x18ea70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA74u;
        goto label_18ea74;
    }
    ctx->pc = 0x18EA6Cu;
    SET_GPR_U32(ctx, 31, 0x18EA74u);
    ctx->pc = 0x18EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA6Cu;
    // 0x18ea70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18EA6Cu, 0x18EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA74u;
label_18ea74:
    // 0x18ea74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea78:
    // 0x18ea78: 0xc06ee30  jal         func_1BB8C0
label_18ea7c:
    if (ctx->pc == 0x18EA7Cu) {
        ctx->pc = 0x18EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA78u;
        // 0x18ea7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA80u;
        goto label_18ea80;
    }
    ctx->pc = 0x18EA78u;
    SET_GPR_U32(ctx, 31, 0x18EA80u);
    ctx->pc = 0x18EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA78u;
    // 0x18ea7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x18EA78u, 0x18EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA80u;
label_18ea80:
    // 0x18ea80: 0xc061a12  jal         func_186848
label_18ea84:
    if (ctx->pc == 0x18EA84u) {
        ctx->pc = 0x18EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA80u;
        // 0x18ea84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA88u;
        goto label_18ea88;
    }
    ctx->pc = 0x18EA80u;
    SET_GPR_U32(ctx, 31, 0x18EA88u);
    ctx->pc = 0x18EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA80u;
    // 0x18ea84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EA80u, 0x18EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA88u;
label_18ea88:
    // 0x18ea88: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_18ea8c:
    // 0x18ea8c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x18ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18ea90:
    // 0x18ea90: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
label_18ea94:
    if (ctx->pc == 0x18EA94u) {
        ctx->pc = 0x18EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA90u;
        // 0x18ea94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA98u;
        goto label_18ea98;
    }
    ctx->pc = 0x18EA90u;
    {
        const bool branch_taken_0x18ea90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA90u;
        // 0x18ea94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea90) {
            ctx->pc = 0x18EBD0u;
            goto label_18ebd0;
        }
    }
    ctx->pc = 0x18EA98u;
label_18ea98:
    // 0x18ea98: 0xc061a12  jal         func_186848
label_18ea9c:
    if (ctx->pc == 0x18EA9Cu) {
        ctx->pc = 0x18EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA98u;
        // 0x18ea9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAA0u;
        goto label_18eaa0;
    }
    ctx->pc = 0x18EA98u;
    SET_GPR_U32(ctx, 31, 0x18EAA0u);
    ctx->pc = 0x18EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA98u;
    // 0x18ea9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EA98u, 0x18EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAA0u;
label_18eaa0:
    // 0x18eaa0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18eaa4:
    // 0x18eaa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18eaa8:
    // 0x18eaa8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18eaac:
    // 0x18eaac: 0x40f809  jalr        $v0
label_18eab0:
    if (ctx->pc == 0x18EAB0u) {
        ctx->pc = 0x18EAB4u;
        goto label_18eab4;
    }
    ctx->pc = 0x18EAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EAB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EAACu, 0x18EAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EAB4u;
label_18eab4:
    // 0x18eab4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_18eab8:
    if (ctx->pc == 0x18EAB8u) {
        ctx->pc = 0x18EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB4u;
        // 0x18eab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EABCu;
        goto label_18eabc;
    }
    ctx->pc = 0x18EAB4u;
    {
        const bool branch_taken_0x18eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB4u;
        // 0x18eab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eab4) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EABCu;
label_18eabc:
    // 0x18eabc: 0x10000043  b           . + 4 + (0x43 << 2)
label_18eac0:
    if (ctx->pc == 0x18EAC0u) {
        ctx->pc = 0x18EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EABCu;
        // 0x18eac0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAC4u;
        goto label_18eac4;
    }
    ctx->pc = 0x18EABCu;
    {
        const bool branch_taken_0x18eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EABCu;
        // 0x18eac0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eabc) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EAC4u;
label_18eac4:
    // 0x18eac4: 0xc061a2a  jal         func_1868A8
label_18eac8:
    if (ctx->pc == 0x18EAC8u) {
        ctx->pc = 0x18EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAC4u;
        // 0x18eac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EACCu;
        goto label_18eacc;
    }
    ctx->pc = 0x18EAC4u;
    SET_GPR_U32(ctx, 31, 0x18EACCu);
    ctx->pc = 0x18EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAC4u;
    // 0x18eac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18EAC4u, 0x18EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EACCu;
label_18eacc:
    // 0x18eacc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18ead0:
    // 0x18ead0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ead4:
    // 0x18ead4: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18ead8:
    // 0x18ead8: 0xc0952e8  jal         func_254BA0
label_18eadc:
    if (ctx->pc == 0x18EADCu) {
        ctx->pc = 0x18EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAD8u;
        // 0x18eadc: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAE0u;
        goto label_18eae0;
    }
    ctx->pc = 0x18EAD8u;
    SET_GPR_U32(ctx, 31, 0x18EAE0u);
    ctx->pc = 0x18EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAD8u;
    // 0x18eadc: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18EAD8u, 0x18EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAE0u;
label_18eae0:
    // 0x18eae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18eae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18eae4:
    // 0x18eae4: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_18eae8:
    if (ctx->pc == 0x18EAE8u) {
        ctx->pc = 0x18EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAE4u;
        // 0x18eae8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAECu;
        goto label_18eaec;
    }
    ctx->pc = 0x18EAE4u;
    {
        const bool branch_taken_0x18eae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eae4) {
            ctx->pc = 0x18EAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EAE4u;
            // 0x18eae8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EB18u;
            goto label_18eb18;
        }
    }
    ctx->pc = 0x18EAECu;
label_18eaec:
    // 0x18eaec: 0xc061a12  jal         func_186848
label_18eaf0:
    if (ctx->pc == 0x18EAF0u) {
        ctx->pc = 0x18EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAECu;
        // 0x18eaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAF4u;
        goto label_18eaf4;
    }
    ctx->pc = 0x18EAECu;
    SET_GPR_U32(ctx, 31, 0x18EAF4u);
    ctx->pc = 0x18EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAECu;
    // 0x18eaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EAECu, 0x18EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAF4u;
label_18eaf4:
    // 0x18eaf4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18eaf8:
    // 0x18eaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18eafc:
    // 0x18eafc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18eb00:
    // 0x18eb00: 0x40f809  jalr        $v0
label_18eb04:
    if (ctx->pc == 0x18EB04u) {
        ctx->pc = 0x18EB08u;
        goto label_18eb08;
    }
    ctx->pc = 0x18EB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EB08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB00u, 0x18EB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EB08u;
label_18eb08:
    // 0x18eb08: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_18eb0c:
    if (ctx->pc == 0x18EB0Cu) {
        ctx->pc = 0x18EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB08u;
        // 0x18eb0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB10u;
        goto label_18eb10;
    }
    ctx->pc = 0x18EB08u;
    {
        const bool branch_taken_0x18eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB08u;
        // 0x18eb0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb08) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EB10u;
label_18eb10:
    // 0x18eb10: 0x1000002e  b           . + 4 + (0x2E << 2)
label_18eb14:
    if (ctx->pc == 0x18EB14u) {
        ctx->pc = 0x18EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB10u;
        // 0x18eb14: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB18u;
        goto label_18eb18;
    }
    ctx->pc = 0x18EB10u;
    {
        const bool branch_taken_0x18eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB10u;
        // 0x18eb14: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb10) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EB18u;
label_18eb18:
    // 0x18eb18: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x18eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_18eb1c:
    // 0x18eb1c: 0x40f809  jalr        $v0
label_18eb20:
    if (ctx->pc == 0x18EB20u) {
        ctx->pc = 0x18EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB1Cu;
        // 0x18eb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB24u;
        goto label_18eb24;
    }
    ctx->pc = 0x18EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EB24u);
        ctx->pc = 0x18EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB1Cu;
        // 0x18eb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB1Cu, 0x18EB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EB24u;
label_18eb24:
    // 0x18eb24: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_18eb28:
    if (ctx->pc == 0x18EB28u) {
        ctx->pc = 0x18EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB24u;
        // 0x18eb28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB2Cu;
        goto label_18eb2c;
    }
    ctx->pc = 0x18EB24u;
    {
        const bool branch_taken_0x18eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb24) {
            ctx->pc = 0x18EB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EB24u;
            // 0x18eb28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EBD0u;
            goto label_18ebd0;
        }
    }
    ctx->pc = 0x18EB2Cu;
label_18eb2c:
    // 0x18eb2c: 0xc061a12  jal         func_186848
label_18eb30:
    if (ctx->pc == 0x18EB30u) {
        ctx->pc = 0x18EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB2Cu;
        // 0x18eb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB34u;
        goto label_18eb34;
    }
    ctx->pc = 0x18EB2Cu;
    SET_GPR_U32(ctx, 31, 0x18EB34u);
    ctx->pc = 0x18EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB2Cu;
    // 0x18eb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EB2Cu, 0x18EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB34u;
label_18eb34:
    // 0x18eb34: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18eb38:
    // 0x18eb38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18eb3c:
    // 0x18eb3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18eb40:
    // 0x18eb40: 0x40f809  jalr        $v0
label_18eb44:
    if (ctx->pc == 0x18EB44u) {
        ctx->pc = 0x18EB48u;
        goto label_18eb48;
    }
    ctx->pc = 0x18EB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EB48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB40u, 0x18EB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EB48u;
label_18eb48:
    // 0x18eb48: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_18eb4c:
    if (ctx->pc == 0x18EB4Cu) {
        ctx->pc = 0x18EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB48u;
        // 0x18eb4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB50u;
        goto label_18eb50;
    }
    ctx->pc = 0x18EB48u;
    {
        const bool branch_taken_0x18eb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB48u;
        // 0x18eb4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb48) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EB50u;
label_18eb50:
    // 0x18eb50: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_18eb54:
    // 0x18eb54: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18eb58:
    // 0x18eb58: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_18eb5c:
    // 0x18eb5c: 0x40f809  jalr        $v0
label_18eb60:
    if (ctx->pc == 0x18EB60u) {
        ctx->pc = 0x18EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB5Cu;
        // 0x18eb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB64u;
        goto label_18eb64;
    }
    ctx->pc = 0x18EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EB64u);
        ctx->pc = 0x18EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB5Cu;
        // 0x18eb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB5Cu, 0x18EB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EB64u;
label_18eb64:
    // 0x18eb64: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_18eb68:
    if (ctx->pc == 0x18EB68u) {
        ctx->pc = 0x18EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB64u;
        // 0x18eb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB6Cu;
        goto label_18eb6c;
    }
    ctx->pc = 0x18EB64u;
    {
        const bool branch_taken_0x18eb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb64) {
            ctx->pc = 0x18EB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EB64u;
            // 0x18eb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EBD0u;
            goto label_18ebd0;
        }
    }
    ctx->pc = 0x18EB6Cu;
label_18eb6c:
    // 0x18eb6c: 0xc061a12  jal         func_186848
label_18eb70:
    if (ctx->pc == 0x18EB70u) {
        ctx->pc = 0x18EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB6Cu;
        // 0x18eb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB74u;
        goto label_18eb74;
    }
    ctx->pc = 0x18EB6Cu;
    SET_GPR_U32(ctx, 31, 0x18EB74u);
    ctx->pc = 0x18EB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB6Cu;
    // 0x18eb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EB6Cu, 0x18EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB74u;
label_18eb74:
    // 0x18eb74: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18eb78:
    // 0x18eb78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18eb7c:
    // 0x18eb7c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_18eb80:
    // 0x18eb80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18eb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18eb84:
    // 0x18eb84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x18eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18eb88:
    // 0x18eb88: 0x40f809  jalr        $v0
label_18eb8c:
    if (ctx->pc == 0x18EB8Cu) {
        ctx->pc = 0x18EB90u;
        goto label_18eb90;
    }
    ctx->pc = 0x18EB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EB90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB88u, 0x18EB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EB90u;
label_18eb90:
    // 0x18eb90: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_18eb94:
    if (ctx->pc == 0x18EB94u) {
        ctx->pc = 0x18EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB90u;
        // 0x18eb94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB98u;
        goto label_18eb98;
    }
    ctx->pc = 0x18EB90u;
    {
        const bool branch_taken_0x18eb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb90) {
            ctx->pc = 0x18EB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EB90u;
            // 0x18eb94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EBD0u;
            goto label_18ebd0;
        }
    }
    ctx->pc = 0x18EB98u;
label_18eb98:
    // 0x18eb98: 0xc061a12  jal         func_186848
label_18eb9c:
    if (ctx->pc == 0x18EB9Cu) {
        ctx->pc = 0x18EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB98u;
        // 0x18eb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBA0u;
        goto label_18eba0;
    }
    ctx->pc = 0x18EB98u;
    SET_GPR_U32(ctx, 31, 0x18EBA0u);
    ctx->pc = 0x18EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB98u;
    // 0x18eb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EB98u, 0x18EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBA0u;
label_18eba0:
    // 0x18eba0: 0x24430260  addiu       $v1, $v0, 0x260
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_18eba4:
    // 0x18eba4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_18eba8:
    // 0x18eba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18ebac:
    if (ctx->pc == 0x18EBACu) {
        ctx->pc = 0x18EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBA8u;
        // 0x18ebac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBB0u;
        goto label_18ebb0;
    }
    ctx->pc = 0x18EBA8u;
    {
        const bool branch_taken_0x18eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBA8u;
        // 0x18ebac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eba8) {
            ctx->pc = 0x18EBBCu;
            goto label_18ebbc;
        }
    }
    ctx->pc = 0x18EBB0u;
label_18ebb0:
    // 0x18ebb0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_18ebb4:
    // 0x18ebb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18ebb8:
    if (ctx->pc == 0x18EBB8u) {
        ctx->pc = 0x18EBBCu;
        goto label_18ebbc;
    }
    ctx->pc = 0x18EBB4u;
    {
        const bool branch_taken_0x18ebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebb4) {
            ctx->pc = 0x18EBC0u;
            goto label_18ebc0;
        }
    }
    ctx->pc = 0x18EBBCu;
label_18ebbc:
    // 0x18ebbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ebc0:
    // 0x18ebc0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_18ebc4:
    if (ctx->pc == 0x18EBC4u) {
        ctx->pc = 0x18EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBC0u;
        // 0x18ebc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBC8u;
        goto label_18ebc8;
    }
    ctx->pc = 0x18EBC0u;
    {
        const bool branch_taken_0x18ebc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBC0u;
        // 0x18ebc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebc0) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EBC8u;
label_18ebc8:
    // 0x18ebc8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_18ebcc:
    // 0x18ebcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ebccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ebd0:
    // 0x18ebd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ebd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18ebd4:
    // 0x18ebd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ebd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18ebd8:
    // 0x18ebd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18ebd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18ebdc:
    // 0x18ebdc: 0x3e00008  jr          $ra
label_18ebe0:
    if (ctx->pc == 0x18EBE0u) {
        ctx->pc = 0x18EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBDCu;
        // 0x18ebe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBE4u;
        goto label_18ebe4;
    }
    ctx->pc = 0x18EBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBDCu;
        // 0x18ebe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EBE4u;
label_18ebe4:
    // 0x18ebe4: 0x0  nop
    ctx->pc = 0x18ebe4u;
    // NOP
    ctx->pc = 0x18ebe8u;
}

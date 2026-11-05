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

// Function: sub_0039E7B8
// Address: 0x39e7b8 - 0x39eaf8
void sub_0039E7B8_0x39e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E7B8_0x39e7b8");
#endif

    switch (ctx->pc) {
        case 0x39e7b8u: goto label_39e7b8;
        case 0x39e7bcu: goto label_39e7bc;
        case 0x39e7c0u: goto label_39e7c0;
        case 0x39e7c4u: goto label_39e7c4;
        case 0x39e7c8u: goto label_39e7c8;
        case 0x39e7ccu: goto label_39e7cc;
        case 0x39e7d0u: goto label_39e7d0;
        case 0x39e7d4u: goto label_39e7d4;
        case 0x39e7d8u: goto label_39e7d8;
        case 0x39e7dcu: goto label_39e7dc;
        case 0x39e7e0u: goto label_39e7e0;
        case 0x39e7e4u: goto label_39e7e4;
        case 0x39e7e8u: goto label_39e7e8;
        case 0x39e7ecu: goto label_39e7ec;
        case 0x39e7f0u: goto label_39e7f0;
        case 0x39e7f4u: goto label_39e7f4;
        case 0x39e7f8u: goto label_39e7f8;
        case 0x39e7fcu: goto label_39e7fc;
        case 0x39e800u: goto label_39e800;
        case 0x39e804u: goto label_39e804;
        case 0x39e808u: goto label_39e808;
        case 0x39e80cu: goto label_39e80c;
        case 0x39e810u: goto label_39e810;
        case 0x39e814u: goto label_39e814;
        case 0x39e818u: goto label_39e818;
        case 0x39e81cu: goto label_39e81c;
        case 0x39e820u: goto label_39e820;
        case 0x39e824u: goto label_39e824;
        case 0x39e828u: goto label_39e828;
        case 0x39e82cu: goto label_39e82c;
        case 0x39e830u: goto label_39e830;
        case 0x39e834u: goto label_39e834;
        case 0x39e838u: goto label_39e838;
        case 0x39e83cu: goto label_39e83c;
        case 0x39e840u: goto label_39e840;
        case 0x39e844u: goto label_39e844;
        case 0x39e848u: goto label_39e848;
        case 0x39e84cu: goto label_39e84c;
        case 0x39e850u: goto label_39e850;
        case 0x39e854u: goto label_39e854;
        case 0x39e858u: goto label_39e858;
        case 0x39e85cu: goto label_39e85c;
        case 0x39e860u: goto label_39e860;
        case 0x39e864u: goto label_39e864;
        case 0x39e868u: goto label_39e868;
        case 0x39e86cu: goto label_39e86c;
        case 0x39e870u: goto label_39e870;
        case 0x39e874u: goto label_39e874;
        case 0x39e878u: goto label_39e878;
        case 0x39e87cu: goto label_39e87c;
        case 0x39e880u: goto label_39e880;
        case 0x39e884u: goto label_39e884;
        case 0x39e888u: goto label_39e888;
        case 0x39e88cu: goto label_39e88c;
        case 0x39e890u: goto label_39e890;
        case 0x39e894u: goto label_39e894;
        case 0x39e898u: goto label_39e898;
        case 0x39e89cu: goto label_39e89c;
        case 0x39e8a0u: goto label_39e8a0;
        case 0x39e8a4u: goto label_39e8a4;
        case 0x39e8a8u: goto label_39e8a8;
        case 0x39e8acu: goto label_39e8ac;
        case 0x39e8b0u: goto label_39e8b0;
        case 0x39e8b4u: goto label_39e8b4;
        case 0x39e8b8u: goto label_39e8b8;
        case 0x39e8bcu: goto label_39e8bc;
        case 0x39e8c0u: goto label_39e8c0;
        case 0x39e8c4u: goto label_39e8c4;
        case 0x39e8c8u: goto label_39e8c8;
        case 0x39e8ccu: goto label_39e8cc;
        case 0x39e8d0u: goto label_39e8d0;
        case 0x39e8d4u: goto label_39e8d4;
        case 0x39e8d8u: goto label_39e8d8;
        case 0x39e8dcu: goto label_39e8dc;
        case 0x39e8e0u: goto label_39e8e0;
        case 0x39e8e4u: goto label_39e8e4;
        case 0x39e8e8u: goto label_39e8e8;
        case 0x39e8ecu: goto label_39e8ec;
        case 0x39e8f0u: goto label_39e8f0;
        case 0x39e8f4u: goto label_39e8f4;
        case 0x39e8f8u: goto label_39e8f8;
        case 0x39e8fcu: goto label_39e8fc;
        case 0x39e900u: goto label_39e900;
        case 0x39e904u: goto label_39e904;
        case 0x39e908u: goto label_39e908;
        case 0x39e90cu: goto label_39e90c;
        case 0x39e910u: goto label_39e910;
        case 0x39e914u: goto label_39e914;
        case 0x39e918u: goto label_39e918;
        case 0x39e91cu: goto label_39e91c;
        case 0x39e920u: goto label_39e920;
        case 0x39e924u: goto label_39e924;
        case 0x39e928u: goto label_39e928;
        case 0x39e92cu: goto label_39e92c;
        case 0x39e930u: goto label_39e930;
        case 0x39e934u: goto label_39e934;
        case 0x39e938u: goto label_39e938;
        case 0x39e93cu: goto label_39e93c;
        case 0x39e940u: goto label_39e940;
        case 0x39e944u: goto label_39e944;
        case 0x39e948u: goto label_39e948;
        case 0x39e94cu: goto label_39e94c;
        case 0x39e950u: goto label_39e950;
        case 0x39e954u: goto label_39e954;
        case 0x39e958u: goto label_39e958;
        case 0x39e95cu: goto label_39e95c;
        case 0x39e960u: goto label_39e960;
        case 0x39e964u: goto label_39e964;
        case 0x39e968u: goto label_39e968;
        case 0x39e96cu: goto label_39e96c;
        case 0x39e970u: goto label_39e970;
        case 0x39e974u: goto label_39e974;
        case 0x39e978u: goto label_39e978;
        case 0x39e97cu: goto label_39e97c;
        case 0x39e980u: goto label_39e980;
        case 0x39e984u: goto label_39e984;
        case 0x39e988u: goto label_39e988;
        case 0x39e98cu: goto label_39e98c;
        case 0x39e990u: goto label_39e990;
        case 0x39e994u: goto label_39e994;
        case 0x39e998u: goto label_39e998;
        case 0x39e99cu: goto label_39e99c;
        case 0x39e9a0u: goto label_39e9a0;
        case 0x39e9a4u: goto label_39e9a4;
        case 0x39e9a8u: goto label_39e9a8;
        case 0x39e9acu: goto label_39e9ac;
        case 0x39e9b0u: goto label_39e9b0;
        case 0x39e9b4u: goto label_39e9b4;
        case 0x39e9b8u: goto label_39e9b8;
        case 0x39e9bcu: goto label_39e9bc;
        case 0x39e9c0u: goto label_39e9c0;
        case 0x39e9c4u: goto label_39e9c4;
        case 0x39e9c8u: goto label_39e9c8;
        case 0x39e9ccu: goto label_39e9cc;
        case 0x39e9d0u: goto label_39e9d0;
        case 0x39e9d4u: goto label_39e9d4;
        case 0x39e9d8u: goto label_39e9d8;
        case 0x39e9dcu: goto label_39e9dc;
        case 0x39e9e0u: goto label_39e9e0;
        case 0x39e9e4u: goto label_39e9e4;
        case 0x39e9e8u: goto label_39e9e8;
        case 0x39e9ecu: goto label_39e9ec;
        case 0x39e9f0u: goto label_39e9f0;
        case 0x39e9f4u: goto label_39e9f4;
        case 0x39e9f8u: goto label_39e9f8;
        case 0x39e9fcu: goto label_39e9fc;
        case 0x39ea00u: goto label_39ea00;
        case 0x39ea04u: goto label_39ea04;
        case 0x39ea08u: goto label_39ea08;
        case 0x39ea0cu: goto label_39ea0c;
        case 0x39ea10u: goto label_39ea10;
        case 0x39ea14u: goto label_39ea14;
        case 0x39ea18u: goto label_39ea18;
        case 0x39ea1cu: goto label_39ea1c;
        case 0x39ea20u: goto label_39ea20;
        case 0x39ea24u: goto label_39ea24;
        case 0x39ea28u: goto label_39ea28;
        case 0x39ea2cu: goto label_39ea2c;
        case 0x39ea30u: goto label_39ea30;
        case 0x39ea34u: goto label_39ea34;
        case 0x39ea38u: goto label_39ea38;
        case 0x39ea3cu: goto label_39ea3c;
        case 0x39ea40u: goto label_39ea40;
        case 0x39ea44u: goto label_39ea44;
        case 0x39ea48u: goto label_39ea48;
        case 0x39ea4cu: goto label_39ea4c;
        case 0x39ea50u: goto label_39ea50;
        case 0x39ea54u: goto label_39ea54;
        case 0x39ea58u: goto label_39ea58;
        case 0x39ea5cu: goto label_39ea5c;
        case 0x39ea60u: goto label_39ea60;
        case 0x39ea64u: goto label_39ea64;
        case 0x39ea68u: goto label_39ea68;
        case 0x39ea6cu: goto label_39ea6c;
        case 0x39ea70u: goto label_39ea70;
        case 0x39ea74u: goto label_39ea74;
        case 0x39ea78u: goto label_39ea78;
        case 0x39ea7cu: goto label_39ea7c;
        case 0x39ea80u: goto label_39ea80;
        case 0x39ea84u: goto label_39ea84;
        case 0x39ea88u: goto label_39ea88;
        case 0x39ea8cu: goto label_39ea8c;
        case 0x39ea90u: goto label_39ea90;
        case 0x39ea94u: goto label_39ea94;
        case 0x39ea98u: goto label_39ea98;
        case 0x39ea9cu: goto label_39ea9c;
        case 0x39eaa0u: goto label_39eaa0;
        case 0x39eaa4u: goto label_39eaa4;
        case 0x39eaa8u: goto label_39eaa8;
        case 0x39eaacu: goto label_39eaac;
        case 0x39eab0u: goto label_39eab0;
        case 0x39eab4u: goto label_39eab4;
        case 0x39eab8u: goto label_39eab8;
        case 0x39eabcu: goto label_39eabc;
        case 0x39eac0u: goto label_39eac0;
        case 0x39eac4u: goto label_39eac4;
        case 0x39eac8u: goto label_39eac8;
        case 0x39eaccu: goto label_39eacc;
        case 0x39ead0u: goto label_39ead0;
        case 0x39ead4u: goto label_39ead4;
        case 0x39ead8u: goto label_39ead8;
        case 0x39eadcu: goto label_39eadc;
        case 0x39eae0u: goto label_39eae0;
        case 0x39eae4u: goto label_39eae4;
        case 0x39eae8u: goto label_39eae8;
        case 0x39eaecu: goto label_39eaec;
        case 0x39eaf0u: goto label_39eaf0;
        case 0x39eaf4u: goto label_39eaf4;
        default: break;
    }

    ctx->pc = 0x39e7b8u;

label_39e7b8:
    // 0x39e7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39e7bc:
    // 0x39e7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39e7c0:
    // 0x39e7c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39e7c4:
    // 0x39e7c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_39e7c8:
    // 0x39e7c8: 0xc0ec70c  jal         func_3B1C30
label_39e7cc:
    if (ctx->pc == 0x39E7CCu) {
        ctx->pc = 0x39E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7C8u;
        // 0x39e7cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7D0u;
        goto label_39e7d0;
    }
    ctx->pc = 0x39E7C8u;
    SET_GPR_U32(ctx, 31, 0x39E7D0u);
    ctx->pc = 0x39E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E7C8u;
    // 0x39e7cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1C30u, 0x39E7C8u, 0x39E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E7D0u;
label_39e7d0:
    // 0x39e7d0: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x39e7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_39e7d4:
    // 0x39e7d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39e7d8:
    // 0x39e7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39e7dc:
    // 0x39e7dc: 0x3e00008  jr          $ra
label_39e7e0:
    if (ctx->pc == 0x39E7E0u) {
        ctx->pc = 0x39E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7DCu;
        // 0x39e7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7E4u;
        goto label_39e7e4;
    }
    ctx->pc = 0x39E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7DCu;
        // 0x39e7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E7E4u;
label_39e7e4:
    // 0x39e7e4: 0x0  nop
    ctx->pc = 0x39e7e4u;
    // NOP
label_39e7e8:
    // 0x39e7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39e7ec:
    // 0x39e7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39e7f0:
    // 0x39e7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39e7f4:
    // 0x39e7f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_39e7f8:
    // 0x39e7f8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x39e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39e7fc:
    // 0x39e7fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39e800:
    // 0x39e800: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39e804:
    // 0x39e804: 0x40f809  jalr        $v0
label_39e808:
    if (ctx->pc == 0x39E808u) {
        ctx->pc = 0x39E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E804u;
        // 0x39e808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E80Cu;
        goto label_39e80c;
    }
    ctx->pc = 0x39E804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E80Cu);
        ctx->pc = 0x39E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E804u;
        // 0x39e808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E804u, 0x39E80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E80Cu;
label_39e80c:
    // 0x39e80c: 0x28420024  slti        $v0, $v0, 0x24
    ctx->pc = 0x39e80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
label_39e810:
    // 0x39e810: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_39e814:
    if (ctx->pc == 0x39E814u) {
        ctx->pc = 0x39E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E810u;
        // 0x39e814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E818u;
        goto label_39e818;
    }
    ctx->pc = 0x39E810u;
    {
        const bool branch_taken_0x39e810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e810) {
            ctx->pc = 0x39E814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E810u;
            // 0x39e814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E83Cu;
            goto label_39e83c;
        }
    }
    ctx->pc = 0x39E818u;
label_39e818:
    // 0x39e818: 0xc0ec74c  jal         func_3B1D30
label_39e81c:
    if (ctx->pc == 0x39E81Cu) {
        ctx->pc = 0x39E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E818u;
        // 0x39e81c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E820u;
        goto label_39e820;
    }
    ctx->pc = 0x39E818u;
    SET_GPR_U32(ctx, 31, 0x39E820u);
    ctx->pc = 0x39E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E818u;
    // 0x39e81c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1D30u, 0x39E818u, 0x39E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E820u;
label_39e820:
    // 0x39e820: 0xc0ec7b6  jal         func_3B1ED8
label_39e824:
    if (ctx->pc == 0x39E824u) {
        ctx->pc = 0x39E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E820u;
        // 0x39e824: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E828u;
        goto label_39e828;
    }
    ctx->pc = 0x39E820u;
    SET_GPR_U32(ctx, 31, 0x39E828u);
    ctx->pc = 0x39E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E820u;
    // 0x39e824: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1ED8u, 0x39E820u, 0x39E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E828u;
label_39e828:
    // 0x39e828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e82c:
    // 0x39e82c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39e830:
    // 0x39e830: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x39e830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
label_39e834:
    // 0x39e834: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x39e834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_39e838:
    // 0x39e838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39e83c:
    // 0x39e83c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39e840:
    // 0x39e840: 0x3e00008  jr          $ra
label_39e844:
    if (ctx->pc == 0x39E844u) {
        ctx->pc = 0x39E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E840u;
        // 0x39e844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E848u;
        goto label_39e848;
    }
    ctx->pc = 0x39E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E840u;
        // 0x39e844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E848u;
label_39e848:
    // 0x39e848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39e84c:
    // 0x39e84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e850:
    // 0x39e850: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39e850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_39e854:
    // 0x39e854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39e858:
    // 0x39e858: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x39e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_39e85c:
    // 0x39e85c: 0x26150014  addiu       $s5, $s0, 0x14
    ctx->pc = 0x39e85cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_39e860:
    // 0x39e860: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x39e860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_39e864:
    // 0x39e864: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_39e868:
    // 0x39e868: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x39e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_39e86c:
    // 0x39e86c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_39e870:
    // 0x39e870: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x39e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_39e874:
    // 0x39e874: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x39e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_39e878:
    // 0x39e878: 0x8211000b  lb          $s1, 0xB($s0)
    ctx->pc = 0x39e878u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_39e87c:
    // 0x39e87c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x39e87cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39e880:
    // 0x39e880: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_39e884:
    if (ctx->pc == 0x39E884u) {
        ctx->pc = 0x39E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E880u;
        // 0x39e884: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E888u;
        goto label_39e888;
    }
    ctx->pc = 0x39E880u;
    {
        const bool branch_taken_0x39e880 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E880u;
        // 0x39e884: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e880) {
            ctx->pc = 0x39E8B0u;
            goto label_39e8b0;
        }
    }
    ctx->pc = 0x39E888u;
label_39e888:
    // 0x39e888: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39e888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39e88c:
    // 0x39e88c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39e890:
    // 0x39e890: 0x40f809  jalr        $v0
label_39e894:
    if (ctx->pc == 0x39E894u) {
        ctx->pc = 0x39E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E890u;
        // 0x39e894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E898u;
        goto label_39e898;
    }
    ctx->pc = 0x39E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E898u);
        ctx->pc = 0x39E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E890u;
        // 0x39e894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E890u, 0x39E898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E898u;
label_39e898:
    // 0x39e898: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_39e89c:
    if (ctx->pc == 0x39E89Cu) {
        ctx->pc = 0x39E8A0u;
        goto label_39e8a0;
    }
    ctx->pc = 0x39E898u;
    {
        const bool branch_taken_0x39e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e898) {
            ctx->pc = 0x39E8B0u;
            goto label_39e8b0;
        }
    }
    ctx->pc = 0x39E8A0u;
label_39e8a0:
    // 0x39e8a0: 0xc0ec5d0  jal         func_3B1740
label_39e8a4:
    if (ctx->pc == 0x39E8A4u) {
        ctx->pc = 0x39E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8A0u;
        // 0x39e8a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8A8u;
        goto label_39e8a8;
    }
    ctx->pc = 0x39E8A0u;
    SET_GPR_U32(ctx, 31, 0x39E8A8u);
    ctx->pc = 0x39E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8A0u;
    // 0x39e8a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1740u, 0x39E8A0u, 0x39E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8A8u;
label_39e8a8:
    // 0x39e8a8: 0x10510088  beq         $v0, $s1, . + 4 + (0x88 << 2)
label_39e8ac:
    if (ctx->pc == 0x39E8ACu) {
        ctx->pc = 0x39E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8A8u;
        // 0x39e8ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8B0u;
        goto label_39e8b0;
    }
    ctx->pc = 0x39E8A8u;
    {
        const bool branch_taken_0x39e8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x39E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8A8u;
        // 0x39e8ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8a8) {
            ctx->pc = 0x39EACCu;
            goto label_39eacc;
        }
    }
    ctx->pc = 0x39E8B0u;
label_39e8b0:
    // 0x39e8b0: 0xc0e7ade  jal         func_39EB78
label_39e8b4:
    if (ctx->pc == 0x39E8B4u) {
        ctx->pc = 0x39E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8B0u;
        // 0x39e8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8B8u;
        goto label_39e8b8;
    }
    ctx->pc = 0x39E8B0u;
    SET_GPR_U32(ctx, 31, 0x39E8B8u);
    ctx->pc = 0x39E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8B0u;
    // 0x39e8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB78u, 0x39E8B0u, 0x39E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8B8u;
label_39e8b8:
    // 0x39e8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e8bc:
    // 0x39e8bc: 0xc0e7ad8  jal         func_39EB60
label_39e8c0:
    if (ctx->pc == 0x39E8C0u) {
        ctx->pc = 0x39E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8BCu;
        // 0x39e8c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8C4u;
        goto label_39e8c4;
    }
    ctx->pc = 0x39E8BCu;
    SET_GPR_U32(ctx, 31, 0x39E8C4u);
    ctx->pc = 0x39E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8BCu;
    // 0x39e8c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB60u, 0x39E8BCu, 0x39E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8C4u;
label_39e8c4:
    // 0x39e8c4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x39e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39e8c8:
    // 0x39e8c8: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x39e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_39e8cc:
    // 0x39e8cc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39e8ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_39e8d0:
    // 0x39e8d0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x39e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39e8d4:
    // 0x39e8d4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x39e8d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_39e8d8:
    // 0x39e8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e8dc:
    // 0x39e8dc: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x39e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_39e8e0:
    // 0x39e8e0: 0x60f809  jalr        $v1
label_39e8e4:
    if (ctx->pc == 0x39E8E4u) {
        ctx->pc = 0x39E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8E0u;
        // 0x39e8e4: 0x290c3  sra         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8E8u;
        goto label_39e8e8;
    }
    ctx->pc = 0x39E8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E8E8u);
        ctx->pc = 0x39E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8E0u;
        // 0x39e8e4: 0x290c3  sra         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E8E0u, 0x39E8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E8E8u;
label_39e8e8:
    // 0x39e8e8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_39e8ec:
    if (ctx->pc == 0x39E8ECu) {
        ctx->pc = 0x39E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8E8u;
        // 0x39e8ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8F0u;
        goto label_39e8f0;
    }
    ctx->pc = 0x39E8E8u;
    {
        const bool branch_taken_0x39e8e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e8e8) {
            ctx->pc = 0x39E8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E8E8u;
            // 0x39e8ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E8F0u;
            goto label_39e8f0;
        }
    }
    ctx->pc = 0x39E8F0u;
label_39e8f0:
    // 0x39e8f0: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x39e8f0u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39e8f4:
    // 0x39e8f4: 0x1012  mflo        $v0
    ctx->pc = 0x39e8f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_39e8f8:
    // 0x39e8f8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x39e8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_39e8fc:
    // 0x39e8fc: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
label_39e900:
    if (ctx->pc == 0x39E900u) {
        ctx->pc = 0x39E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8FCu;
        // 0x39e900: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E904u;
        goto label_39e904;
    }
    ctx->pc = 0x39E8FCu;
    {
        const bool branch_taken_0x39e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e8fc) {
            ctx->pc = 0x39E900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E8FCu;
            // 0x39e900: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EAD4u;
            goto label_39ead4;
        }
    }
    ctx->pc = 0x39E904u;
label_39e904:
    // 0x39e904: 0xc0ec7ee  jal         func_3B1FB8
label_39e908:
    if (ctx->pc == 0x39E908u) {
        ctx->pc = 0x39E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E904u;
        // 0x39e908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E90Cu;
        goto label_39e90c;
    }
    ctx->pc = 0x39E904u;
    SET_GPR_U32(ctx, 31, 0x39E90Cu);
    ctx->pc = 0x39E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E904u;
    // 0x39e908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FB8u, 0x39E904u, 0x39E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E90Cu;
label_39e90c:
    // 0x39e90c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_39e910:
    if (ctx->pc == 0x39E910u) {
        ctx->pc = 0x39E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E90Cu;
        // 0x39e910: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E914u;
        goto label_39e914;
    }
    ctx->pc = 0x39E90Cu;
    {
        const bool branch_taken_0x39e90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e90c) {
            ctx->pc = 0x39E910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E90Cu;
            // 0x39e910: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E938u;
            goto label_39e938;
        }
    }
    ctx->pc = 0x39E914u;
label_39e914:
    // 0x39e914: 0xc0ec7b6  jal         func_3B1ED8
label_39e918:
    if (ctx->pc == 0x39E918u) {
        ctx->pc = 0x39E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E914u;
        // 0x39e918: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E91Cu;
        goto label_39e91c;
    }
    ctx->pc = 0x39E914u;
    SET_GPR_U32(ctx, 31, 0x39E91Cu);
    ctx->pc = 0x39E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E914u;
    // 0x39e918: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1ED8u, 0x39E914u, 0x39E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E91Cu;
label_39e91c:
    // 0x39e91c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39e91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e920:
    // 0x39e920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e924:
    // 0x39e924: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_39e928:
    if (ctx->pc == 0x39E928u) {
        ctx->pc = 0x39E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E924u;
        // 0x39e928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E92Cu;
        goto label_39e92c;
    }
    ctx->pc = 0x39E924u;
    {
        const bool branch_taken_0x39e924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E924u;
        // 0x39e928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e924) {
            ctx->pc = 0x39EAC8u;
            goto label_39eac8;
        }
    }
    ctx->pc = 0x39E92Cu;
label_39e92c:
    // 0x39e92c: 0x50620069  beql        $v1, $v0, . + 4 + (0x69 << 2)
label_39e930:
    if (ctx->pc == 0x39E930u) {
        ctx->pc = 0x39E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E92Cu;
        // 0x39e930: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E934u;
        goto label_39e934;
    }
    ctx->pc = 0x39E92Cu;
    {
        const bool branch_taken_0x39e92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39e92c) {
            ctx->pc = 0x39E930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E92Cu;
            // 0x39e930: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EAD4u;
            goto label_39ead4;
        }
    }
    ctx->pc = 0x39E934u;
label_39e934:
    // 0x39e934: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39e938:
    // 0x39e938: 0x2320018  mult        $zero, $s1, $s2
    ctx->pc = 0x39e938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39e93c:
    // 0x39e93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e940:
    // 0x39e940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39e944:
    // 0x39e944: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x39e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39e948:
    // 0x39e948: 0x3012  mflo        $a2
    ctx->pc = 0x39e948u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_39e94c:
    // 0x39e94c: 0x60f809  jalr        $v1
label_39e950:
    if (ctx->pc == 0x39E950u) {
        ctx->pc = 0x39E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E94Cu;
        // 0x39e950: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E954u;
        goto label_39e954;
    }
    ctx->pc = 0x39E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E954u);
        ctx->pc = 0x39E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E94Cu;
        // 0x39e950: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E94Cu, 0x39E954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E954u;
label_39e954:
    // 0x39e954: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39e958:
    // 0x39e958: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x39e958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_39e95c:
    // 0x39e95c: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
label_39e960:
    if (ctx->pc == 0x39E960u) {
        ctx->pc = 0x39E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E95Cu;
        // 0x39e960: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E964u;
        goto label_39e964;
    }
    ctx->pc = 0x39E95Cu;
    {
        const bool branch_taken_0x39e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x39E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E95Cu;
        // 0x39e960: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e95c) {
            ctx->pc = 0x39E988u;
            goto label_39e988;
        }
    }
    ctx->pc = 0x39E964u;
label_39e964:
    // 0x39e964: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39e964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39e968:
    // 0x39e968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e96c:
    // 0x39e96c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39e970:
    // 0x39e970: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39e974:
    // 0x39e974: 0x40f809  jalr        $v0
label_39e978:
    if (ctx->pc == 0x39E978u) {
        ctx->pc = 0x39E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E974u;
        // 0x39e978: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E97Cu;
        goto label_39e97c;
    }
    ctx->pc = 0x39E974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E97Cu);
        ctx->pc = 0x39E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E974u;
        // 0x39e978: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E974u, 0x39E97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E97Cu;
label_39e97c:
    // 0x39e97c: 0x10000055  b           . + 4 + (0x55 << 2)
label_39e980:
    if (ctx->pc == 0x39E980u) {
        ctx->pc = 0x39E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E97Cu;
        // 0x39e980: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E984u;
        goto label_39e984;
    }
    ctx->pc = 0x39E97Cu;
    {
        const bool branch_taken_0x39e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E97Cu;
        // 0x39e980: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e97c) {
            ctx->pc = 0x39EAD4u;
            goto label_39ead4;
        }
    }
    ctx->pc = 0x39E984u;
label_39e984:
    // 0x39e984: 0x0  nop
    ctx->pc = 0x39e984u;
    // NOP
label_39e988:
    // 0x39e988: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x39e988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39e98c:
    // 0x39e98c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39e98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e990:
    // 0x39e990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e994:
    // 0x39e994: 0xc0ec7f2  jal         func_3B1FC8
label_39e998:
    if (ctx->pc == 0x39E998u) {
        ctx->pc = 0x39E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E994u;
        // 0x39e998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E99Cu;
        goto label_39e99c;
    }
    ctx->pc = 0x39E994u;
    SET_GPR_U32(ctx, 31, 0x39E99Cu);
    ctx->pc = 0x39E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E994u;
    // 0x39e998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FC8u, 0x39E994u, 0x39E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E99Cu;
label_39e99c:
    // 0x39e99c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39e9a0:
    // 0x39e9a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39e9a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e9a4:
    // 0x39e9a4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x39e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_39e9a8:
    // 0x39e9a8: 0x284201e0  slti        $v0, $v0, 0x1E0
    ctx->pc = 0x39e9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)480) ? 1 : 0);
label_39e9ac:
    // 0x39e9ac: 0xc0ec83a  jal         func_3B20E8
label_39e9b0:
    if (ctx->pc == 0x39E9B0u) {
        ctx->pc = 0x39E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9ACu;
        // 0x39e9b0: 0x262880a  movz        $s1, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9B4u;
        goto label_39e9b4;
    }
    ctx->pc = 0x39E9ACu;
    SET_GPR_U32(ctx, 31, 0x39E9B4u);
    ctx->pc = 0x39E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E9ACu;
    // 0x39e9b0: 0x262880a  movz        $s1, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B20E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B20E8u, 0x39E9ACu, 0x39E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E9B4u;
label_39e9b4:
    // 0x39e9b4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x39e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_39e9b8:
    // 0x39e9b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39e9b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e9bc:
    // 0x39e9bc: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x39e9bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39e9c0:
    // 0x39e9c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39e9c4:
    // 0x39e9c4: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x39e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_39e9c8:
    // 0x39e9c8: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x39e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_39e9cc:
    // 0x39e9cc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x39e9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39e9d0:
    // 0x39e9d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39e9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39e9d4:
    // 0x39e9d4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x39e9d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_39e9d8:
    // 0x39e9d8: 0x2320018  mult        $zero, $s1, $s2
    ctx->pc = 0x39e9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39e9dc:
    // 0x39e9dc: 0x2812  mflo        $a1
    ctx->pc = 0x39e9dcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_39e9e0:
    // 0x39e9e0: 0xc0eb07e  jal         func_3AC1F8
label_39e9e4:
    if (ctx->pc == 0x39E9E4u) {
        ctx->pc = 0x39E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9E0u;
        // 0x39e9e4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9E8u;
        goto label_39e9e8;
    }
    ctx->pc = 0x39E9E0u;
    SET_GPR_U32(ctx, 31, 0x39E9E8u);
    ctx->pc = 0x39E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E9E0u;
    // 0x39e9e4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x39E9E0u, 0x39E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E9E8u;
label_39e9e8:
    // 0x39e9e8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_39e9ec:
    // 0x39e9ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_39e9f0:
    if (ctx->pc == 0x39E9F0u) {
        ctx->pc = 0x39E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9ECu;
        // 0x39e9f0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9F4u;
        goto label_39e9f4;
    }
    ctx->pc = 0x39E9ECu;
    {
        const bool branch_taken_0x39e9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e9ec) {
            ctx->pc = 0x39E9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E9ECu;
            // 0x39e9f0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EA14u;
            goto label_39ea14;
        }
    }
    ctx->pc = 0x39E9F4u;
label_39e9f4:
    // 0x39e9f4: 0x5a200007  blezl       $s1, . + 4 + (0x7 << 2)
label_39e9f8:
    if (ctx->pc == 0x39E9F8u) {
        ctx->pc = 0x39E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9F4u;
        // 0x39e9f8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9FCu;
        goto label_39e9fc;
    }
    ctx->pc = 0x39E9F4u;
    {
        const bool branch_taken_0x39e9f4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x39e9f4) {
            ctx->pc = 0x39E9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E9F4u;
            // 0x39e9f8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EA14u;
            goto label_39ea14;
        }
    }
    ctx->pc = 0x39E9FCu;
label_39e9fc:
    // 0x39e9fc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39ea00:
    // 0x39ea00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ea00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ea04:
    // 0x39ea04: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x39ea04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39ea08:
    // 0x39ea08: 0x40f809  jalr        $v0
label_39ea0c:
    if (ctx->pc == 0x39EA0Cu) {
        ctx->pc = 0x39EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA08u;
        // 0x39ea0c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA10u;
        goto label_39ea10;
    }
    ctx->pc = 0x39EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EA10u);
        ctx->pc = 0x39EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA08u;
        // 0x39ea0c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EA08u, 0x39EA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EA10u;
label_39ea10:
    // 0x39ea10: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39ea14:
    // 0x39ea14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39ea14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39ea18:
    // 0x39ea18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39ea1c:
    // 0x39ea1c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39ea20:
    // 0x39ea20: 0x40f809  jalr        $v0
label_39ea24:
    if (ctx->pc == 0x39EA24u) {
        ctx->pc = 0x39EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA20u;
        // 0x39ea24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA28u;
        goto label_39ea28;
    }
    ctx->pc = 0x39EA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EA28u);
        ctx->pc = 0x39EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA20u;
        // 0x39ea24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EA20u, 0x39EA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EA28u;
label_39ea28:
    // 0x39ea28: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39ea2c:
    // 0x39ea2c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x39ea2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39ea30:
    // 0x39ea30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39ea34:
    // 0x39ea34: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x39ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_39ea38:
    // 0x39ea38: 0x60f809  jalr        $v1
label_39ea3c:
    if (ctx->pc == 0x39EA3Cu) {
        ctx->pc = 0x39EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA38u;
        // 0x39ea3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA40u;
        goto label_39ea40;
    }
    ctx->pc = 0x39EA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39EA40u);
        ctx->pc = 0x39EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA38u;
        // 0x39ea3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EA38u, 0x39EA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EA40u;
label_39ea40:
    // 0x39ea40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x39ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_39ea44:
    // 0x39ea44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39ea48:
    // 0x39ea48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x39ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39ea4c:
    // 0x39ea4c: 0xc0ec5ce  jal         func_3B1738
label_39ea50:
    if (ctx->pc == 0x39EA50u) {
        ctx->pc = 0x39EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA4Cu;
        // 0x39ea50: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA54u;
        goto label_39ea54;
    }
    ctx->pc = 0x39EA4Cu;
    SET_GPR_U32(ctx, 31, 0x39EA54u);
    ctx->pc = 0x39EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA4Cu;
    // 0x39ea50: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1738u, 0x39EA4Cu, 0x39EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA54u;
label_39ea54:
    // 0x39ea54: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x39ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_39ea58:
    // 0x39ea58: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x39ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_39ea5c:
    // 0x39ea5c: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x39ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_39ea60:
    // 0x39ea60: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x39ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_39ea64:
    // 0x39ea64: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x39ea64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_39ea68:
    // 0x39ea68: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x39ea68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39ea6c:
    // 0x39ea6c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x39ea6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_39ea70:
    // 0x39ea70: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x39ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_39ea74:
    // 0x39ea74: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x39ea74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_39ea78:
    // 0x39ea78: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x39ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_39ea7c:
    // 0x39ea7c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x39ea7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_39ea80:
    // 0x39ea80: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x39ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_39ea84:
    // 0x39ea84: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x39ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_39ea88:
    // 0x39ea88: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x39ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_39ea8c:
    // 0x39ea8c: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x39ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
label_39ea90:
    // 0x39ea90: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_39ea94:
    if (ctx->pc == 0x39EA94u) {
        ctx->pc = 0x39EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA90u;
        // 0x39ea94: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA98u;
        goto label_39ea98;
    }
    ctx->pc = 0x39EA90u;
    {
        const bool branch_taken_0x39ea90 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x39EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA90u;
        // 0x39ea94: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea90) {
            ctx->pc = 0x39EAB8u;
            goto label_39eab8;
        }
    }
    ctx->pc = 0x39EA98u;
label_39ea98:
    // 0x39ea98: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x39ea98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39ea9c:
    // 0x39ea9c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_39eaa0:
    if (ctx->pc == 0x39EAA0u) {
        ctx->pc = 0x39EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA9Cu;
        // 0x39eaa0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAA4u;
        goto label_39eaa4;
    }
    ctx->pc = 0x39EA9Cu;
    {
        const bool branch_taken_0x39ea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ea9c) {
            ctx->pc = 0x39EAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EA9Cu;
            // 0x39eaa0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EABCu;
            goto label_39eabc;
        }
    }
    ctx->pc = 0x39EAA4u;
label_39eaa4:
    // 0x39eaa4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x39eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_39eaa8:
    // 0x39eaa8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39eaac:
    if (ctx->pc == 0x39EAACu) {
        ctx->pc = 0x39EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAA8u;
        // 0x39eaac: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAB0u;
        goto label_39eab0;
    }
    ctx->pc = 0x39EAA8u;
    {
        const bool branch_taken_0x39eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39eaa8) {
            ctx->pc = 0x39EAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EAA8u;
            // 0x39eaac: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EABCu;
            goto label_39eabc;
        }
    }
    ctx->pc = 0x39EAB0u;
label_39eab0:
    // 0x39eab0: 0x40f809  jalr        $v0
label_39eab4:
    if (ctx->pc == 0x39EAB4u) {
        ctx->pc = 0x39EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAB0u;
        // 0x39eab4: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAB8u;
        goto label_39eab8;
    }
    ctx->pc = 0x39EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EAB8u);
        ctx->pc = 0x39EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAB0u;
        // 0x39eab4: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EAB0u, 0x39EAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EAB8u;
label_39eab8:
    // 0x39eab8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x39eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_39eabc:
    // 0x39eabc: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x39eabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_39eac0:
    // 0x39eac0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_39eac4:
    if (ctx->pc == 0x39EAC4u) {
        ctx->pc = 0x39EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAC0u;
        // 0x39eac4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAC8u;
        goto label_39eac8;
    }
    ctx->pc = 0x39EAC0u;
    {
        const bool branch_taken_0x39eac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39eac0) {
            ctx->pc = 0x39EAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EAC0u;
            // 0x39eac4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EAD4u;
            goto label_39ead4;
        }
    }
    ctx->pc = 0x39EAC8u;
label_39eac8:
    // 0x39eac8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39eacc:
    // 0x39eacc: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x39eaccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_39ead0:
    // 0x39ead0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39ead0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39ead4:
    // 0x39ead4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x39ead4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39ead8:
    // 0x39ead8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39ead8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39eadc:
    // 0x39eadc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x39eadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39eae0:
    // 0x39eae0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39eae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39eae4:
    // 0x39eae4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x39eae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_39eae8:
    // 0x39eae8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x39eae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39eaec:
    // 0x39eaec: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x39eaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_39eaf0:
    // 0x39eaf0: 0x3e00008  jr          $ra
label_39eaf4:
    if (ctx->pc == 0x39EAF4u) {
        ctx->pc = 0x39EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAF0u;
        // 0x39eaf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAF8u;
        goto label_fallthrough_0x39eaf0;
    }
    ctx->pc = 0x39EAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAF0u;
        // 0x39eaf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39eaf0:
    ctx->pc = 0x39EAF8u;
}

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

// Function: sub_001635B8
// Address: 0x1635b8 - 0x163640
void sub_001635B8_0x1635b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001635B8_0x1635b8");
#endif

    switch (ctx->pc) {
        case 0x1635b8u: goto label_1635b8;
        case 0x1635bcu: goto label_1635bc;
        case 0x1635c0u: goto label_1635c0;
        case 0x1635c4u: goto label_1635c4;
        case 0x1635c8u: goto label_1635c8;
        case 0x1635ccu: goto label_1635cc;
        case 0x1635d0u: goto label_1635d0;
        case 0x1635d4u: goto label_1635d4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635dcu: goto label_1635dc;
        case 0x1635e0u: goto label_1635e0;
        case 0x1635e4u: goto label_1635e4;
        case 0x1635e8u: goto label_1635e8;
        case 0x1635ecu: goto label_1635ec;
        case 0x1635f0u: goto label_1635f0;
        case 0x1635f4u: goto label_1635f4;
        case 0x1635f8u: goto label_1635f8;
        case 0x1635fcu: goto label_1635fc;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163608u: goto label_163608;
        case 0x16360cu: goto label_16360c;
        case 0x163610u: goto label_163610;
        case 0x163614u: goto label_163614;
        case 0x163618u: goto label_163618;
        case 0x16361cu: goto label_16361c;
        case 0x163620u: goto label_163620;
        case 0x163624u: goto label_163624;
        case 0x163628u: goto label_163628;
        case 0x16362cu: goto label_16362c;
        case 0x163630u: goto label_163630;
        case 0x163634u: goto label_163634;
        case 0x163638u: goto label_163638;
        case 0x16363cu: goto label_16363c;
        default: break;
    }

    ctx->pc = 0x1635b8u;

label_1635b8:
    // 0x1635b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1635b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1635bc:
    // 0x1635bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1635bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1635c0:
    // 0x1635c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1635c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1635c4:
    // 0x1635c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1635c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1635c8:
    // 0x1635c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1635c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1635cc:
    // 0x1635cc: 0xc04f26c  jal         func_13C9B0
label_1635d0:
    if (ctx->pc == 0x1635D0u) {
        ctx->pc = 0x1635D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635CCu;
        // 0x1635d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635D4u;
        goto label_1635d4;
    }
    ctx->pc = 0x1635CCu;
    SET_GPR_U32(ctx, 31, 0x1635D4u);
    ctx->pc = 0x1635D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635CCu;
    // 0x1635d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x1635CCu, 0x1635D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635D4u;
label_1635d4:
    // 0x1635d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1635d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1635d8:
    // 0x1635d8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1635d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1635dc:
    // 0x1635dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1635dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1635e0:
    // 0x1635e0: 0xc04f33e  jal         func_13CCF8
label_1635e4:
    if (ctx->pc == 0x1635E4u) {
        ctx->pc = 0x1635E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635E0u;
        // 0x1635e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635E8u;
        goto label_1635e8;
    }
    ctx->pc = 0x1635E0u;
    SET_GPR_U32(ctx, 31, 0x1635E8u);
    ctx->pc = 0x1635E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635E0u;
    // 0x1635e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x1635E0u, 0x1635E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635E8u;
label_1635e8:
    // 0x1635e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1635e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1635ec:
    // 0x1635ec: 0xc04f0b6  jal         func_13C2D8
label_1635f0:
    if (ctx->pc == 0x1635F0u) {
        ctx->pc = 0x1635F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ECu;
        // 0x1635f0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635F4u;
        goto label_1635f4;
    }
    ctx->pc = 0x1635ECu;
    SET_GPR_U32(ctx, 31, 0x1635F4u);
    ctx->pc = 0x1635F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635ECu;
    // 0x1635f0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1635ECu, 0x1635F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635F4u;
label_1635f4:
    // 0x1635f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1635f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1635f8:
    // 0x1635f8: 0x262502f0  addiu       $a1, $s1, 0x2F0
    ctx->pc = 0x1635f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_1635fc:
    // 0x1635fc: 0xc046058  jal         func_118160
label_163600:
    if (ctx->pc == 0x163600u) {
        ctx->pc = 0x163600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635FCu;
        // 0x163600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163604u;
        goto label_163604;
    }
    ctx->pc = 0x1635FCu;
    SET_GPR_U32(ctx, 31, 0x163604u);
    ctx->pc = 0x163600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635FCu;
    // 0x163600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1635FCu, 0x163604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163604u;
label_163604:
    // 0x163604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163608:
    // 0x163608: 0xc046330  jal         func_118CC0
label_16360c:
    if (ctx->pc == 0x16360Cu) {
        ctx->pc = 0x16360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163608u;
        // 0x16360c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163610u;
        goto label_163610;
    }
    ctx->pc = 0x163608u;
    SET_GPR_U32(ctx, 31, 0x163610u);
    ctx->pc = 0x16360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163608u;
    // 0x16360c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x163608u, 0x163610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163610u;
label_163610:
    // 0x163610: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_163614:
    // 0x163614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163618:
    // 0x163618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16361c:
    // 0x16361c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_163620:
    // 0x163620: 0x40f809  jalr        $v0
label_163624:
    if (ctx->pc == 0x163624u) {
        ctx->pc = 0x163624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163620u;
        // 0x163624: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163628u;
        goto label_163628;
    }
    ctx->pc = 0x163620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163628u);
        ctx->pc = 0x163624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163620u;
        // 0x163624: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163620u, 0x163628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163628u;
label_163628:
    // 0x163628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16362c:
    // 0x16362c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16362cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163630:
    // 0x163630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x163630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163634:
    // 0x163634: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x163634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163638:
    // 0x163638: 0x3e00008  jr          $ra
label_16363c:
    if (ctx->pc == 0x16363Cu) {
        ctx->pc = 0x16363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163638u;
        // 0x16363c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163640u;
        goto label_fallthrough_0x163638;
    }
    ctx->pc = 0x163638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163638u;
        // 0x16363c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163638:
    ctx->pc = 0x163640u;
}

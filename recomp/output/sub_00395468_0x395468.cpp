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

// Function: sub_00395468
// Address: 0x395468 - 0x395558
void sub_00395468_0x395468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395468_0x395468");
#endif

    switch (ctx->pc) {
        case 0x395494u: goto label_395494;
        case 0x3954a8u: goto label_3954a8;
        case 0x3954e4u: goto label_3954e4;
        case 0x3954f8u: goto label_3954f8;
        case 0x395500u: goto label_395500;
        case 0x395508u: goto label_395508;
        case 0x39551cu: goto label_39551c;
        case 0x395524u: goto label_395524;
        case 0x39553cu: goto label_39553c;
        default: break;
    }

    ctx->pc = 0x395468u;

    // 0x395468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39546c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x395478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39547c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x39547cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395480: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x395480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x395484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x395484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x395488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x395488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39548c: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x39548Cu;
    SET_GPR_U32(ctx, 31, 0x395494u);
    ctx->pc = 0x395490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39548Cu;
    // 0x395490: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x39548Cu, 0x395494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395494u;
label_395494:
    // 0x395494: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x395498: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395498u;
    {
        const bool branch_taken_0x395498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395498u;
        // 0x39549c: 0x2484aa50  addiu       $a0, $a0, -0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395498) {
            ctx->pc = 0x3954B0u;
            goto label_3954b0;
        }
    }
    ctx->pc = 0x3954A0u;
    // 0x3954a0: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3954A0u;
    SET_GPR_U32(ctx, 31, 0x3954A8u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3954A0u, 0x3954A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3954A8u;
label_3954a8:
    // 0x3954a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3954A8u;
    {
        const bool branch_taken_0x3954a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954A8u;
        // 0x3954ac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954a8) {
            ctx->pc = 0x395540u;
            goto label_395540;
        }
    }
    ctx->pc = 0x3954B0u;
label_3954b0:
    // 0x3954b0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3954b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3954b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3954b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3954b8: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3954B8u;
    {
        const bool branch_taken_0x3954b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3954BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954B8u;
        // 0x3954bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954b8) {
            ctx->pc = 0x39553Cu;
            goto label_39553c;
        }
    }
    ctx->pc = 0x3954C0u;
    // 0x3954c0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3954C0u;
    {
        const bool branch_taken_0x3954c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3954c0) {
            ctx->pc = 0x3954C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3954C0u;
            // 0x3954c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3954D0u;
            goto label_3954d0;
        }
    }
    ctx->pc = 0x3954C8u;
    // 0x3954c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3954C8u;
    {
        const bool branch_taken_0x3954c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954C8u;
        // 0x3954cc: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954c8) {
            ctx->pc = 0x39553Cu;
            goto label_39553c;
        }
    }
    ctx->pc = 0x3954D0u;
label_3954d0:
    // 0x3954d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3954D0u;
    {
        const bool branch_taken_0x3954d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3954d0) {
            ctx->pc = 0x3954F0u;
            goto label_3954f0;
        }
    }
    ctx->pc = 0x3954D8u;
    // 0x3954d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3954d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3954dc: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3954DCu;
    SET_GPR_U32(ctx, 31, 0x3954E4u);
    ctx->pc = 0x3954E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3954DCu;
    // 0x3954e0: 0x2484aa78  addiu       $a0, $a0, -0x5588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3954DCu, 0x3954E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3954E4u;
label_3954e4:
    // 0x3954e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3954E4u;
    {
        const bool branch_taken_0x3954e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954E4u;
        // 0x3954e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954e4) {
            ctx->pc = 0x395540u;
            goto label_395540;
        }
    }
    ctx->pc = 0x3954ECu;
    // 0x3954ec: 0x0  nop
    ctx->pc = 0x3954ecu;
    // NOP
label_3954f0:
    // 0x3954f0: 0xc0e6760  jal         func_399D80
    ctx->pc = 0x3954F0u;
    SET_GPR_U32(ctx, 31, 0x3954F8u);
    ctx->pc = 0x399D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D80u, 0x3954F0u, 0x3954F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3954F8u;
label_3954f8:
    // 0x3954f8: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x3954F8u;
    SET_GPR_U32(ctx, 31, 0x395500u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x3954F8u, 0x395500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395500u;
label_395500:
    // 0x395500: 0xc0e66d6  jal         func_399B58
    ctx->pc = 0x395500u;
    SET_GPR_U32(ctx, 31, 0x395508u);
    ctx->pc = 0x395504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395500u;
    // 0x395504: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B58u, 0x395500u, 0x395508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395508u;
label_395508:
    // 0x395508: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x395508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39550c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395510: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x395510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x395514: 0xc0e53b2  jal         func_394EC8
    ctx->pc = 0x395514u;
    SET_GPR_U32(ctx, 31, 0x39551Cu);
    ctx->pc = 0x395518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395514u;
    // 0x395518: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394EC8u, 0x395514u, 0x39551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39551Cu;
label_39551c:
    // 0x39551c: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x39551Cu;
    SET_GPR_U32(ctx, 31, 0x395524u);
    ctx->pc = 0x395520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39551Cu;
    // 0x395520: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39551Cu, 0x395524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395524u;
label_395524:
    // 0x395524: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x395524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x395528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x395528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39552c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39552cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395530: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x395530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395534: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x395534u;
    SET_GPR_U32(ctx, 31, 0x39553Cu);
    ctx->pc = 0x395538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395534u;
    // 0x395538: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x395534u, 0x39553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39553Cu;
label_39553c:
    // 0x39553c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_395540:
    // 0x395540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x395544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39554c: 0x3e00008  jr          $ra
    ctx->pc = 0x39554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39554Cu;
        // 0x395550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39554Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395554u;
    // 0x395554: 0x0  nop
    ctx->pc = 0x395554u;
    // NOP
    ctx->pc = 0x395558u;
}

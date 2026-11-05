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

// Function: sub_0017D6A0
// Address: 0x17d6a0 - 0x17d748
void sub_0017D6A0_0x17d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D6A0_0x17d6a0");
#endif

    switch (ctx->pc) {
        case 0x17d6c8u: goto label_17d6c8;
        case 0x17d6d8u: goto label_17d6d8;
        case 0x17d700u: goto label_17d700;
        case 0x17d708u: goto label_17d708;
        case 0x17d710u: goto label_17d710;
        case 0x17d718u: goto label_17d718;
        case 0x17d724u: goto label_17d724;
        case 0x17d72cu: goto label_17d72c;
        default: break;
    }

    ctx->pc = 0x17d6a0u;

    // 0x17d6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d6a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d6b4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x17D6B4u;
    {
        const bool branch_taken_0x17d6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d6b4) {
            ctx->pc = 0x17D6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D6B4u;
            // 0x17d6b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D738u;
            goto label_17d738;
        }
    }
    ctx->pc = 0x17D6BCu;
    // 0x17d6bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17d6c0: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D6C0u;
    SET_GPR_U32(ctx, 31, 0x17D6C8u);
    ctx->pc = 0x17D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6C0u;
    // 0x17d6c4: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D6C0u, 0x17D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6C8u;
label_17d6c8:
    // 0x17d6c8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17d6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6d0: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17D6D0u;
    SET_GPR_U32(ctx, 31, 0x17D6D8u);
    ctx->pc = 0x17D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6D0u;
    // 0x17d6d4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D748u, 0x17D6D0u, 0x17D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6D8u;
label_17d6d8:
    // 0x17d6d8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17d6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6e0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x17d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x17d6e4: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x17d6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d6e8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x17d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x17d6ec: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x17d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x17d6f0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x17d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x17d6f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x17d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x17d6f8: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17D6F8u;
    SET_GPR_U32(ctx, 31, 0x17D700u);
    ctx->pc = 0x17D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6F8u;
    // 0x17d6fc: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D790u, 0x17D6F8u, 0x17D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D700u;
label_17d700:
    // 0x17d700: 0xc05f5ee  jal         func_17D7B8
    ctx->pc = 0x17D700u;
    SET_GPR_U32(ctx, 31, 0x17D708u);
    ctx->pc = 0x17D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D700u;
    // 0x17d704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7B8u, 0x17D700u, 0x17D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D708u;
label_17d708:
    // 0x17d708: 0xc05f5f4  jal         func_17D7D0
    ctx->pc = 0x17D708u;
    SET_GPR_U32(ctx, 31, 0x17D710u);
    ctx->pc = 0x17D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D708u;
    // 0x17d70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7D0u, 0x17D708u, 0x17D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D710u;
label_17d710:
    // 0x17d710: 0xc05f5fe  jal         func_17D7F8
    ctx->pc = 0x17D710u;
    SET_GPR_U32(ctx, 31, 0x17D718u);
    ctx->pc = 0x17D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D710u;
    // 0x17d714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7F8u, 0x17D710u, 0x17D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D718u;
label_17d718:
    // 0x17d718: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x17d718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x17d71c: 0xc05f608  jal         func_17D820
    ctx->pc = 0x17D71Cu;
    SET_GPR_U32(ctx, 31, 0x17D724u);
    ctx->pc = 0x17D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D71Cu;
    // 0x17d720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D820u, 0x17D71Cu, 0x17D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D724u;
label_17d724:
    // 0x17d724: 0xc05f620  jal         func_17D880
    ctx->pc = 0x17D724u;
    SET_GPR_U32(ctx, 31, 0x17D72Cu);
    ctx->pc = 0x17D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D724u;
    // 0x17d728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D880u, 0x17D724u, 0x17D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D72Cu;
label_17d72c:
    // 0x17d72c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17d730: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17d730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17d734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d738:
    // 0x17d738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d73c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D73Cu;
        // 0x17d740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D744u;
    // 0x17d744: 0x0  nop
    ctx->pc = 0x17d744u;
    // NOP
    ctx->pc = 0x17d748u;
}

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

// Function: sub_00169FE8
// Address: 0x169fe8 - 0x16a068
void sub_00169FE8_0x169fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169FE8_0x169fe8");
#endif

    switch (ctx->pc) {
        case 0x16a004u: goto label_16a004;
        case 0x16a010u: goto label_16a010;
        case 0x16a018u: goto label_16a018;
        case 0x16a020u: goto label_16a020;
        case 0x16a028u: goto label_16a028;
        case 0x16a030u: goto label_16a030;
        case 0x16a038u: goto label_16a038;
        case 0x16a040u: goto label_16a040;
        case 0x16a050u: goto label_16a050;
        default: break;
    }

    ctx->pc = 0x169fe8u;

    // 0x169fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169ffc: 0xc05aac2  jal         func_16AB08
    ctx->pc = 0x169FFCu;
    SET_GPR_U32(ctx, 31, 0x16A004u);
    ctx->pc = 0x16A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FFCu;
    // 0x16a000: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB08u, 0x169FFCu, 0x16A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A004u;
label_16a004:
    // 0x16a004: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x16a004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x16a008: 0xc05aaca  jal         func_16AB28
    ctx->pc = 0x16A008u;
    SET_GPR_U32(ctx, 31, 0x16A010u);
    ctx->pc = 0x16A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A008u;
    // 0x16a00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB28u, 0x16A008u, 0x16A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A010u;
label_16a010:
    // 0x16a010: 0xc05ad86  jal         func_16B618
    ctx->pc = 0x16A010u;
    SET_GPR_U32(ctx, 31, 0x16A018u);
    ctx->pc = 0x16A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A010u;
    // 0x16a014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B618u, 0x16A010u, 0x16A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A018u;
label_16a018:
    // 0x16a018: 0xc05aee2  jal         func_16BB88
    ctx->pc = 0x16A018u;
    SET_GPR_U32(ctx, 31, 0x16A020u);
    ctx->pc = 0x16A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A018u;
    // 0x16a01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BB88u, 0x16A018u, 0x16A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A020u;
label_16a020:
    // 0x16a020: 0xc05afdc  jal         func_16BF70
    ctx->pc = 0x16A020u;
    SET_GPR_U32(ctx, 31, 0x16A028u);
    ctx->pc = 0x16A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A020u;
    // 0x16a024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF70u, 0x16A020u, 0x16A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A028u;
label_16a028:
    // 0x16a028: 0xc05aa24  jal         func_16A890
    ctx->pc = 0x16A028u;
    SET_GPR_U32(ctx, 31, 0x16A030u);
    ctx->pc = 0x16A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A028u;
    // 0x16a02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A890u, 0x16A028u, 0x16A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A030u;
label_16a030:
    // 0x16a030: 0xc05aa6e  jal         func_16A9B8
    ctx->pc = 0x16A030u;
    SET_GPR_U32(ctx, 31, 0x16A038u);
    ctx->pc = 0x16A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A030u;
    // 0x16a034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9B8u, 0x16A030u, 0x16A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A038u;
label_16a038:
    // 0x16a038: 0xc05aab2  jal         func_16AAC8
    ctx->pc = 0x16A038u;
    SET_GPR_U32(ctx, 31, 0x16A040u);
    ctx->pc = 0x16A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A038u;
    // 0x16a03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AAC8u, 0x16A038u, 0x16A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A040u;
label_16a040:
    // 0x16a040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a048: 0xc05aa80  jal         func_16AA00
    ctx->pc = 0x16A048u;
    SET_GPR_U32(ctx, 31, 0x16A050u);
    ctx->pc = 0x16A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A048u;
    // 0x16a04c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AA00u, 0x16A048u, 0x16A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A050u;
label_16a050:
    // 0x16a050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A05Cu;
        // 0x16a060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A064u;
    // 0x16a064: 0x0  nop
    ctx->pc = 0x16a064u;
    // NOP
    ctx->pc = 0x16a068u;
}

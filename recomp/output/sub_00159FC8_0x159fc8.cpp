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

// Function: sub_00159FC8
// Address: 0x159fc8 - 0x15a040
void sub_00159FC8_0x159fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159FC8_0x159fc8");
#endif

    switch (ctx->pc) {
        case 0x159fe8u: goto label_159fe8;
        case 0x15a000u: goto label_15a000;
        case 0x15a00cu: goto label_15a00c;
        case 0x15a01cu: goto label_15a01c;
        case 0x15a02cu: goto label_15a02c;
        default: break;
    }

    ctx->pc = 0x159fc8u;

    // 0x159fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd8: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x159fd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x159fdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159fe0: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x159FE0u;
    SET_GPR_U32(ctx, 31, 0x159FE8u);
    ctx->pc = 0x159FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FE0u;
    // 0x159fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x159FE0u, 0x159FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FE8u;
label_159fe8:
    // 0x159fe8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x159fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159fec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x159fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x159ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ff4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x159ff8: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x159FF8u;
    SET_GPR_U32(ctx, 31, 0x15A000u);
    ctx->pc = 0x159FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FF8u;
    // 0x159ffc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x159FF8u, 0x15A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A000u;
label_15a000:
    // 0x15a000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a004: 0xc04f12a  jal         func_13C4A8
    ctx->pc = 0x15A004u;
    SET_GPR_U32(ctx, 31, 0x15A00Cu);
    ctx->pc = 0x15A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A004u;
    // 0x15a008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4A8u, 0x15A004u, 0x15A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A00Cu;
label_15a00c:
    // 0x15a00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a014: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x15A014u;
    SET_GPR_U32(ctx, 31, 0x15A01Cu);
    ctx->pc = 0x15A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A014u;
    // 0x15a018: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x15A014u, 0x15A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A01Cu;
label_15a01c:
    // 0x15a01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a024: 0xc04f118  jal         func_13C460
    ctx->pc = 0x15A024u;
    SET_GPR_U32(ctx, 31, 0x15A02Cu);
    ctx->pc = 0x15A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A024u;
    // 0x15a028: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x15A024u, 0x15A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A02Cu;
label_15a02c:
    // 0x15a02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a038: 0x3e00008  jr          $ra
    ctx->pc = 0x15A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A038u;
        // 0x15a03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A040u;
}

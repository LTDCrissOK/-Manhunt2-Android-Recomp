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

// Function: sub_0016FFD8
// Address: 0x16ffd8 - 0x170040
void sub_0016FFD8_0x16ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FFD8_0x16ffd8");
#endif

    switch (ctx->pc) {
        case 0x16ffecu: goto label_16ffec;
        case 0x16fff4u: goto label_16fff4;
        case 0x16fffcu: goto label_16fffc;
        case 0x170010u: goto label_170010;
        case 0x17001cu: goto label_17001c;
        case 0x17002cu: goto label_17002c;
        default: break;
    }

    ctx->pc = 0x16ffd8u;

    // 0x16ffd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ffdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ffe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ffe4: 0xc05c18e  jal         func_170638
    ctx->pc = 0x16FFE4u;
    SET_GPR_U32(ctx, 31, 0x16FFECu);
    ctx->pc = 0x16FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFE4u;
    // 0x16ffe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170638u, 0x16FFE4u, 0x16FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFECu;
label_16ffec:
    // 0x16ffec: 0xc05c21e  jal         func_170878
    ctx->pc = 0x16FFECu;
    SET_GPR_U32(ctx, 31, 0x16FFF4u);
    ctx->pc = 0x16FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFECu;
    // 0x16fff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170878u, 0x16FFECu, 0x16FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFF4u;
label_16fff4:
    // 0x16fff4: 0xc05c28e  jal         func_170A38
    ctx->pc = 0x16FFF4u;
    SET_GPR_U32(ctx, 31, 0x16FFFCu);
    ctx->pc = 0x16FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFF4u;
    // 0x16fff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170A38u, 0x16FFF4u, 0x16FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFFCu;
label_16fffc:
    // 0x16fffc: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x16fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x170000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170000u;
    {
        const bool branch_taken_0x170000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170000) {
            ctx->pc = 0x170014u;
            goto label_170014;
        }
    }
    ctx->pc = 0x170008u;
    // 0x170008: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x170008u;
    SET_GPR_U32(ctx, 31, 0x170010u);
    ctx->pc = 0x17000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170008u;
    // 0x17000c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170A70u, 0x170008u, 0x170010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170010u;
label_170010:
    // 0x170010: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x170010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
label_170014:
    // 0x170014: 0xc05d362  jal         func_174D88
    ctx->pc = 0x170014u;
    SET_GPR_U32(ctx, 31, 0x17001Cu);
    ctx->pc = 0x170018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170014u;
    // 0x170018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174D88u, 0x170014u, 0x17001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17001Cu;
label_17001c:
    // 0x17001c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17001Cu;
    {
        const bool branch_taken_0x17001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17001c) {
            ctx->pc = 0x170020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17001Cu;
            // 0x170020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170030u;
            goto label_170030;
        }
    }
    ctx->pc = 0x170024u;
    // 0x170024: 0xc05d10c  jal         func_174430
    ctx->pc = 0x170024u;
    SET_GPR_U32(ctx, 31, 0x17002Cu);
    ctx->pc = 0x170028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170024u;
    // 0x170028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174430u, 0x170024u, 0x17002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17002Cu;
label_17002c:
    // 0x17002c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17002cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170030:
    // 0x170030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170034: 0x3e00008  jr          $ra
    ctx->pc = 0x170034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170034u;
        // 0x170038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17003Cu;
    // 0x17003c: 0x0  nop
    ctx->pc = 0x17003cu;
    // NOP
    ctx->pc = 0x170040u;
}

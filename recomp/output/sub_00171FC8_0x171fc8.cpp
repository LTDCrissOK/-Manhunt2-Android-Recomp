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

// Function: sub_00171FC8
// Address: 0x171fc8 - 0x172010
void sub_00171FC8_0x171fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171FC8_0x171fc8");
#endif

    switch (ctx->pc) {
        case 0x171fdcu: goto label_171fdc;
        case 0x171fecu: goto label_171fec;
        case 0x171ff4u: goto label_171ff4;
        case 0x171ffcu: goto label_171ffc;
        default: break;
    }

    ctx->pc = 0x171fc8u;

    // 0x171fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171fd4: 0xc05ce38  jal         func_1738E0
    ctx->pc = 0x171FD4u;
    SET_GPR_U32(ctx, 31, 0x171FDCu);
    ctx->pc = 0x171FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FD4u;
    // 0x171fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1738E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1738E0u, 0x171FD4u, 0x171FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FDCu;
label_171fdc:
    // 0x171fdc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x171fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x171fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fe4: 0xc05d2ee  jal         func_174BB8
    ctx->pc = 0x171FE4u;
    SET_GPR_U32(ctx, 31, 0x171FECu);
    ctx->pc = 0x171FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FE4u;
    // 0x171fe8: 0xa20200c8  sb          $v0, 0xC8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BB8u, 0x171FE4u, 0x171FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FECu;
label_171fec:
    // 0x171fec: 0xc05d304  jal         func_174C10
    ctx->pc = 0x171FECu;
    SET_GPR_U32(ctx, 31, 0x171FF4u);
    ctx->pc = 0x171FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FECu;
    // 0x171ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C10u, 0x171FECu, 0x171FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FF4u;
label_171ff4:
    // 0x171ff4: 0xc05d31a  jal         func_174C68
    ctx->pc = 0x171FF4u;
    SET_GPR_U32(ctx, 31, 0x171FFCu);
    ctx->pc = 0x171FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FF4u;
    // 0x171ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C68u, 0x171FF4u, 0x171FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FFCu;
label_171ffc:
    // 0x171ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172000: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172004: 0x3e00008  jr          $ra
    ctx->pc = 0x172004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172004u;
        // 0x172008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17200Cu;
    // 0x17200c: 0x0  nop
    ctx->pc = 0x17200cu;
    // NOP
    ctx->pc = 0x172010u;
}

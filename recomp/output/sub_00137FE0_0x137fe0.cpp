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

// Function: sub_00137FE0
// Address: 0x137fe0 - 0x138040
void sub_00137FE0_0x137fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137FE0_0x137fe0");
#endif

    switch (ctx->pc) {
        case 0x138000u: goto label_138000;
        case 0x138014u: goto label_138014;
        case 0x13802cu: goto label_13802c;
        default: break;
    }

    ctx->pc = 0x137fe0u;

    // 0x137fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137fec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x137fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137ff4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x137ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ff8: 0xc043a74  jal         func_10E9D0
    ctx->pc = 0x137FF8u;
    SET_GPR_U32(ctx, 31, 0x138000u);
    ctx->pc = 0x137FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FF8u;
    // 0x137ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9D0u, 0x137FF8u, 0x138000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138000u;
label_138000:
    // 0x138000: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x138000u;
    {
        const bool branch_taken_0x138000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138000u;
        // 0x138004: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138000) {
            ctx->pc = 0x13802Cu;
            goto label_13802c;
        }
    }
    ctx->pc = 0x138008u;
    // 0x138008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13800c: 0xc047866  jal         func_11E198
    ctx->pc = 0x13800Cu;
    SET_GPR_U32(ctx, 31, 0x138014u);
    ctx->pc = 0x138010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13800Cu;
    // 0x138010: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x13800Cu, 0x138014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138014u;
label_138014:
    // 0x138014: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x138018: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x138018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13801c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x138020: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x138020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138024: 0xc04668a  jal         func_119A28
    ctx->pc = 0x138024u;
    SET_GPR_U32(ctx, 31, 0x13802Cu);
    ctx->pc = 0x138028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138024u;
    // 0x138028: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x138024u, 0x13802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13802Cu;
label_13802c:
    // 0x13802c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13802cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x138030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138038: 0x3e00008  jr          $ra
    ctx->pc = 0x138038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138038u;
        // 0x13803c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138040u;
}

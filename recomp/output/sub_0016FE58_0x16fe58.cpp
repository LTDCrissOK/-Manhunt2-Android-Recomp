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

// Function: sub_0016FE58
// Address: 0x16fe58 - 0x16fed0
void sub_0016FE58_0x16fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FE58_0x16fe58");
#endif

    switch (ctx->pc) {
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe84u: goto label_16fe84;
        case 0x16fe94u: goto label_16fe94;
        case 0x16fe9cu: goto label_16fe9c;
        case 0x16fea4u: goto label_16fea4;
        case 0x16feb4u: goto label_16feb4;
        default: break;
    }

    ctx->pc = 0x16fe58u;

    // 0x16fe58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fe5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fe60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fe60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fe68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fe6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16fe6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16fe74: 0xc05c14e  jal         func_170538
    ctx->pc = 0x16FE74u;
    SET_GPR_U32(ctx, 31, 0x16FE7Cu);
    ctx->pc = 0x16FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE74u;
    // 0x16fe78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170538u, 0x16FE74u, 0x16FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE7Cu;
label_16fe7c:
    // 0x16fe7c: 0xc04f8a2  jal         func_13E288
    ctx->pc = 0x16FE7Cu;
    SET_GPR_U32(ctx, 31, 0x16FE84u);
    ctx->pc = 0x16FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE7Cu;
    // 0x16fe80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E288u, 0x16FE7Cu, 0x16FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE84u;
label_16fe84:
    // 0x16fe84: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x16fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x16fe88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe8c: 0xc05cd64  jal         func_173590
    ctx->pc = 0x16FE8Cu;
    SET_GPR_U32(ctx, 31, 0x16FE94u);
    ctx->pc = 0x16FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE8Cu;
    // 0x16fe90: 0xae120058  sw          $s2, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173590u, 0x16FE8Cu, 0x16FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE94u;
label_16fe94:
    // 0x16fe94: 0xc05cca4  jal         func_173290
    ctx->pc = 0x16FE94u;
    SET_GPR_U32(ctx, 31, 0x16FE9Cu);
    ctx->pc = 0x16FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE94u;
    // 0x16fe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173290u, 0x16FE94u, 0x16FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE9Cu;
label_16fe9c:
    // 0x16fe9c: 0xc05ccf4  jal         func_1733D0
    ctx->pc = 0x16FE9Cu;
    SET_GPR_U32(ctx, 31, 0x16FEA4u);
    ctx->pc = 0x16FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE9Cu;
    // 0x16fea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1733D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733D0u, 0x16FE9Cu, 0x16FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEA4u;
label_16fea4:
    // 0x16fea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16feac: 0xc04f8c0  jal         func_13E300
    ctx->pc = 0x16FEACu;
    SET_GPR_U32(ctx, 31, 0x16FEB4u);
    ctx->pc = 0x16FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEACu;
    // 0x16feb0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E300u, 0x16FEACu, 0x16FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEB4u;
label_16feb4:
    // 0x16feb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16feb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16feb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16feb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16febc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16febcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fec0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16fec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fec4: 0x3e00008  jr          $ra
    ctx->pc = 0x16FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEC4u;
        // 0x16fec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FECCu;
    // 0x16fecc: 0x0  nop
    ctx->pc = 0x16feccu;
    // NOP
    ctx->pc = 0x16fed0u;
}

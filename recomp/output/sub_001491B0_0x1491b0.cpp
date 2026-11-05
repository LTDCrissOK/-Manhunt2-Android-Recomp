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

// Function: sub_001491B0
// Address: 0x1491b0 - 0x149230
void sub_001491B0_0x1491b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001491B0_0x1491b0");
#endif

    switch (ctx->pc) {
        case 0x1491e8u: goto label_1491e8;
        case 0x1491f4u: goto label_1491f4;
        case 0x149208u: goto label_149208;
        case 0x149218u: goto label_149218;
        default: break;
    }

    ctx->pc = 0x1491b0u;

    // 0x1491b0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1491b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1491b4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1491b8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1491b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1491bc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1491bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1491c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1491c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1491c4: 0x248404f4  addiu       $a0, $a0, 0x4F4
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1268));
    // 0x1491c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1491c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1491cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1491ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1491d0: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1491d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1491d4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1491d8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1491D8u;
    {
        const bool branch_taken_0x1491d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491D8u;
        // 0x1491dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491d8) {
            ctx->pc = 0x14921Cu;
            goto label_14921c;
        }
    }
    ctx->pc = 0x1491E0u;
    // 0x1491e0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1491E0u;
    SET_GPR_U32(ctx, 31, 0x1491E8u);
    ctx->pc = 0x1491E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491E0u;
    // 0x1491e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1491E0u, 0x1491E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491E8u;
label_1491e8:
    // 0x1491e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1491e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491ec: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1491ECu;
    SET_GPR_U32(ctx, 31, 0x1491F4u);
    ctx->pc = 0x1491F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491ECu;
    // 0x1491f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1491ECu, 0x1491F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491F4u;
label_1491f4:
    // 0x1491f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1491F4u;
    {
        const bool branch_taken_0x1491f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491F4u;
        // 0x1491f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491f4) {
            ctx->pc = 0x149210u;
            goto label_149210;
        }
    }
    ctx->pc = 0x1491FCu;
    // 0x1491fc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1491fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x149200: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x149200u;
    SET_GPR_U32(ctx, 31, 0x149208u);
    ctx->pc = 0x149204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149200u;
    // 0x149204: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x149200u, 0x149208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149208u;
label_149208:
    // 0x149208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149208u;
    {
        const bool branch_taken_0x149208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149208u;
        // 0x14920c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149208) {
            ctx->pc = 0x14921Cu;
            goto label_14921c;
        }
    }
    ctx->pc = 0x149210u;
label_149210:
    // 0x149210: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x149210u;
    SET_GPR_U32(ctx, 31, 0x149218u);
    ctx->pc = 0x149214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149210u;
    // 0x149214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x149210u, 0x149218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149218u;
label_149218:
    // 0x149218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14921c:
    // 0x14921c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14921cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149220: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x149220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149228: 0x3e00008  jr          $ra
    ctx->pc = 0x149228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149228u;
        // 0x14922c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149230u;
}

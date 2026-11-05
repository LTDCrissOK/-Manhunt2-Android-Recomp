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

// Function: sub_0011B798
// Address: 0x11b798 - 0x11b838
void sub_0011B798_0x11b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B798_0x11b798");
#endif

    switch (ctx->pc) {
        case 0x11b814u: goto label_11b814;
        default: break;
    }

    ctx->pc = 0x11b798u;

    // 0x11b798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b7a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11b7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7a4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11B7A4u;
    {
        const bool branch_taken_0x11b7a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7A4u;
        // 0x11b7a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7a4) {
            ctx->pc = 0x11B828u;
            goto label_11b828;
        }
    }
    ctx->pc = 0x11B7ACu;
    // 0x11b7ac: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x11b7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x11b7b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B7B0u;
    {
        const bool branch_taken_0x11b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7B0u;
        // 0x11b7b4: 0x28a20016  slti        $v0, $a1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7b0) {
            ctx->pc = 0x11B7D0u;
            goto label_11b7d0;
        }
    }
    ctx->pc = 0x11B7B8u;
    // 0x11b7b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B7B8u;
    {
        const bool branch_taken_0x11b7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7B8u;
        // 0x11b7bc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7b8) {
            ctx->pc = 0x11B7DCu;
            goto label_11b7dc;
        }
    }
    ctx->pc = 0x11B7C0u;
    // 0x11b7c0: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B7C0u;
    {
        const bool branch_taken_0x11b7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b7c0) {
            ctx->pc = 0x11B7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B7C0u;
            // 0x11b7c4: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B7E0u;
            goto label_11b7e0;
        }
    }
    ctx->pc = 0x11B7C8u;
    // 0x11b7c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11B7C8u;
    {
        const bool branch_taken_0x11b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7C8u;
        // 0x11b7cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c8) {
            ctx->pc = 0x11B82Cu;
            goto label_11b82c;
        }
    }
    ctx->pc = 0x11B7D0u;
label_11b7d0:
    // 0x11b7d0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x11b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11b7d4: 0x54a20015  bnel        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11B7D4u;
    {
        const bool branch_taken_0x11b7d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11b7d4) {
            ctx->pc = 0x11B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B7D4u;
            // 0x11b7d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B82Cu;
            goto label_11b82c;
        }
    }
    ctx->pc = 0x11B7DCu;
label_11b7dc:
    // 0x11b7dc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_11b7e0:
    // 0x11b7e0: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x11b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x11b7e4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x11b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x11b7e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11B7E8u;
    {
        const bool branch_taken_0x11b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7E8u;
        // 0x11b7ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7e8) {
            ctx->pc = 0x11B828u;
            goto label_11b828;
        }
    }
    ctx->pc = 0x11B7F0u;
    // 0x11b7f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11b7f4: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x11b7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11b7f8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x11b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11b7fc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11b800: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B800u;
    {
        const bool branch_taken_0x11b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B800u;
        // 0x11b804: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b800) {
            ctx->pc = 0x11B828u;
            goto label_11b828;
        }
    }
    ctx->pc = 0x11B808u;
    // 0x11b808: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b80c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x11B80Cu;
    SET_GPR_U32(ctx, 31, 0x11B814u);
    ctx->pc = 0x11B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B80Cu;
    // 0x11b810: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x11B80Cu, 0x11B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B814u;
label_11b814:
    // 0x11b814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11b814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b818: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x11b81c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11b81cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11b820: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11B820u;
    {
        const bool branch_taken_0x11b820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b820) {
            ctx->pc = 0x11B824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B820u;
            // 0x11b824: 0xae030188  sw          $v1, 0x188($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B828u;
            goto label_11b828;
        }
    }
    ctx->pc = 0x11B828u;
label_11b828:
    // 0x11b828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b82c:
    // 0x11b82c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b830: 0x3e00008  jr          $ra
    ctx->pc = 0x11B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B830u;
        // 0x11b834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B838u;
}

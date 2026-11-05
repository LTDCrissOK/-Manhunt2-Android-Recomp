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

// Function: sub_0010C198
// Address: 0x10c198 - 0x10c238
void sub_0010C198_0x10c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C198_0x10c198");
#endif

    switch (ctx->pc) {
        case 0x10c1b4u: goto label_10c1b4;
        default: break;
    }

    ctx->pc = 0x10c198u;

    // 0x10c198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c1ac: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10C1ACu;
    SET_GPR_U32(ctx, 31, 0x10C1B4u);
    ctx->pc = 0x10C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1ACu;
    // 0x10c1b0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10C1ACu, 0x10C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1B4u;
label_10c1b4:
    // 0x10c1b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c1b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10c1bc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C1BCu;
    {
        const bool branch_taken_0x10c1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1BCu;
        // 0x10c1c0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1bc) {
            ctx->pc = 0x10C1F8u;
            goto label_10c1f8;
        }
    }
    ctx->pc = 0x10C1C4u;
    // 0x10c1c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10c1c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10c1cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c1d0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C1D0u;
    {
        const bool branch_taken_0x10c1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c1d0) {
            ctx->pc = 0x10C1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C1D0u;
            // 0x10c1d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C220u;
            goto label_10c220;
        }
    }
    ctx->pc = 0x10C1D8u;
    // 0x10c1d8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c1dc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10c1e0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10c1e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10c1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c1ec: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x10c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10c1f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C1F0u;
    {
        const bool branch_taken_0x10c1f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c1f0) {
            ctx->pc = 0x10C200u;
            goto label_10c200;
        }
    }
    ctx->pc = 0x10C1F8u;
label_10c1f8:
    // 0x10c1f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10C1F8u;
    {
        const bool branch_taken_0x10c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1F8u;
        // 0x10c1fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1f8) {
            ctx->pc = 0x10C220u;
            goto label_10c220;
        }
    }
    ctx->pc = 0x10C200u;
label_10c200:
    // 0x10c200: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C200u;
    {
        const bool branch_taken_0x10c200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C200u;
        // 0x10c204: 0x8c820370  lw          $v0, 0x370($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c200) {
            ctx->pc = 0x10C210u;
            goto label_10c210;
        }
    }
    ctx->pc = 0x10C208u;
    // 0x10c208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C208u;
    {
        const bool branch_taken_0x10c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C208u;
        // 0x10c20c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c208) {
            ctx->pc = 0x10C218u;
            goto label_10c218;
        }
    }
    ctx->pc = 0x10C210u;
label_10c210:
    // 0x10c210: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x10c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x10c214: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c218:
    // 0x10c218: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x10c218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x10c21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c220:
    // 0x10c220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c22c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C22Cu;
        // 0x10c230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C234u;
    // 0x10c234: 0x0  nop
    ctx->pc = 0x10c234u;
    // NOP
    ctx->pc = 0x10c238u;
}

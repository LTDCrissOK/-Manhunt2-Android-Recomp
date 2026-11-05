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

// Function: sub_0010C0F8
// Address: 0x10c0f8 - 0x10c198
void sub_0010C0F8_0x10c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C0F8_0x10c0f8");
#endif

    switch (ctx->pc) {
        case 0x10c114u: goto label_10c114;
        default: break;
    }

    ctx->pc = 0x10c0f8u;

    // 0x10c0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c100: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c10c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10C10Cu;
    SET_GPR_U32(ctx, 31, 0x10C114u);
    ctx->pc = 0x10C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C10Cu;
    // 0x10c110: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10C10Cu, 0x10C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C114u;
label_10c114:
    // 0x10c114: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c118: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10c118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10c11c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C11Cu;
    {
        const bool branch_taken_0x10c11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C11Cu;
        // 0x10c120: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c11c) {
            ctx->pc = 0x10C158u;
            goto label_10c158;
        }
    }
    ctx->pc = 0x10C124u;
    // 0x10c124: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10c128: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10c12c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c130: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C130u;
    {
        const bool branch_taken_0x10c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c130) {
            ctx->pc = 0x10C134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C130u;
            // 0x10c134: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C180u;
            goto label_10c180;
        }
    }
    ctx->pc = 0x10C138u;
    // 0x10c138: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c13c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10c140: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10c144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10c144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10c148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c14c: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x10c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10c150: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C150u;
    {
        const bool branch_taken_0x10c150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c150) {
            ctx->pc = 0x10C160u;
            goto label_10c160;
        }
    }
    ctx->pc = 0x10C158u;
label_10c158:
    // 0x10c158: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10C158u;
    {
        const bool branch_taken_0x10c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C158u;
        // 0x10c15c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c158) {
            ctx->pc = 0x10C180u;
            goto label_10c180;
        }
    }
    ctx->pc = 0x10C160u;
label_10c160:
    // 0x10c160: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C160u;
    {
        const bool branch_taken_0x10c160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C160u;
        // 0x10c164: 0x8c820370  lw          $v0, 0x370($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c160) {
            ctx->pc = 0x10C170u;
            goto label_10c170;
        }
    }
    ctx->pc = 0x10C168u;
    // 0x10c168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C168u;
    {
        const bool branch_taken_0x10c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C168u;
        // 0x10c16c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c168) {
            ctx->pc = 0x10C178u;
            goto label_10c178;
        }
    }
    ctx->pc = 0x10C170u;
label_10c170:
    // 0x10c170: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x10c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x10c174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c178:
    // 0x10c178: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x10c178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x10c17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c180:
    // 0x10c180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c18c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C18Cu;
        // 0x10c190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C194u;
    // 0x10c194: 0x0  nop
    ctx->pc = 0x10c194u;
    // NOP
    ctx->pc = 0x10c198u;
}

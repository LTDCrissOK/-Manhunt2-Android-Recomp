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

// Function: sub_00177C10
// Address: 0x177c10 - 0x177ce8
void sub_00177C10_0x177c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177C10_0x177c10");
#endif

    switch (ctx->pc) {
        case 0x177c50u: goto label_177c50;
        case 0x177c70u: goto label_177c70;
        case 0x177c90u: goto label_177c90;
        case 0x177ca4u: goto label_177ca4;
        default: break;
    }

    ctx->pc = 0x177c10u;

    // 0x177c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177c18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x177c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x177c24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x177c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177c30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177c34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x177c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x177c38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x177c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x177c3c: 0x92020158  lbu         $v0, 0x158($s0)
    ctx->pc = 0x177c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x177c40: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x177C40u;
    {
        const bool branch_taken_0x177c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C40u;
        // 0x177c44: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c40) {
            ctx->pc = 0x177CC0u;
            goto label_177cc0;
        }
    }
    ctx->pc = 0x177C48u;
    // 0x177c48: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x177C48u;
    SET_GPR_U32(ctx, 31, 0x177C50u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x177C48u, 0x177C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C50u;
label_177c50:
    // 0x177c50: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x177c54: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x177C54u;
    {
        const bool branch_taken_0x177c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x177C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C54u;
        // 0x177c58: 0x261400dc  addiu       $s4, $s0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c54) {
            ctx->pc = 0x177CC0u;
            goto label_177cc0;
        }
    }
    ctx->pc = 0x177C5Cu;
    // 0x177c5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c60: 0x261300d8  addiu       $s3, $s0, 0xD8
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x177c64: 0x24160021  addiu       $s6, $zero, 0x21
    ctx->pc = 0x177c64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177c68: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x177c6c: 0x0  nop
    ctx->pc = 0x177c6cu;
    // NOP
label_177c70:
    // 0x177c70: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x177c74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c78: 0x1076000c  beq         $v1, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x177C78u;
    {
        const bool branch_taken_0x177c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x177C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C78u;
        // 0x177c7c: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c78) {
            ctx->pc = 0x177CACu;
            goto label_177cac;
        }
    }
    ctx->pc = 0x177C80u;
    // 0x177c80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c88: 0xc05e3f6  jal         func_178FD8
    ctx->pc = 0x177C88u;
    SET_GPR_U32(ctx, 31, 0x177C90u);
    ctx->pc = 0x177C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C88u;
    // 0x177c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178FD8u, 0x177C88u, 0x177C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C90u;
label_177c90:
    // 0x177c90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177C90u;
    {
        const bool branch_taken_0x177c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C90u;
        // 0x177c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c90) {
            ctx->pc = 0x177CACu;
            goto label_177cac;
        }
    }
    ctx->pc = 0x177C98u;
    // 0x177c98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c9c: 0xc05e404  jal         func_179010
    ctx->pc = 0x177C9Cu;
    SET_GPR_U32(ctx, 31, 0x177CA4u);
    ctx->pc = 0x177CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C9Cu;
    // 0x177ca0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179010u, 0x177C9Cu, 0x177CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CA4u;
label_177ca4:
    // 0x177ca4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177CA4u;
    {
        const bool branch_taken_0x177ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CA4u;
        // 0x177ca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ca4) {
            ctx->pc = 0x177CC4u;
            goto label_177cc4;
        }
    }
    ctx->pc = 0x177CACu;
label_177cac:
    // 0x177cac: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x177cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177cb0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x177cb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177cb4: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x177cb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177cb8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x177CB8u;
    {
        const bool branch_taken_0x177cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CB8u;
        // 0x177cbc: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cb8) {
            ctx->pc = 0x177C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177c70;
        }
    }
    ctx->pc = 0x177CC0u;
label_177cc0:
    // 0x177cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177cc4:
    // 0x177cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ccc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177cd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x177cd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177cd4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x177cd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cd8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x177cd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177cdc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x177cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x177ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x177CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CE0u;
        // 0x177ce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177CE8u;
}

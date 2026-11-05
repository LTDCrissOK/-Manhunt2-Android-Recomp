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

// Function: sub_00134C30
// Address: 0x134c30 - 0x134d20
void sub_00134C30_0x134c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134C30_0x134c30");
#endif

    switch (ctx->pc) {
        case 0x134c78u: goto label_134c78;
        case 0x134c84u: goto label_134c84;
        case 0x134c94u: goto label_134c94;
        case 0x134cacu: goto label_134cac;
        case 0x134cd0u: goto label_134cd0;
        default: break;
    }

    ctx->pc = 0x134c30u;

    // 0x134c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x134c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x134c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x134c38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x134c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x134c3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x134c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x134c44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x134c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134c4c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x134c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134c54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x134c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x134c58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134c5c: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x134C5Cu;
    {
        const bool branch_taken_0x134c5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C5Cu;
        // 0x134c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c5c) {
            ctx->pc = 0x134CF8u;
            goto label_134cf8;
        }
    }
    ctx->pc = 0x134C64u;
    // 0x134c64: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134c68: 0x12a2000c  beq         $s5, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x134C68u;
    {
        const bool branch_taken_0x134c68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x134C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C68u;
        // 0x134c6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c68) {
            ctx->pc = 0x134C9Cu;
            goto label_134c9c;
        }
    }
    ctx->pc = 0x134C70u;
    // 0x134c70: 0xc04d396  jal         func_134E58
    ctx->pc = 0x134C70u;
    SET_GPR_U32(ctx, 31, 0x134C78u);
    ctx->pc = 0x134C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C70u;
    // 0x134c74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E58u, 0x134C70u, 0x134C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C78u;
label_134c78:
    // 0x134c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c7c: 0xc04d3aa  jal         func_134EA8
    ctx->pc = 0x134C7Cu;
    SET_GPR_U32(ctx, 31, 0x134C84u);
    ctx->pc = 0x134C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C7Cu;
    // 0x134c80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134EA8u, 0x134C7Cu, 0x134C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C84u;
label_134c84:
    // 0x134c84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134C84u;
    {
        const bool branch_taken_0x134c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C84u;
        // 0x134c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c84) {
            ctx->pc = 0x134C9Cu;
            goto label_134c9c;
        }
    }
    ctx->pc = 0x134C8Cu;
    // 0x134c8c: 0xc04d44a  jal         func_135128
    ctx->pc = 0x134C8Cu;
    SET_GPR_U32(ctx, 31, 0x134C94u);
    ctx->pc = 0x134C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C8Cu;
    // 0x134c90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135128u, 0x134C8Cu, 0x134C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C94u;
label_134c94:
    // 0x134c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134C94u;
    {
        const bool branch_taken_0x134c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c94) {
            ctx->pc = 0x134CA4u;
            goto label_134ca4;
        }
    }
    ctx->pc = 0x134C9Cu;
label_134c9c:
    // 0x134c9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x134C9Cu;
    {
        const bool branch_taken_0x134c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C9Cu;
        // 0x134ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c9c) {
            ctx->pc = 0x134CF8u;
            goto label_134cf8;
        }
    }
    ctx->pc = 0x134CA4u;
label_134ca4:
    // 0x134ca4: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x134CA4u;
    SET_GPR_U32(ctx, 31, 0x134CACu);
    ctx->pc = 0x134CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CA4u;
    // 0x134ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F10u, 0x134CA4u, 0x134CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CACu;
label_134cac:
    // 0x134cac: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x134cacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x134cb0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x134cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x134cb4: 0x24548ed0  addiu       $s4, $v0, -0x7130
    ctx->pc = 0x134cb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x134cb8: 0x2148821  addu        $s1, $s0, $s4
    ctx->pc = 0x134cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x134cbc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x134cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134cc0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x134CC0u;
    {
        const bool branch_taken_0x134cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cc0) {
            ctx->pc = 0x134CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134CC0u;
            // 0x134cc4: 0xae330000  sw          $s3, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134CD4u;
            goto label_134cd4;
        }
    }
    ctx->pc = 0x134CC8u;
    // 0x134cc8: 0xc04d36a  jal         func_134DA8
    ctx->pc = 0x134CC8u;
    SET_GPR_U32(ctx, 31, 0x134CD0u);
    ctx->pc = 0x134CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CC8u;
    // 0x134ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DA8u, 0x134CC8u, 0x134CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CD0u;
label_134cd0:
    // 0x134cd0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x134cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_134cd4:
    // 0x134cd4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x134cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x134cd8: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x134cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x134cdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x134cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x134ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ce4: 0x8c65a9d4  lw          $a1, -0x562C($v1)
    ctx->pc = 0x134ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x134ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134cec: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x134cecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x134cf0: 0xa6230008  sh          $v1, 0x8($s1)
    ctx->pc = 0x134cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x134cf4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x134cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_134cf8:
    // 0x134cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x134d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134d04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x134d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134d08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x134d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134d0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x134d0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134d14: 0x3e00008  jr          $ra
    ctx->pc = 0x134D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D14u;
        // 0x134d18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134D1Cu;
    // 0x134d1c: 0x0  nop
    ctx->pc = 0x134d1cu;
    // NOP
    ctx->pc = 0x134d20u;
}

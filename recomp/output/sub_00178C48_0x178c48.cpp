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

// Function: sub_00178C48
// Address: 0x178c48 - 0x178d28
void sub_00178C48_0x178c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C48_0x178c48");
#endif

    switch (ctx->pc) {
        case 0x178c68u: goto label_178c68;
        case 0x178ca4u: goto label_178ca4;
        case 0x178cc4u: goto label_178cc4;
        case 0x178ce8u: goto label_178ce8;
        case 0x178cf4u: goto label_178cf4;
        case 0x178d00u: goto label_178d00;
        default: break;
    }

    ctx->pc = 0x178c48u;

    // 0x178c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178c50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178c5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x178c60: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x178C60u;
    SET_GPR_U32(ctx, 31, 0x178C68u);
    ctx->pc = 0x178C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C60u;
    // 0x178c64: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x178C60u, 0x178C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C68u;
label_178c68:
    // 0x178c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x178c70: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x178C70u;
    {
        const bool branch_taken_0x178c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x178C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C70u;
        // 0x178c74: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c70) {
            ctx->pc = 0x178D0Cu;
            goto label_178d0c;
        }
    }
    ctx->pc = 0x178C78u;
    // 0x178c78: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x178c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x178c7c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x178c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x178c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178c84: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x178c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x178c88: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x178C88u;
    {
        const bool branch_taken_0x178c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C88u;
        // 0x178c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c88) {
            ctx->pc = 0x178D0Cu;
            goto label_178d0c;
        }
    }
    ctx->pc = 0x178C90u;
    // 0x178c90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x178c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x178c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c9c: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x178C9Cu;
    SET_GPR_U32(ctx, 31, 0x178CA4u);
    ctx->pc = 0x178CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C9Cu;
    // 0x178ca0: 0xe460022c  swc1        $f0, 0x22C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 556), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x178C9Cu, 0x178CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CA4u;
label_178ca4:
    // 0x178ca4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ca8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178CA8u;
    {
        const bool branch_taken_0x178ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CA8u;
        // 0x178cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ca8) {
            ctx->pc = 0x178CB8u;
            goto label_178cb8;
        }
    }
    ctx->pc = 0x178CB0u;
    // 0x178cb0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178CB0u;
    {
        const bool branch_taken_0x178cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178cb0) {
            ctx->pc = 0x178CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178CB0u;
            // 0x178cb4: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178CC8u;
            goto label_178cc8;
        }
    }
    ctx->pc = 0x178CB8u;
label_178cb8:
    // 0x178cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cbc: 0xc05ee0e  jal         func_17B838
    ctx->pc = 0x178CBCu;
    SET_GPR_U32(ctx, 31, 0x178CC4u);
    ctx->pc = 0x178CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CBCu;
    // 0x178cc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B838u, 0x178CBCu, 0x178CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CC4u;
label_178cc4:
    // 0x178cc4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_178cc8:
    // 0x178cc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178CC8u;
    {
        const bool branch_taken_0x178cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CC8u;
        // 0x178ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cc8) {
            ctx->pc = 0x178CDCu;
            goto label_178cdc;
        }
    }
    ctx->pc = 0x178CD0u;
    // 0x178cd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x178cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x178cd4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178CD4u;
    {
        const bool branch_taken_0x178cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178cd4) {
            ctx->pc = 0x178CE0u;
            goto label_178ce0;
        }
    }
    ctx->pc = 0x178CDCu;
label_178cdc:
    // 0x178cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178ce0:
    // 0x178ce0: 0xc05ef2e  jal         func_17BCB8
    ctx->pc = 0x178CE0u;
    SET_GPR_U32(ctx, 31, 0x178CE8u);
    ctx->pc = 0x178CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CE0u;
    // 0x178ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCB8u, 0x178CE0u, 0x178CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CE8u;
label_178ce8:
    // 0x178ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cec: 0xc04f74a  jal         func_13DD28
    ctx->pc = 0x178CECu;
    SET_GPR_U32(ctx, 31, 0x178CF4u);
    ctx->pc = 0x178CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CECu;
    // 0x178cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x178CECu, 0x178CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CF4u;
label_178cf4:
    // 0x178cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cf8: 0xc05ead6  jal         func_17AB58
    ctx->pc = 0x178CF8u;
    SET_GPR_U32(ctx, 31, 0x178D00u);
    ctx->pc = 0x178CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CF8u;
    // 0x178cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB58u, 0x178CF8u, 0x178D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D00u;
label_178d00:
    // 0x178d00: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x178d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x178d04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178d08: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x178d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_178d0c:
    // 0x178d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178d14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178d18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x178D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D1Cu;
        // 0x178d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D24u;
    // 0x178d24: 0x0  nop
    ctx->pc = 0x178d24u;
    // NOP
    ctx->pc = 0x178d28u;
}

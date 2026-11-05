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

// Function: sub_0015BDA8
// Address: 0x15bda8 - 0x15be48
void sub_0015BDA8_0x15bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BDA8_0x15bda8");
#endif

    switch (ctx->pc) {
        case 0x15bdf0u: goto label_15bdf0;
        case 0x15bdfcu: goto label_15bdfc;
        case 0x15be0cu: goto label_15be0c;
        case 0x15be18u: goto label_15be18;
        case 0x15be2cu: goto label_15be2c;
        default: break;
    }

    ctx->pc = 0x15bda8u;

    // 0x15bda8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bdac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15bdb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15bdb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15bdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15bdbc: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15bdbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15bdc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15bdc4: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15bdc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x15bdc8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x15bdc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15bdcc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15BDCCu;
    {
        const bool branch_taken_0x15bdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDCCu;
        // 0x15bdd0: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdcc) {
            ctx->pc = 0x15BE2Cu;
            goto label_15be2c;
        }
    }
    ctx->pc = 0x15BDD4u;
    // 0x15bdd4: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x15bdd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15bdd8: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x15bdd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15bddc: 0x8e430388  lw          $v1, 0x388($s2)
    ctx->pc = 0x15bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x15bde0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15BDE0u;
    {
        const bool branch_taken_0x15bde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDE0u;
        // 0x15bde4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bde0) {
            ctx->pc = 0x15BE30u;
            goto label_15be30;
        }
    }
    ctx->pc = 0x15BDE8u;
    // 0x15bde8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15BDE8u;
    SET_GPR_U32(ctx, 31, 0x15BDF0u);
    ctx->pc = 0x15BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BDE8u;
    // 0x15bdec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15BDE8u, 0x15BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDF0u;
label_15bdf0:
    // 0x15bdf0: 0x8e450388  lw          $a1, 0x388($s2)
    ctx->pc = 0x15bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x15bdf4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15BDF4u;
    SET_GPR_U32(ctx, 31, 0x15BDFCu);
    ctx->pc = 0x15BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BDF4u;
    // 0x15bdf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15BDF4u, 0x15BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDFCu;
label_15bdfc:
    // 0x15bdfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BDFCu;
    {
        const bool branch_taken_0x15bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdfc) {
            ctx->pc = 0x15BE20u;
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BE04u;
    // 0x15be04: 0xc056f60  jal         func_15BD80
    ctx->pc = 0x15BE04u;
    SET_GPR_U32(ctx, 31, 0x15BE0Cu);
    ctx->pc = 0x15BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE04u;
    // 0x15be08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BD80u, 0x15BE04u, 0x15BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE0Cu;
label_15be0c:
    // 0x15be0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15be0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be10: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BE10u;
    SET_GPR_U32(ctx, 31, 0x15BE18u);
    ctx->pc = 0x15BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE10u;
    // 0x15be14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BE10u, 0x15BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE18u;
label_15be18:
    // 0x15be18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15BE18u;
    {
        const bool branch_taken_0x15be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE18u;
        // 0x15be1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be18) {
            ctx->pc = 0x15BE30u;
            goto label_15be30;
        }
    }
    ctx->pc = 0x15BE20u;
label_15be20:
    // 0x15be20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be24: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BE24u;
    SET_GPR_U32(ctx, 31, 0x15BE2Cu);
    ctx->pc = 0x15BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE24u;
    // 0x15be28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BE24u, 0x15BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE2Cu;
label_15be2c:
    // 0x15be2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15be2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15be30:
    // 0x15be30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15be30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15be34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15be34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15be38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15be3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15be40: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE40u;
        // 0x15be44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BE48u;
}

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

// Function: sub_0014BDD0
// Address: 0x14bdd0 - 0x14be80
void sub_0014BDD0_0x14bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BDD0_0x14bdd0");
#endif

    switch (ctx->pc) {
        case 0x14be1cu: goto label_14be1c;
        case 0x14be2cu: goto label_14be2c;
        case 0x14be40u: goto label_14be40;
        case 0x14be64u: goto label_14be64;
        default: break;
    }

    ctx->pc = 0x14bdd0u;

    // 0x14bdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bdd4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14bdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bddc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14bde0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bde4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bde8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14bdec: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14bdecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bdf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14bdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14bdf4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14bdf8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bdfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14be00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14be04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14be08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14be08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14be0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14be10: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x14be14: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x14BE14u;
    SET_GPR_U32(ctx, 31, 0x14BE1Cu);
    ctx->pc = 0x14BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE14u;
    // 0x14be18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x14BE14u, 0x14BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE1Cu;
label_14be1c:
    // 0x14be1c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x14be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x14be20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be24: 0xc0530d8  jal         func_14C360
    ctx->pc = 0x14BE24u;
    SET_GPR_U32(ctx, 31, 0x14BE2Cu);
    ctx->pc = 0x14BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE24u;
    // 0x14be28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C360u, 0x14BE24u, 0x14BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE2Cu;
label_14be2c:
    // 0x14be2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14be2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be30: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14BE30u;
    {
        const bool branch_taken_0x14be30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE30u;
        // 0x14be34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be30) {
            ctx->pc = 0x14BE64u;
            goto label_14be64;
        }
    }
    ctx->pc = 0x14BE38u;
    // 0x14be38: 0xc044084  jal         func_110210
    ctx->pc = 0x14BE38u;
    SET_GPR_U32(ctx, 31, 0x14BE40u);
    ctx->pc = 0x14BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE38u;
    // 0x14be3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x14BE38u, 0x14BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE40u;
label_14be40:
    // 0x14be40: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14be44: 0x38a20022  xori        $v0, $a1, 0x22
    ctx->pc = 0x14be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)34);
    // 0x14be48: 0x38a30013  xori        $v1, $a1, 0x13
    ctx->pc = 0x14be48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)19);
    // 0x14be4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14be4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14be50: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x14be50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x14be54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BE54u;
    {
        const bool branch_taken_0x14be54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE54u;
        // 0x14be58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be54) {
            ctx->pc = 0x14BE68u;
            goto label_14be68;
        }
    }
    ctx->pc = 0x14BE5Cu;
    // 0x14be5c: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x14BE5Cu;
    SET_GPR_U32(ctx, 31, 0x14BE64u);
    ctx->pc = 0x14BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE5Cu;
    // 0x14be60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x14BE5Cu, 0x14BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE64u;
label_14be64:
    // 0x14be64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14be64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14be68:
    // 0x14be68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14be68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14be6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14be6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14be70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14be70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be74: 0x3e00008  jr          $ra
    ctx->pc = 0x14BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE74u;
        // 0x14be78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BE7Cu;
    // 0x14be7c: 0x0  nop
    ctx->pc = 0x14be7cu;
    // NOP
    ctx->pc = 0x14be80u;
}

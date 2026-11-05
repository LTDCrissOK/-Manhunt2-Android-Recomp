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

// Function: sub_001FCB00
// Address: 0x1fcb00 - 0x1fcc00
void sub_001FCB00_0x1fcb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCB00_0x1fcb00");
#endif

    switch (ctx->pc) {
        case 0x1fcb38u: goto label_1fcb38;
        default: break;
    }

    ctx->pc = 0x1fcb00u;

    // 0x1fcb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcb04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fcb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fcb08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fcb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fcb0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fcb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fcb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fcb14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fcb14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fcb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fcb1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fcb1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fcb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fcb24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fcb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fcb2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1fcb2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb30: 0xc07f21a  jal         func_1FC868
    ctx->pc = 0x1FCB30u;
    SET_GPR_U32(ctx, 31, 0x1FCB38u);
    ctx->pc = 0x1FCB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB30u;
    // 0x1fcb34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC868u, 0x1FCB30u, 0x1FCB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB38u;
label_1fcb38:
    // 0x1fcb38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FCB38u;
    {
        const bool branch_taken_0x1fcb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB38u;
        // 0x1fcb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb38) {
            ctx->pc = 0x1FCBDCu;
            goto label_1fcbdc;
        }
    }
    ctx->pc = 0x1FCB40u;
    // 0x1fcb40: 0x52800027  beql        $s4, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FCB40u;
    {
        const bool branch_taken_0x1fcb40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb40) {
            ctx->pc = 0x1FCB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCB40u;
            // 0x1fcb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCBE0u;
            goto label_1fcbe0;
        }
    }
    ctx->pc = 0x1FCB48u;
    // 0x1fcb48: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1fcb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fcb4c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FCB4Cu;
    {
        const bool branch_taken_0x1fcb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB4Cu;
        // 0x1fcb50: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb4c) {
            ctx->pc = 0x1FCBD8u;
            goto label_1fcbd8;
        }
    }
    ctx->pc = 0x1FCB54u;
    // 0x1fcb54: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x1fcb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1fcb58: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FCB58u;
    {
        const bool branch_taken_0x1fcb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB58u;
        // 0x1fcb5c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb58) {
            ctx->pc = 0x1FCBD8u;
            goto label_1fcbd8;
        }
    }
    ctx->pc = 0x1FCB60u;
    // 0x1fcb60: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x1fcb60u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1fcb64: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fcb68: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x1fcb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x1fcb6c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCB6Cu;
    {
        const bool branch_taken_0x1fcb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB6Cu;
        // 0x1fcb70: 0x83880a  movz        $s1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb6c) {
            ctx->pc = 0x1FCBD8u;
            goto label_1fcbd8;
        }
    }
    ctx->pc = 0x1FCB74u;
    // 0x1fcb74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fcb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fcb78: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1fcb78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fcb7c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fcb80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcb84: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1fcb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fcb88: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1fcb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcb8c: 0xac891378  sw          $t1, 0x1378($a0)
    ctx->pc = 0x1fcb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4984), GPR_U32(ctx, 9));
    // 0x1fcb90: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1fcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fcb94: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1fcb94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fcb98: 0x122027  nor         $a0, $zero, $s2
    ctx->pc = 0x1fcb98u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x1fcb9c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fcba0: 0x34079570  ori         $a3, $zero, 0x9570
    ctx->pc = 0x1fcba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38256);
    // 0x1fcba4: 0x104900a  movz        $s2, $t0, $a0
    ctx->pc = 0x1fcba4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 8));
    // 0x1fcba8: 0xacc015c0  sw          $zero, 0x15C0($a2)
    ctx->pc = 0x1fcba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5568), GPR_U32(ctx, 0));
    // 0x1fcbac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fcbb0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1fcbb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fcbb4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fcbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fcbb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1fcbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fcbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbc0: 0xac9113b0  sw          $s1, 0x13B0($a0)
    ctx->pc = 0x1fcbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5040), GPR_U32(ctx, 17));
    // 0x1fcbc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fcbc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbc8: 0xac5213b8  sw          $s2, 0x13B8($v0)
    ctx->pc = 0x1fcbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5048), GPR_U32(ctx, 18));
    // 0x1fcbcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcbd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCBD0u;
    {
        const bool branch_taken_0x1fcbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBD0u;
        // 0x1fcbd4: 0xac691380  sw          $t1, 0x1380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4992), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbd0) {
            ctx->pc = 0x1FCBDCu;
            goto label_1fcbdc;
        }
    }
    ctx->pc = 0x1FCBD8u;
label_1fcbd8:
    // 0x1fcbd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fcbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcbdc:
    // 0x1fcbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcbe0:
    // 0x1fcbe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcbe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcbe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fcbe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcbe8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fcbe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcbec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fcbecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcbf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fcbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fcbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF4u;
        // 0x1fcbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCBFCu;
    // 0x1fcbfc: 0x0  nop
    ctx->pc = 0x1fcbfcu;
    // NOP
    ctx->pc = 0x1fcc00u;
}

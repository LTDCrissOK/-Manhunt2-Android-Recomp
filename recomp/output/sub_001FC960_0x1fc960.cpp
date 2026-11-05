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

// Function: sub_001FC960
// Address: 0x1fc960 - 0x1fca68
void sub_001FC960_0x1fc960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC960_0x1fc960");
#endif

    switch (ctx->pc) {
        case 0x1fc9a0u: goto label_1fc9a0;
        default: break;
    }

    ctx->pc = 0x1fc960u;

    // 0x1fc960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fc964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc968: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc96c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fc96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc970: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fc970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fc974: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fc974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc97c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fc97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc984: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fc984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc988: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fc988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fc98c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1fc98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fc990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fc994: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1fc994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc998: 0xc07f21a  jal         func_1FC868
    ctx->pc = 0x1FC998u;
    SET_GPR_U32(ctx, 31, 0x1FC9A0u);
    ctx->pc = 0x1FC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC998u;
    // 0x1fc99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC868u, 0x1FC998u, 0x1FC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9A0u;
label_1fc9a0:
    // 0x1fc9a0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FC9A0u;
    {
        const bool branch_taken_0x1fc9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9A0u;
        // 0x1fc9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9a0) {
            ctx->pc = 0x1FCA44u;
            goto label_1fca44;
        }
    }
    ctx->pc = 0x1FC9A8u;
    // 0x1fc9a8: 0x52800027  beql        $s4, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC9A8u;
    {
        const bool branch_taken_0x1fc9a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc9a8) {
            ctx->pc = 0x1FC9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC9A8u;
            // 0x1fc9ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCA48u;
            goto label_1fca48;
        }
    }
    ctx->pc = 0x1FC9B0u;
    // 0x1fc9b0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1fc9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc9b4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FC9B4u;
    {
        const bool branch_taken_0x1fc9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9B4u;
        // 0x1fc9b8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9b4) {
            ctx->pc = 0x1FCA40u;
            goto label_1fca40;
        }
    }
    ctx->pc = 0x1FC9BCu;
    // 0x1fc9bc: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x1fc9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1fc9c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FC9C0u;
    {
        const bool branch_taken_0x1fc9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C0u;
        // 0x1fc9c4: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9c0) {
            ctx->pc = 0x1FCA40u;
            goto label_1fca40;
        }
    }
    ctx->pc = 0x1FC9C8u;
    // 0x1fc9c8: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x1fc9c8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1fc9cc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fc9d0: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x1fc9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x1fc9d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC9D4u;
    {
        const bool branch_taken_0x1fc9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9D4u;
        // 0x1fc9d8: 0x83880a  movz        $s1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9d4) {
            ctx->pc = 0x1FCA40u;
            goto label_1fca40;
        }
    }
    ctx->pc = 0x1FC9DCu;
    // 0x1fc9dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fc9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc9e0: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fc9e4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fc9e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc9ec: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1fc9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fc9f0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fc9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc9f4: 0xaca21378  sw          $v0, 0x1378($a1)
    ctx->pc = 0x1fc9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4984), GPR_U32(ctx, 2));
    // 0x1fc9f8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1fc9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fc9fc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1fc9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fca00: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x1fca00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x1fca04: 0x34079570  ori         $a3, $zero, 0x9570
    ctx->pc = 0x1fca04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38256);
    // 0x1fca08: 0x102900a  movz        $s2, $t0, $v0
    ctx->pc = 0x1fca08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 8));
    // 0x1fca0c: 0xaca015c0  sw          $zero, 0x15C0($a1)
    ctx->pc = 0x1fca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5568), GPR_U32(ctx, 0));
    // 0x1fca10: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1fca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fca14: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1fca14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fca18: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fca18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fca1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fca1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca20: 0xac5113b0  sw          $s1, 0x13B0($v0)
    ctx->pc = 0x1fca20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5040), GPR_U32(ctx, 17));
    // 0x1fca24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca28: 0xac9213b8  sw          $s2, 0x13B8($a0)
    ctx->pc = 0x1fca28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5048), GPR_U32(ctx, 18));
    // 0x1fca2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fca2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca30: 0xaca01380  sw          $zero, 0x1380($a1)
    ctx->pc = 0x1fca30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4992), GPR_U32(ctx, 0));
    // 0x1fca34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fca38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCA38u;
    {
        const bool branch_taken_0x1fca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA38u;
        // 0x1fca3c: 0xac751390  sw          $s5, 0x1390($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5008), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca38) {
            ctx->pc = 0x1FCA44u;
            goto label_1fca44;
        }
    }
    ctx->pc = 0x1FCA40u;
label_1fca40:
    // 0x1fca40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fca40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fca44:
    // 0x1fca44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fca44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fca48:
    // 0x1fca48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fca48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fca4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fca50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fca50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fca54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fca54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fca58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fca5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fca5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fca60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA60u;
        // 0x1fca64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA68u;
}

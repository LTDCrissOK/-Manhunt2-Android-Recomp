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

// Function: sub_003D8950
// Address: 0x3d8950 - 0x3d8a58
void sub_003D8950_0x3d8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8950_0x3d8950");
#endif

    switch (ctx->pc) {
        case 0x3d89b4u: goto label_3d89b4;
        case 0x3d89d8u: goto label_3d89d8;
        case 0x3d89ecu: goto label_3d89ec;
        case 0x3d8a08u: goto label_3d8a08;
        default: break;
    }

    ctx->pc = 0x3d8950u;

    // 0x3d8950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d8954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d8954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d8958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d895c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d895cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d8960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d8964: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3d8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3d8968: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3d8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3d896c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3d896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3d8970: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d8974: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3d8974u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8978: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3d8978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3d897c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d897cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d8980: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3d8980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3d8984: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d8984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d8988: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3D8988u;
    {
        const bool branch_taken_0x3d8988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8988u;
        // 0x3d898c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8988) {
            ctx->pc = 0x3D8A38u;
            goto label_3d8a38;
        }
    }
    ctx->pc = 0x3D8990u;
    // 0x3d8990: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x3d8990u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d8994: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x3d8994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3d8998: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D8998u;
    {
        const bool branch_taken_0x3d8998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8998u;
        // 0x3d899c: 0x2a883  sra         $s5, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8998) {
            ctx->pc = 0x3D89F4u;
            goto label_3d89f4;
        }
    }
    ctx->pc = 0x3D89A0u;
    // 0x3d89a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D89A0u;
    {
        const bool branch_taken_0x3d89a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89A0u;
        // 0x3d89a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89a0) {
            ctx->pc = 0x3D89BCu;
            goto label_3d89bc;
        }
    }
    ctx->pc = 0x3D89A8u;
    // 0x3d89a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d89a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d89ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D89ACu;
    SET_GPR_U32(ctx, 31, 0x3D89B4u);
    ctx->pc = 0x3D89B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D89ACu;
    // 0x3d89b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D89ACu, 0x3D89B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D89B4u;
label_3d89b4:
    // 0x3d89b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D89B4u;
    {
        const bool branch_taken_0x3d89b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89B4u;
        // 0x3d89b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89b4) {
            ctx->pc = 0x3D89C4u;
            goto label_3d89c4;
        }
    }
    ctx->pc = 0x3D89BCu;
label_3d89bc:
    // 0x3d89bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d89bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d89c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d89c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d89c4:
    // 0x3d89c4: 0x12710004  beq         $s3, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D89C4u;
    {
        const bool branch_taken_0x3d89c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x3D89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89C4u;
        // 0x3d89c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89c4) {
            ctx->pc = 0x3D89D8u;
            goto label_3d89d8;
        }
    }
    ctx->pc = 0x3D89CCu;
    // 0x3d89cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d89ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d89d0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3D89D0u;
    SET_GPR_U32(ctx, 31, 0x3D89D8u);
    ctx->pc = 0x3D89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D89D0u;
    // 0x3d89d4: 0x2653023  subu        $a2, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3D89D0u, 0x3D89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D89D8u;
label_3d89d8:
    // 0x3d89d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3d89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d89dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D89DCu;
    {
        const bool branch_taken_0x3d89dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89DCu;
        // 0x3d89e0: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89dc) {
            ctx->pc = 0x3D8A20u;
            goto label_3d8a20;
        }
    }
    ctx->pc = 0x3D89E4u;
    // 0x3d89e4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D89E4u;
    SET_GPR_U32(ctx, 31, 0x3D89ECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D89E4u, 0x3D89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D89ECu;
label_3d89ec:
    // 0x3d89ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D89ECu;
    {
        const bool branch_taken_0x3d89ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89ECu;
        // 0x3d89f0: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89ec) {
            ctx->pc = 0x3D8A20u;
            goto label_3d8a20;
        }
    }
    ctx->pc = 0x3D89F4u;
label_3d89f4:
    // 0x3d89f4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D89F4u;
    {
        const bool branch_taken_0x3d89f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89F4u;
        // 0x3d89f8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89f4) {
            ctx->pc = 0x3D8A10u;
            goto label_3d8a10;
        }
    }
    ctx->pc = 0x3D89FCu;
    // 0x3d89fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d89fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8a00: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8A00u;
    SET_GPR_U32(ctx, 31, 0x3D8A08u);
    ctx->pc = 0x3D8A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8A00u;
    // 0x3d8a04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8A00u, 0x3D8A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A08u;
label_3d8a08:
    // 0x3d8a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8A08u;
    {
        const bool branch_taken_0x3d8a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A08u;
        // 0x3d8a0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8a08) {
            ctx->pc = 0x3D8A1Cu;
            goto label_3d8a1c;
        }
    }
    ctx->pc = 0x3D8A10u;
label_3d8a10:
    // 0x3d8a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8a14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d8a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d8a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8a1c:
    // 0x3d8a1c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x3d8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3d8a20:
    // 0x3d8a20: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x3d8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3d8a24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3d8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d8a28: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3d8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3d8a2c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3d8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x3d8a30: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3d8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3d8a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8a38:
    // 0x3d8a38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d8a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8a3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d8a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8a40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3d8a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d8a44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3d8a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8a48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3d8a48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d8a4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d8a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d8a50: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A50u;
        // 0x3d8a54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8A58u;
}

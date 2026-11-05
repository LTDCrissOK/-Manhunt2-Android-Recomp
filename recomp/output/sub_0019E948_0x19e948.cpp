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

// Function: sub_0019E948
// Address: 0x19e948 - 0x19eb30
void sub_0019E948_0x19e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E948_0x19e948");
#endif

    switch (ctx->pc) {
        case 0x19e96cu: goto label_19e96c;
        case 0x19e97cu: goto label_19e97c;
        case 0x19e998u: goto label_19e998;
        case 0x19e9a8u: goto label_19e9a8;
        case 0x19e9b8u: goto label_19e9b8;
        case 0x19e9c8u: goto label_19e9c8;
        case 0x19e9d8u: goto label_19e9d8;
        case 0x19e9e8u: goto label_19e9e8;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea94u: goto label_19ea94;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19ead0u: goto label_19ead0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb10u: goto label_19eb10;
        default: break;
    }

    ctx->pc = 0x19e948u;

    // 0x19e948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e94c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e950: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19e954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e958: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x19e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19e95c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19E95Cu;
    {
        const bool branch_taken_0x19e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e95c) {
            ctx->pc = 0x19E9B0u;
            goto label_19e9b0;
        }
    }
    ctx->pc = 0x19E964u;
    // 0x19e964: 0xc064aac  jal         func_192AB0
    ctx->pc = 0x19E964u;
    SET_GPR_U32(ctx, 31, 0x19E96Cu);
    ctx->pc = 0x19E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E964u;
    // 0x19e968: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192AB0u, 0x19E964u, 0x19E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E96Cu;
label_19e96c:
    // 0x19e96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E96Cu;
    {
        const bool branch_taken_0x19e96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E96Cu;
        // 0x19e970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e96c) {
            ctx->pc = 0x19E984u;
            goto label_19e984;
        }
    }
    ctx->pc = 0x19E974u;
    // 0x19e974: 0xc067bc2  jal         func_19EF08
    ctx->pc = 0x19E974u;
    SET_GPR_U32(ctx, 31, 0x19E97Cu);
    ctx->pc = 0x19E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E974u;
    // 0x19e978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF08u, 0x19E974u, 0x19E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E97Cu;
label_19e97c:
    // 0x19e97c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x19E97Cu;
    {
        const bool branch_taken_0x19e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E97Cu;
        // 0x19e980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e97c) {
            ctx->pc = 0x19EB24u;
            goto label_19eb24;
        }
    }
    ctx->pc = 0x19E984u;
label_19e984:
    // 0x19e984: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19e988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E988u;
    {
        const bool branch_taken_0x19e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e988) {
            ctx->pc = 0x19E9B0u;
            goto label_19e9b0;
        }
    }
    ctx->pc = 0x19E990u;
    // 0x19e990: 0xc064a9c  jal         func_192A70
    ctx->pc = 0x19E990u;
    SET_GPR_U32(ctx, 31, 0x19E998u);
    ctx->pc = 0x19E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E990u;
    // 0x19e994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A70u, 0x19E990u, 0x19E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E998u;
label_19e998:
    // 0x19e998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E998u;
    {
        const bool branch_taken_0x19e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E998u;
        // 0x19e99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e998) {
            ctx->pc = 0x19E9B0u;
            goto label_19e9b0;
        }
    }
    ctx->pc = 0x19E9A0u;
    // 0x19e9a0: 0xc067bc2  jal         func_19EF08
    ctx->pc = 0x19E9A0u;
    SET_GPR_U32(ctx, 31, 0x19E9A8u);
    ctx->pc = 0x19E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9A0u;
    // 0x19e9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF08u, 0x19E9A0u, 0x19E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9A8u;
label_19e9a8:
    // 0x19e9a8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x19E9A8u;
    {
        const bool branch_taken_0x19e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9A8u;
        // 0x19e9ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9a8) {
            ctx->pc = 0x19EB24u;
            goto label_19eb24;
        }
    }
    ctx->pc = 0x19E9B0u;
label_19e9b0:
    // 0x19e9b0: 0xc064adc  jal         func_192B70
    ctx->pc = 0x19E9B0u;
    SET_GPR_U32(ctx, 31, 0x19E9B8u);
    ctx->pc = 0x19E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9B0u;
    // 0x19e9b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x19E9B0u, 0x19E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9B8u;
label_19e9b8:
    // 0x19e9b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E9B8u;
    {
        const bool branch_taken_0x19e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9b8) {
            ctx->pc = 0x19E9D0u;
            goto label_19e9d0;
        }
    }
    ctx->pc = 0x19E9C0u;
    // 0x19e9c0: 0xc067be2  jal         func_19EF88
    ctx->pc = 0x19E9C0u;
    SET_GPR_U32(ctx, 31, 0x19E9C8u);
    ctx->pc = 0x19E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9C0u;
    // 0x19e9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF88u, 0x19E9C0u, 0x19E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9C8u;
label_19e9c8:
    // 0x19e9c8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x19E9C8u;
    {
        const bool branch_taken_0x19e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C8u;
        // 0x19e9cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9c8) {
            ctx->pc = 0x19EB24u;
            goto label_19eb24;
        }
    }
    ctx->pc = 0x19E9D0u;
label_19e9d0:
    // 0x19e9d0: 0xc064a9a  jal         func_192A68
    ctx->pc = 0x19E9D0u;
    SET_GPR_U32(ctx, 31, 0x19E9D8u);
    ctx->pc = 0x19E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9D0u;
    // 0x19e9d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A68u, 0x19E9D0u, 0x19E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9D8u;
label_19e9d8:
    // 0x19e9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E9D8u;
    {
        const bool branch_taken_0x19e9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9d8) {
            ctx->pc = 0x19E9F0u;
            goto label_19e9f0;
        }
    }
    ctx->pc = 0x19E9E0u;
    // 0x19e9e0: 0xc067b7e  jal         func_19EDF8
    ctx->pc = 0x19E9E0u;
    SET_GPR_U32(ctx, 31, 0x19E9E8u);
    ctx->pc = 0x19E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9E0u;
    // 0x19e9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDF8u, 0x19E9E0u, 0x19E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9E8u;
label_19e9e8:
    // 0x19e9e8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19E9E8u;
    {
        const bool branch_taken_0x19e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9E8u;
        // 0x19e9ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9e8) {
            ctx->pc = 0x19EB24u;
            goto label_19eb24;
        }
    }
    ctx->pc = 0x19E9F0u;
label_19e9f0:
    // 0x19e9f0: 0xc061a26  jal         func_186898
    ctx->pc = 0x19E9F0u;
    SET_GPR_U32(ctx, 31, 0x19E9F8u);
    ctx->pc = 0x19E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9F0u;
    // 0x19e9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19E9F0u, 0x19E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9F8u;
label_19e9f8:
    // 0x19e9f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19e9fc: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x19e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ea00: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x19ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x19ea04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ea08: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19ea0c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19EA0Cu;
    {
        const bool branch_taken_0x19ea0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ea0c) {
            ctx->pc = 0x19EA64u;
            goto label_19ea64;
        }
    }
    ctx->pc = 0x19EA14u;
    // 0x19ea14: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x19ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x19ea18: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x19ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x19ea1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ea20: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x19ea20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x19ea24: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19EA24u;
    {
        const bool branch_taken_0x19ea24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ea24) {
            ctx->pc = 0x19EA8Cu;
            goto label_19ea8c;
        }
    }
    ctx->pc = 0x19EA2Cu;
    // 0x19ea2c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19ea2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x19ea30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ea30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ea34: 0x0  nop
    ctx->pc = 0x19ea34u;
    // NOP
    // 0x19ea38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ea38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ea3c: 0x0  nop
    ctx->pc = 0x19ea3cu;
    // NOP
    // 0x19ea40: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x19EA40u;
    {
        const bool branch_taken_0x19ea40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ea40) {
            ctx->pc = 0x19EA8Cu;
            goto label_19ea8c;
        }
    }
    ctx->pc = 0x19EA48u;
    // 0x19ea48: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x19ea4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ea4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ea50: 0x0  nop
    ctx->pc = 0x19ea50u;
    // NOP
    // 0x19ea54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19ea54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ea58: 0x0  nop
    ctx->pc = 0x19ea58u;
    // NOP
    // 0x19ea5c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x19EA5Cu;
    {
        const bool branch_taken_0x19ea5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ea5c) {
            ctx->pc = 0x19EA8Cu;
            goto label_19ea8c;
        }
    }
    ctx->pc = 0x19EA64u;
label_19ea64:
    // 0x19ea64: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19EA64u;
    SET_GPR_U32(ctx, 31, 0x19EA6Cu);
    ctx->pc = 0x19EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA64u;
    // 0x19ea68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19EA64u, 0x19EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA6Cu;
label_19ea6c:
    // 0x19ea6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ea70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ea70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea74: 0xc061a16  jal         func_186858
    ctx->pc = 0x19EA74u;
    SET_GPR_U32(ctx, 31, 0x19EA7Cu);
    ctx->pc = 0x19EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA74u;
    // 0x19ea78: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EA74u, 0x19EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA7Cu;
label_19ea7c:
    // 0x19ea7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19ea80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ea80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ea84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19EA84u;
    {
        const bool branch_taken_0x19ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA84u;
        // 0x19ea88: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea84) {
            ctx->pc = 0x19EAB0u;
            goto label_19eab0;
        }
    }
    ctx->pc = 0x19EA8Cu;
label_19ea8c:
    // 0x19ea8c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19EA8Cu;
    SET_GPR_U32(ctx, 31, 0x19EA94u);
    ctx->pc = 0x19EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA8Cu;
    // 0x19ea90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19EA8Cu, 0x19EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA94u;
label_19ea94:
    // 0x19ea94: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x19ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x19ea98: 0xc061a16  jal         func_186858
    ctx->pc = 0x19EA98u;
    SET_GPR_U32(ctx, 31, 0x19EAA0u);
    ctx->pc = 0x19EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA98u;
    // 0x19ea9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EA98u, 0x19EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAA0u;
label_19eaa0:
    // 0x19eaa0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19eaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x19eaa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19eaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eaa8: 0x0  nop
    ctx->pc = 0x19eaa8u;
    // NOP
    // 0x19eaac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19eaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19eab0:
    // 0x19eab0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19eab4: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x19eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x19eab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19eabc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19eac0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x19EAC0u;
    {
        const bool branch_taken_0x19eac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eac0) {
            ctx->pc = 0x19EAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EAC0u;
            // 0x19eac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EB24u;
            goto label_19eb24;
        }
    }
    ctx->pc = 0x19EAC8u;
    // 0x19eac8: 0xc064afe  jal         func_192BF8
    ctx->pc = 0x19EAC8u;
    SET_GPR_U32(ctx, 31, 0x19EAD0u);
    ctx->pc = 0x192BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BF8u, 0x19EAC8u, 0x19EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAD0u;
label_19ead0:
    // 0x19ead0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EAD0u;
    {
        const bool branch_taken_0x19ead0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ead0) {
            ctx->pc = 0x19EB20u;
            goto label_19eb20;
        }
    }
    ctx->pc = 0x19EAD8u;
    // 0x19ead8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19eadc: 0xc064c38  jal         func_1930E0
    ctx->pc = 0x19EADCu;
    SET_GPR_U32(ctx, 31, 0x19EAE4u);
    ctx->pc = 0x19EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EADCu;
    // 0x19eae0: 0x24a5eff8  addiu       $a1, $a1, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1930E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1930E0u, 0x19EADCu, 0x19EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAE4u;
label_19eae4:
    // 0x19eae4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19EAE4u;
    {
        const bool branch_taken_0x19eae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE4u;
        // 0x19eae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eae4) {
            ctx->pc = 0x19EB20u;
            goto label_19eb20;
        }
    }
    ctx->pc = 0x19EAECu;
    // 0x19eaec: 0xc067c18  jal         func_19F060
    ctx->pc = 0x19EAECu;
    SET_GPR_U32(ctx, 31, 0x19EAF4u);
    ctx->pc = 0x19EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAECu;
    // 0x19eaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F060u, 0x19EAECu, 0x19EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAF4u;
label_19eaf4:
    // 0x19eaf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19eaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eaf8: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x19EAF8u;
    SET_GPR_U32(ctx, 31, 0x19EB00u);
    ctx->pc = 0x19EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAF8u;
    // 0x19eafc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x19EAF8u, 0x19EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB00u;
label_19eb00:
    // 0x19eb00: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19EB00u;
    {
        const bool branch_taken_0x19eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb00) {
            ctx->pc = 0x19EB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EB00u;
            // 0x19eb04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EB24u;
            goto label_19eb24;
        }
    }
    ctx->pc = 0x19EB08u;
    // 0x19eb08: 0xc061a16  jal         func_186858
    ctx->pc = 0x19EB08u;
    SET_GPR_U32(ctx, 31, 0x19EB10u);
    ctx->pc = 0x19EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB08u;
    // 0x19eb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EB08u, 0x19EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB10u;
label_19eb10:
    // 0x19eb10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19eb14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19eb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eb18: 0x0  nop
    ctx->pc = 0x19eb18u;
    // NOP
    // 0x19eb1c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19eb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19eb20:
    // 0x19eb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19eb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19eb24:
    // 0x19eb24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19eb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19eb28: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB28u;
        // 0x19eb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EB30u;
}

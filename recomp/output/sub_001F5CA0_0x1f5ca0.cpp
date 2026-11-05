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

// Function: sub_001F5CA0
// Address: 0x1f5ca0 - 0x1f5dc0
void sub_001F5CA0_0x1f5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5CA0_0x1f5ca0");
#endif

    switch (ctx->pc) {
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5d04u: goto label_1f5d04;
        case 0x1f5d30u: goto label_1f5d30;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d88u: goto label_1f5d88;
        default: break;
    }

    ctx->pc = 0x1f5ca0u;

    // 0x1f5ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5ca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5cb0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1f5cb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f5cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cb8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f5cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f5cbc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f5cc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5cc4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1f5cc4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1f5cc8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1f5cc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1f5ccc: 0x24a5fb88  addiu       $a1, $a1, -0x478
    ctx->pc = 0x1f5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966152));
    // 0x1f5cd0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F5CD0u;
    SET_GPR_U32(ctx, 31, 0x1F5CD8u);
    ctx->pc = 0x1F5CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CD0u;
    // 0x1f5cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F5CD0u, 0x1F5CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CD8u;
label_1f5cd8:
    // 0x1f5cd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5cdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5CDCu;
    {
        const bool branch_taken_0x1f5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CDCu;
        // 0x1f5ce0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cdc) {
            ctx->pc = 0x1F5CF4u;
            goto label_1f5cf4;
        }
    }
    ctx->pc = 0x1F5CE4u;
    // 0x1f5ce4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5ce8: 0xe45415f8  swc1        $f20, 0x15F8($v0)
    ctx->pc = 0x1f5ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5624), bits); }
    // 0x1f5cec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F5CECu;
    {
        const bool branch_taken_0x1f5cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CECu;
        // 0x1f5cf0: 0xe45515f4  swc1        $f21, 0x15F4($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cec) {
            ctx->pc = 0x1F5DA0u;
            goto label_1f5da0;
        }
    }
    ctx->pc = 0x1F5CF4u;
label_1f5cf4:
    // 0x1f5cf4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f5cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cfc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F5CFCu;
    SET_GPR_U32(ctx, 31, 0x1F5D04u);
    ctx->pc = 0x1F5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CFCu;
    // 0x1f5d00: 0x24a5fb90  addiu       $a1, $a1, -0x470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F5CFCu, 0x1F5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D04u;
label_1f5d04:
    // 0x1f5d04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5D08u;
    {
        const bool branch_taken_0x1f5d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D08u;
        // 0x1f5d0c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d08) {
            ctx->pc = 0x1F5D20u;
            goto label_1f5d20;
        }
    }
    ctx->pc = 0x1F5D10u;
    // 0x1f5d10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5d14: 0xe4541600  swc1        $f20, 0x1600($v0)
    ctx->pc = 0x1f5d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5632), bits); }
    // 0x1f5d18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F5D18u;
    {
        const bool branch_taken_0x1f5d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D18u;
        // 0x1f5d1c: 0xe45515fc  swc1        $f21, 0x15FC($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5628), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d18) {
            ctx->pc = 0x1F5DA0u;
            goto label_1f5da0;
        }
    }
    ctx->pc = 0x1F5D20u;
label_1f5d20:
    // 0x1f5d20: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f5d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F5D28u;
    SET_GPR_U32(ctx, 31, 0x1F5D30u);
    ctx->pc = 0x1F5D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D28u;
    // 0x1f5d2c: 0x24a5fb98  addiu       $a1, $a1, -0x468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F5D28u, 0x1F5D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D30u;
label_1f5d30:
    // 0x1f5d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5d34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5D34u;
    {
        const bool branch_taken_0x1f5d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D34u;
        // 0x1f5d38: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d34) {
            ctx->pc = 0x1F5D4Cu;
            goto label_1f5d4c;
        }
    }
    ctx->pc = 0x1F5D3Cu;
    // 0x1f5d3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5d40: 0xe4541608  swc1        $f20, 0x1608($v0)
    ctx->pc = 0x1f5d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5640), bits); }
    // 0x1f5d44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5D44u;
    {
        const bool branch_taken_0x1f5d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D44u;
        // 0x1f5d48: 0xe4551604  swc1        $f21, 0x1604($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d44) {
            ctx->pc = 0x1F5DA0u;
            goto label_1f5da0;
        }
    }
    ctx->pc = 0x1F5D4Cu;
label_1f5d4c:
    // 0x1f5d4c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f5d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F5D54u;
    SET_GPR_U32(ctx, 31, 0x1F5D5Cu);
    ctx->pc = 0x1F5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D54u;
    // 0x1f5d58: 0x24a5fba0  addiu       $a1, $a1, -0x460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F5D54u, 0x1F5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D5Cu;
label_1f5d5c:
    // 0x1f5d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5d60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5D60u;
    {
        const bool branch_taken_0x1f5d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D60u;
        // 0x1f5d64: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d60) {
            ctx->pc = 0x1F5D78u;
            goto label_1f5d78;
        }
    }
    ctx->pc = 0x1F5D68u;
    // 0x1f5d68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5d6c: 0xe4541610  swc1        $f20, 0x1610($v0)
    ctx->pc = 0x1f5d6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5648), bits); }
    // 0x1f5d70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F5D70u;
    {
        const bool branch_taken_0x1f5d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D70u;
        // 0x1f5d74: 0xe455160c  swc1        $f21, 0x160C($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5644), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d70) {
            ctx->pc = 0x1F5DA0u;
            goto label_1f5da0;
        }
    }
    ctx->pc = 0x1F5D78u;
label_1f5d78:
    // 0x1f5d78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f5d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F5D80u;
    SET_GPR_U32(ctx, 31, 0x1F5D88u);
    ctx->pc = 0x1F5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D80u;
    // 0x1f5d84: 0x24a5fba8  addiu       $a1, $a1, -0x458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F5D80u, 0x1F5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D88u;
label_1f5d88:
    // 0x1f5d88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5D8Cu;
    {
        const bool branch_taken_0x1f5d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D8Cu;
        // 0x1f5d90: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d8c) {
            ctx->pc = 0x1F5DA0u;
            goto label_1f5da0;
        }
    }
    ctx->pc = 0x1F5D94u;
    // 0x1f5d94: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5d98: 0xe4541618  swc1        $f20, 0x1618($v0)
    ctx->pc = 0x1f5d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5656), bits); }
    // 0x1f5d9c: 0xe4551614  swc1        $f21, 0x1614($v0)
    ctx->pc = 0x1f5d9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5652), bits); }
label_1f5da0:
    // 0x1f5da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5da4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5dac: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1f5dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f5db0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1f5db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DB4u;
        // 0x1f5db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5DBCu;
    // 0x1f5dbc: 0x0  nop
    ctx->pc = 0x1f5dbcu;
    // NOP
    ctx->pc = 0x1f5dc0u;
}

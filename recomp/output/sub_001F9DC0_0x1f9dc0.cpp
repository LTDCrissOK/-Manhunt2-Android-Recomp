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

// Function: sub_001F9DC0
// Address: 0x1f9dc0 - 0x1fa0f0
void sub_001F9DC0_0x1f9dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9DC0_0x1f9dc0");
#endif

    switch (ctx->pc) {
        case 0x1f9df0u: goto label_1f9df0;
        case 0x1f9e18u: goto label_1f9e18;
        case 0x1f9e40u: goto label_1f9e40;
        case 0x1f9e68u: goto label_1f9e68;
        case 0x1f9e90u: goto label_1f9e90;
        case 0x1f9eb8u: goto label_1f9eb8;
        case 0x1f9ee0u: goto label_1f9ee0;
        case 0x1f9f08u: goto label_1f9f08;
        case 0x1f9f30u: goto label_1f9f30;
        case 0x1f9f58u: goto label_1f9f58;
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9fa8u: goto label_1f9fa8;
        case 0x1f9fd0u: goto label_1f9fd0;
        case 0x1f9ff8u: goto label_1f9ff8;
        case 0x1fa020u: goto label_1fa020;
        case 0x1fa048u: goto label_1fa048;
        case 0x1fa070u: goto label_1fa070;
        case 0x1fa098u: goto label_1fa098;
        case 0x1fa0c0u: goto label_1fa0c0;
        default: break;
    }

    ctx->pc = 0x1f9dc0u;

    // 0x1f9dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9dc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f9dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9dd0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f9dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f9dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9dd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9de0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1f9de0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1f9de4: 0x24a5fe48  addiu       $a1, $a1, -0x1B8
    ctx->pc = 0x1f9de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966856));
    // 0x1f9de8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9DE8u;
    SET_GPR_U32(ctx, 31, 0x1F9DF0u);
    ctx->pc = 0x1F9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DE8u;
    // 0x1f9dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9DE8u, 0x1F9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DF0u;
label_1f9df0:
    // 0x1f9df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9DF4u;
    {
        const bool branch_taken_0x1f9df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DF4u;
        // 0x1f9df8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9df4) {
            ctx->pc = 0x1F9E08u;
            goto label_1f9e08;
        }
    }
    ctx->pc = 0x1F9DFCu;
    // 0x1f9dfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9e00: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1F9E00u;
    {
        const bool branch_taken_0x1f9e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E00u;
        // 0x1f9e04: 0xe4541628  swc1        $f20, 0x1628($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e00) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9E08u;
label_1f9e08:
    // 0x1f9e08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9E10u;
    SET_GPR_U32(ctx, 31, 0x1F9E18u);
    ctx->pc = 0x1F9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E10u;
    // 0x1f9e14: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9E10u, 0x1F9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E18u;
label_1f9e18:
    // 0x1f9e18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E1Cu;
    {
        const bool branch_taken_0x1f9e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E1Cu;
        // 0x1f9e20: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e1c) {
            ctx->pc = 0x1F9E30u;
            goto label_1f9e30;
        }
    }
    ctx->pc = 0x1F9E24u;
    // 0x1f9e24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9e28: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1F9E28u;
    {
        const bool branch_taken_0x1f9e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E28u;
        // 0x1f9e2c: 0xe454162c  swc1        $f20, 0x162C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e28) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9E30u;
label_1f9e30:
    // 0x1f9e30: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9E38u;
    SET_GPR_U32(ctx, 31, 0x1F9E40u);
    ctx->pc = 0x1F9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E38u;
    // 0x1f9e3c: 0x24a5fe68  addiu       $a1, $a1, -0x198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9E38u, 0x1F9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E40u;
label_1f9e40:
    // 0x1f9e40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E44u;
    {
        const bool branch_taken_0x1f9e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E44u;
        // 0x1f9e48: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e44) {
            ctx->pc = 0x1F9E58u;
            goto label_1f9e58;
        }
    }
    ctx->pc = 0x1F9E4Cu;
    // 0x1f9e4c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9e50: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1F9E50u;
    {
        const bool branch_taken_0x1f9e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E50u;
        // 0x1f9e54: 0xe4541630  swc1        $f20, 0x1630($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e50) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9E58u;
label_1f9e58:
    // 0x1f9e58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9E60u;
    SET_GPR_U32(ctx, 31, 0x1F9E68u);
    ctx->pc = 0x1F9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E60u;
    // 0x1f9e64: 0x24a5fe78  addiu       $a1, $a1, -0x188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9E60u, 0x1F9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E68u;
label_1f9e68:
    // 0x1f9e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9e6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E6Cu;
    {
        const bool branch_taken_0x1f9e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E6Cu;
        // 0x1f9e70: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e6c) {
            ctx->pc = 0x1F9E80u;
            goto label_1f9e80;
        }
    }
    ctx->pc = 0x1F9E74u;
    // 0x1f9e74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9e78: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1F9E78u;
    {
        const bool branch_taken_0x1f9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E78u;
        // 0x1f9e7c: 0xe4541634  swc1        $f20, 0x1634($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e78) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9E80u;
label_1f9e80:
    // 0x1f9e80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9E88u;
    SET_GPR_U32(ctx, 31, 0x1F9E90u);
    ctx->pc = 0x1F9E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E88u;
    // 0x1f9e8c: 0x24a5fe88  addiu       $a1, $a1, -0x178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9E88u, 0x1F9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E90u;
label_1f9e90:
    // 0x1f9e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9e94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E94u;
    {
        const bool branch_taken_0x1f9e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E94u;
        // 0x1f9e98: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e94) {
            ctx->pc = 0x1F9EA8u;
            goto label_1f9ea8;
        }
    }
    ctx->pc = 0x1F9E9Cu;
    // 0x1f9e9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9ea0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1F9EA0u;
    {
        const bool branch_taken_0x1f9ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EA0u;
        // 0x1f9ea4: 0xe4541638  swc1        $f20, 0x1638($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ea0) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9EA8u;
label_1f9ea8:
    // 0x1f9ea8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9eb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9EB0u;
    SET_GPR_U32(ctx, 31, 0x1F9EB8u);
    ctx->pc = 0x1F9EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9EB0u;
    // 0x1f9eb4: 0x24a5fe90  addiu       $a1, $a1, -0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9EB0u, 0x1F9EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9EB8u;
label_1f9eb8:
    // 0x1f9eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9ebc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9EBCu;
    {
        const bool branch_taken_0x1f9ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EBCu;
        // 0x1f9ec0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ebc) {
            ctx->pc = 0x1F9ED0u;
            goto label_1f9ed0;
        }
    }
    ctx->pc = 0x1F9EC4u;
    // 0x1f9ec4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9ec8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1F9EC8u;
    {
        const bool branch_taken_0x1f9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EC8u;
        // 0x1f9ecc: 0xe454163c  swc1        $f20, 0x163C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5692), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec8) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9ED0u;
label_1f9ed0:
    // 0x1f9ed0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ed8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9ED8u;
    SET_GPR_U32(ctx, 31, 0x1F9EE0u);
    ctx->pc = 0x1F9EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9ED8u;
    // 0x1f9edc: 0x24a5fe98  addiu       $a1, $a1, -0x168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9ED8u, 0x1F9EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9EE0u;
label_1f9ee0:
    // 0x1f9ee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9EE4u;
    {
        const bool branch_taken_0x1f9ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EE4u;
        // 0x1f9ee8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee4) {
            ctx->pc = 0x1F9EF8u;
            goto label_1f9ef8;
        }
    }
    ctx->pc = 0x1F9EECu;
    // 0x1f9eec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9ef0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1F9EF0u;
    {
        const bool branch_taken_0x1f9ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EF0u;
        // 0x1f9ef4: 0xe4541640  swc1        $f20, 0x1640($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ef0) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9EF8u;
label_1f9ef8:
    // 0x1f9ef8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f00: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9F00u;
    SET_GPR_U32(ctx, 31, 0x1F9F08u);
    ctx->pc = 0x1F9F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F00u;
    // 0x1f9f04: 0x24a5fea8  addiu       $a1, $a1, -0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9F00u, 0x1F9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F08u;
label_1f9f08:
    // 0x1f9f08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9f0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F0Cu;
    {
        const bool branch_taken_0x1f9f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F0Cu;
        // 0x1f9f10: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f0c) {
            ctx->pc = 0x1F9F20u;
            goto label_1f9f20;
        }
    }
    ctx->pc = 0x1F9F14u;
    // 0x1f9f14: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9f18: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1F9F18u;
    {
        const bool branch_taken_0x1f9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F18u;
        // 0x1f9f1c: 0xe4541644  swc1        $f20, 0x1644($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f18) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9F20u;
label_1f9f20:
    // 0x1f9f20: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9F28u;
    SET_GPR_U32(ctx, 31, 0x1F9F30u);
    ctx->pc = 0x1F9F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F28u;
    // 0x1f9f2c: 0x24a5fec0  addiu       $a1, $a1, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9F28u, 0x1F9F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F30u;
label_1f9f30:
    // 0x1f9f30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F34u;
    {
        const bool branch_taken_0x1f9f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F34u;
        // 0x1f9f38: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f34) {
            ctx->pc = 0x1F9F48u;
            goto label_1f9f48;
        }
    }
    ctx->pc = 0x1F9F3Cu;
    // 0x1f9f3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9f40: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1F9F40u;
    {
        const bool branch_taken_0x1f9f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F40u;
        // 0x1f9f44: 0xe4541648  swc1        $f20, 0x1648($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f40) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9F48u;
label_1f9f48:
    // 0x1f9f48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9F50u;
    SET_GPR_U32(ctx, 31, 0x1F9F58u);
    ctx->pc = 0x1F9F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F50u;
    // 0x1f9f54: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9F50u, 0x1F9F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F58u;
label_1f9f58:
    // 0x1f9f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F5Cu;
    {
        const bool branch_taken_0x1f9f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F5Cu;
        // 0x1f9f60: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f5c) {
            ctx->pc = 0x1F9F70u;
            goto label_1f9f70;
        }
    }
    ctx->pc = 0x1F9F64u;
    // 0x1f9f64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9f68: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1F9F68u;
    {
        const bool branch_taken_0x1f9f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F68u;
        // 0x1f9f6c: 0xe454164c  swc1        $f20, 0x164C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5708), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f68) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9F70u;
label_1f9f70:
    // 0x1f9f70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9F78u;
    SET_GPR_U32(ctx, 31, 0x1F9F80u);
    ctx->pc = 0x1F9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F78u;
    // 0x1f9f7c: 0x24a5fee8  addiu       $a1, $a1, -0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9F78u, 0x1F9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F80u;
label_1f9f80:
    // 0x1f9f80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F84u;
    {
        const bool branch_taken_0x1f9f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F84u;
        // 0x1f9f88: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f84) {
            ctx->pc = 0x1F9F98u;
            goto label_1f9f98;
        }
    }
    ctx->pc = 0x1F9F8Cu;
    // 0x1f9f8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9f90: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1F9F90u;
    {
        const bool branch_taken_0x1f9f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F90u;
        // 0x1f9f94: 0xe4541650  swc1        $f20, 0x1650($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f90) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9F98u;
label_1f9f98:
    // 0x1f9f98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fa0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9FA0u;
    SET_GPR_U32(ctx, 31, 0x1F9FA8u);
    ctx->pc = 0x1F9FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9FA0u;
    // 0x1f9fa4: 0x24a5fef8  addiu       $a1, $a1, -0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9FA0u, 0x1F9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FA8u;
label_1f9fa8:
    // 0x1f9fa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9fac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9FACu;
    {
        const bool branch_taken_0x1f9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FACu;
        // 0x1f9fb0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fac) {
            ctx->pc = 0x1F9FC0u;
            goto label_1f9fc0;
        }
    }
    ctx->pc = 0x1F9FB4u;
    // 0x1f9fb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9fb8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1F9FB8u;
    {
        const bool branch_taken_0x1f9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FB8u;
        // 0x1f9fbc: 0xe4541654  swc1        $f20, 0x1654($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fb8) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9FC0u;
label_1f9fc0:
    // 0x1f9fc0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fc8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9FC8u;
    SET_GPR_U32(ctx, 31, 0x1F9FD0u);
    ctx->pc = 0x1F9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9FC8u;
    // 0x1f9fcc: 0x24a5ff08  addiu       $a1, $a1, -0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9FC8u, 0x1F9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FD0u;
label_1f9fd0:
    // 0x1f9fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9FD4u;
    {
        const bool branch_taken_0x1f9fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FD4u;
        // 0x1f9fd8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fd4) {
            ctx->pc = 0x1F9FE8u;
            goto label_1f9fe8;
        }
    }
    ctx->pc = 0x1F9FDCu;
    // 0x1f9fdc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9fe0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F9FE0u;
    {
        const bool branch_taken_0x1f9fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FE0u;
        // 0x1f9fe4: 0xe4541658  swc1        $f20, 0x1658($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fe0) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1F9FE8u;
label_1f9fe8:
    // 0x1f9fe8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f9fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ff0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F9FF0u;
    SET_GPR_U32(ctx, 31, 0x1F9FF8u);
    ctx->pc = 0x1F9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9FF0u;
    // 0x1f9ff4: 0x24a5ff18  addiu       $a1, $a1, -0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F9FF0u, 0x1F9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FF8u;
label_1f9ff8:
    // 0x1f9ff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9FFCu;
    {
        const bool branch_taken_0x1f9ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FFCu;
        // 0x1fa000: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ffc) {
            ctx->pc = 0x1FA010u;
            goto label_1fa010;
        }
    }
    ctx->pc = 0x1FA004u;
    // 0x1fa004: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa008: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FA008u;
    {
        const bool branch_taken_0x1fa008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA008u;
        // 0x1fa00c: 0xe454165c  swc1        $f20, 0x165C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa008) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA010u;
label_1fa010:
    // 0x1fa010: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fa010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fa014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa018: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1FA018u;
    SET_GPR_U32(ctx, 31, 0x1FA020u);
    ctx->pc = 0x1FA01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA018u;
    // 0x1fa01c: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1FA018u, 0x1FA020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA020u;
label_1fa020:
    // 0x1fa020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fa020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA024u;
    {
        const bool branch_taken_0x1fa024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA024u;
        // 0x1fa028: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa024) {
            ctx->pc = 0x1FA038u;
            goto label_1fa038;
        }
    }
    ctx->pc = 0x1FA02Cu;
    // 0x1fa02c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa030: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FA030u;
    {
        const bool branch_taken_0x1fa030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA030u;
        // 0x1fa034: 0xe4541660  swc1        $f20, 0x1660($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa030) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA038u;
label_1fa038:
    // 0x1fa038: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fa03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa040: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1FA040u;
    SET_GPR_U32(ctx, 31, 0x1FA048u);
    ctx->pc = 0x1FA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA040u;
    // 0x1fa044: 0x24a5ff38  addiu       $a1, $a1, -0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1FA040u, 0x1FA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA048u;
label_1fa048:
    // 0x1fa048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fa048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa04c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA04Cu;
    {
        const bool branch_taken_0x1fa04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA04Cu;
        // 0x1fa050: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa04c) {
            ctx->pc = 0x1FA060u;
            goto label_1fa060;
        }
    }
    ctx->pc = 0x1FA054u;
    // 0x1fa054: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa058: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA058u;
    {
        const bool branch_taken_0x1fa058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA058u;
        // 0x1fa05c: 0xe4541664  swc1        $f20, 0x1664($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa058) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA060u;
label_1fa060:
    // 0x1fa060: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fa060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fa064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa068: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1FA068u;
    SET_GPR_U32(ctx, 31, 0x1FA070u);
    ctx->pc = 0x1FA06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA068u;
    // 0x1fa06c: 0x24a5ff48  addiu       $a1, $a1, -0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1FA068u, 0x1FA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA070u;
label_1fa070:
    // 0x1fa070: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fa070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA074u;
    {
        const bool branch_taken_0x1fa074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA074u;
        // 0x1fa078: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa074) {
            ctx->pc = 0x1FA088u;
            goto label_1fa088;
        }
    }
    ctx->pc = 0x1FA07Cu;
    // 0x1fa07c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa080: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA080u;
    {
        const bool branch_taken_0x1fa080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA080u;
        // 0x1fa084: 0xe4541668  swc1        $f20, 0x1668($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa080) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA088u;
label_1fa088:
    // 0x1fa088: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fa088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fa08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa090: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1FA090u;
    SET_GPR_U32(ctx, 31, 0x1FA098u);
    ctx->pc = 0x1FA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA090u;
    // 0x1fa094: 0x24a5ff58  addiu       $a1, $a1, -0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1FA090u, 0x1FA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA098u;
label_1fa098:
    // 0x1fa098: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fa098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa09c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA09Cu;
    {
        const bool branch_taken_0x1fa09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA09Cu;
        // 0x1fa0a0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa09c) {
            ctx->pc = 0x1FA0B0u;
            goto label_1fa0b0;
        }
    }
    ctx->pc = 0x1FA0A4u;
    // 0x1fa0a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa0a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA0A8u;
    {
        const bool branch_taken_0x1fa0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0A8u;
        // 0x1fa0ac: 0xe454166c  swc1        $f20, 0x166C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0a8) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA0B0u;
label_1fa0b0:
    // 0x1fa0b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fa0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fa0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1FA0B8u;
    SET_GPR_U32(ctx, 31, 0x1FA0C0u);
    ctx->pc = 0x1FA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0B8u;
    // 0x1fa0bc: 0x24a5ff68  addiu       $a1, $a1, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1FA0B8u, 0x1FA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0C0u;
label_1fa0c0:
    // 0x1fa0c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fa0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa0c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA0C4u;
    {
        const bool branch_taken_0x1fa0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0C4u;
        // 0x1fa0c8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0c4) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA0CCu;
    // 0x1fa0cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa0d0: 0xe4541670  swc1        $f20, 0x1670($v0)
    ctx->pc = 0x1fa0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5744), bits); }
label_1fa0d4:
    // 0x1fa0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa0d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa0e0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1fa0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fa0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0E4u;
        // 0x1fa0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA0ECu;
    // 0x1fa0ec: 0x0  nop
    ctx->pc = 0x1fa0ecu;
    // NOP
    ctx->pc = 0x1fa0f0u;
}

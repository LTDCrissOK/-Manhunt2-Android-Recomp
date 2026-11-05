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

// Function: sub_002B1BF8
// Address: 0x2b1bf8 - 0x2b2058
void sub_002B1BF8_0x2b1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1BF8_0x2b1bf8");
#endif

    switch (ctx->pc) {
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d58u: goto label_2b1d58;
        case 0x2b1d6cu: goto label_2b1d6c;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1d98u: goto label_2b1d98;
        case 0x2b1db0u: goto label_2b1db0;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1ddcu: goto label_2b1ddc;
        case 0x2b1df0u: goto label_2b1df0;
        case 0x2b1e08u: goto label_2b1e08;
        case 0x2b1e1cu: goto label_2b1e1c;
        case 0x2b1e34u: goto label_2b1e34;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e74u: goto label_2b1e74;
        case 0x2b1e8cu: goto label_2b1e8c;
        case 0x2b1ea0u: goto label_2b1ea0;
        case 0x2b1eb8u: goto label_2b1eb8;
        case 0x2b1eccu: goto label_2b1ecc;
        case 0x2b1ee4u: goto label_2b1ee4;
        case 0x2b1f00u: goto label_2b1f00;
        case 0x2b1f5cu: goto label_2b1f5c;
        case 0x2b1f70u: goto label_2b1f70;
        case 0x2b1f88u: goto label_2b1f88;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1fb4u: goto label_2b1fb4;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fe0u: goto label_2b1fe0;
        case 0x2b1ff4u: goto label_2b1ff4;
        case 0x2b200cu: goto label_2b200c;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b2038u: goto label_2b2038;
        default: break;
    }

    ctx->pc = 0x2b1bf8u;

    // 0x2b1bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b1bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b1c00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b1c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b1c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b1c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1c18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b1c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b1c1c: 0x24a5efa0  addiu       $a1, $a1, -0x1060
    ctx->pc = 0x2b1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963104));
    // 0x2b1c20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1C20u;
    SET_GPR_U32(ctx, 31, 0x2B1C28u);
    ctx->pc = 0x2B1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C20u;
    // 0x2b1c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1C20u, 0x2B1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C28u;
label_2b1c28:
    // 0x2b1c28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1C2Cu;
    {
        const bool branch_taken_0x2b1c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C2Cu;
        // 0x2b1c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c2c) {
            ctx->pc = 0x2B1C44u;
            goto label_2b1c44;
        }
    }
    ctx->pc = 0x2B1C34u;
    // 0x2b1c34: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1C34u;
    SET_GPR_U32(ctx, 31, 0x2B1C3Cu);
    ctx->pc = 0x2B1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C34u;
    // 0x2b1c38: 0x26050488  addiu       $a1, $s0, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1C34u, 0x2B1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C3Cu;
label_2b1c3c:
    // 0x2b1c3c: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x2B1C3Cu;
    {
        const bool branch_taken_0x2b1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C3Cu;
        // 0x2b1c40: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c3c) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1C44u;
label_2b1c44:
    // 0x2b1c44: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C54u);
    ctx->pc = 0x2B1C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C4Cu;
    // 0x2b1c50: 0x24a5efb8  addiu       $a1, $a1, -0x1048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1C4Cu, 0x2B1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C54u;
label_2b1c54:
    // 0x2b1c54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1C58u;
    {
        const bool branch_taken_0x2b1c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C58u;
        // 0x2b1c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c58) {
            ctx->pc = 0x2B1C70u;
            goto label_2b1c70;
        }
    }
    ctx->pc = 0x2B1C60u;
    // 0x2b1c60: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1C60u;
    SET_GPR_U32(ctx, 31, 0x2B1C68u);
    ctx->pc = 0x2B1C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C60u;
    // 0x2b1c64: 0x2605048c  addiu       $a1, $s0, 0x48C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1C60u, 0x2B1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C68u;
label_2b1c68:
    // 0x2b1c68: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2B1C68u;
    {
        const bool branch_taken_0x2b1c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C68u;
        // 0x2b1c6c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c68) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1C70u;
label_2b1c70:
    // 0x2b1c70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1C78u;
    SET_GPR_U32(ctx, 31, 0x2B1C80u);
    ctx->pc = 0x2B1C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C78u;
    // 0x2b1c7c: 0x24a5efd0  addiu       $a1, $a1, -0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1C78u, 0x2B1C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C80u;
label_2b1c80:
    // 0x2b1c80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1c84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1C84u;
    {
        const bool branch_taken_0x2b1c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C84u;
        // 0x2b1c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c84) {
            ctx->pc = 0x2B1C9Cu;
            goto label_2b1c9c;
        }
    }
    ctx->pc = 0x2B1C8Cu;
    // 0x2b1c8c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C94u);
    ctx->pc = 0x2B1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C8Cu;
    // 0x2b1c90: 0x26050490  addiu       $a1, $s0, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1C8Cu, 0x2B1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C94u;
label_2b1c94:
    // 0x2b1c94: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x2B1C94u;
    {
        const bool branch_taken_0x2b1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C94u;
        // 0x2b1c98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c94) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1C9Cu;
label_2b1c9c:
    // 0x2b1c9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ca4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1CA4u;
    SET_GPR_U32(ctx, 31, 0x2B1CACu);
    ctx->pc = 0x2B1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1CA4u;
    // 0x2b1ca8: 0x24a5efe8  addiu       $a1, $a1, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1CA4u, 0x2B1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CACu;
label_2b1cac:
    // 0x2b1cac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1cb0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B1CB0u;
    {
        const bool branch_taken_0x2b1cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CB0u;
        // 0x2b1cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cb0) {
            ctx->pc = 0x2B1D1Cu;
            goto label_2b1d1c;
        }
    }
    ctx->pc = 0x2B1CB8u;
    // 0x2b1cb8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1CB8u;
    SET_GPR_U32(ctx, 31, 0x2B1CC0u);
    ctx->pc = 0x2B1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1CB8u;
    // 0x2b1cbc: 0x26050494  addiu       $a1, $s0, 0x494 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1CB8u, 0x2B1CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CC0u;
label_2b1cc0:
    // 0x2b1cc0: 0xc6010494  lwc1        $f1, 0x494($s0)
    ctx->pc = 0x2b1cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1cc4: 0x3c01bf7a  lui         $at, 0xBF7A
    ctx->pc = 0x2b1cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49018 << 16));
    // 0x2b1cc8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2b1cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x2b1ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1cd0: 0x0  nop
    ctx->pc = 0x2b1cd0u;
    // NOP
    // 0x2b1cd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b1cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1cd8: 0x0  nop
    ctx->pc = 0x2b1cd8u;
    // NOP
    // 0x2b1cdc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2B1CDCu;
    {
        const bool branch_taken_0x2b1cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1cdc) {
            ctx->pc = 0x2B1D0Cu;
            goto label_2b1d0c;
        }
    }
    ctx->pc = 0x2B1CE4u;
    // 0x2b1ce4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2b1ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2b1ce8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2b1ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2b1cec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1cf0: 0x0  nop
    ctx->pc = 0x2b1cf0u;
    // NOP
    // 0x2b1cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b1cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1cf8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b1cf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b1cfc: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2B1CFCu;
    SET_GPR_U32(ctx, 31, 0x2B1D04u);
    ctx->pc = 0x2B1D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1CFCu;
    // 0x2b1d00: 0xe6000494  swc1        $f0, 0x494($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2B1CFCu, 0x2B1D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D04u;
label_2b1d04:
    // 0x2b1d04: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2B1D04u;
    {
        const bool branch_taken_0x2b1d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D04u;
        // 0x2b1d08: 0xe6000494  swc1        $f0, 0x494($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d04) {
            ctx->pc = 0x2B2028u;
            goto label_2b2028;
        }
    }
    ctx->pc = 0x2B1D0Cu;
label_2b1d0c:
    // 0x2b1d0c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b1d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b1d10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d14: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2B1D14u;
    {
        const bool branch_taken_0x2b1d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D14u;
        // 0x2b1d18: 0xe6000494  swc1        $f0, 0x494($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d14) {
            ctx->pc = 0x2B2028u;
            goto label_2b2028;
        }
    }
    ctx->pc = 0x2B1D1Cu;
label_2b1d1c:
    // 0x2b1d1c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1D24u;
    SET_GPR_U32(ctx, 31, 0x2B1D2Cu);
    ctx->pc = 0x2B1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D24u;
    // 0x2b1d28: 0x24a5f000  addiu       $a1, $a1, -0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1D24u, 0x2B1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D2Cu;
label_2b1d2c:
    // 0x2b1d2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1d30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1D30u;
    {
        const bool branch_taken_0x2b1d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D30u;
        // 0x2b1d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d30) {
            ctx->pc = 0x2B1D48u;
            goto label_2b1d48;
        }
    }
    ctx->pc = 0x2B1D38u;
    // 0x2b1d38: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1D38u;
    SET_GPR_U32(ctx, 31, 0x2B1D40u);
    ctx->pc = 0x2B1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D38u;
    // 0x2b1d3c: 0x26050484  addiu       $a1, $s0, 0x484 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1D38u, 0x2B1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D40u;
label_2b1d40:
    // 0x2b1d40: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2B1D40u;
    {
        const bool branch_taken_0x2b1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D40u;
        // 0x2b1d44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d40) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1D48u;
label_2b1d48:
    // 0x2b1d48: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1D50u;
    SET_GPR_U32(ctx, 31, 0x2B1D58u);
    ctx->pc = 0x2B1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D50u;
    // 0x2b1d54: 0x24a5f018  addiu       $a1, $a1, -0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1D50u, 0x2B1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D58u;
label_2b1d58:
    // 0x2b1d58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1d5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1D5Cu;
    {
        const bool branch_taken_0x2b1d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D5Cu;
        // 0x2b1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d5c) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1D64u;
    // 0x2b1d64: 0xc09e062  jal         func_278188
    ctx->pc = 0x2B1D64u;
    SET_GPR_U32(ctx, 31, 0x2B1D6Cu);
    ctx->pc = 0x2B1D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D64u;
    // 0x2b1d68: 0x26050498  addiu       $a1, $s0, 0x498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x2B1D64u, 0x2B1D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D6Cu;
label_2b1d6c:
    // 0x2b1d6c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2B1D6Cu;
    {
        const bool branch_taken_0x2b1d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D6Cu;
        // 0x2b1d70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d6c) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1D74u;
label_2b1d74:
    // 0x2b1d74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D84u);
    ctx->pc = 0x2B1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D7Cu;
    // 0x2b1d80: 0x24a5f028  addiu       $a1, $a1, -0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1D7Cu, 0x2B1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D84u;
label_2b1d84:
    // 0x2b1d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1d88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1D88u;
    {
        const bool branch_taken_0x2b1d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D88u;
        // 0x2b1d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d88) {
            ctx->pc = 0x2B1DA0u;
            goto label_2b1da0;
        }
    }
    ctx->pc = 0x2B1D90u;
    // 0x2b1d90: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1D90u;
    SET_GPR_U32(ctx, 31, 0x2B1D98u);
    ctx->pc = 0x2B1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D90u;
    // 0x2b1d94: 0x260504d8  addiu       $a1, $s0, 0x4D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1D90u, 0x2B1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D98u;
label_2b1d98:
    // 0x2b1d98: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2B1D98u;
    {
        const bool branch_taken_0x2b1d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D98u;
        // 0x2b1d9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d98) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1DA0u;
label_2b1da0:
    // 0x2b1da0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1da8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1DA8u;
    SET_GPR_U32(ctx, 31, 0x2B1DB0u);
    ctx->pc = 0x2B1DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DA8u;
    // 0x2b1dac: 0x24a5f038  addiu       $a1, $a1, -0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1DA8u, 0x2B1DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DB0u;
label_2b1db0:
    // 0x2b1db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1DB4u;
    {
        const bool branch_taken_0x2b1db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DB4u;
        // 0x2b1db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1db4) {
            ctx->pc = 0x2B1DCCu;
            goto label_2b1dcc;
        }
    }
    ctx->pc = 0x2B1DBCu;
    // 0x2b1dbc: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1DBCu;
    SET_GPR_U32(ctx, 31, 0x2B1DC4u);
    ctx->pc = 0x2B1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DBCu;
    // 0x2b1dc0: 0x260504dc  addiu       $a1, $s0, 0x4DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1DBCu, 0x2B1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DC4u;
label_2b1dc4:
    // 0x2b1dc4: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2B1DC4u;
    {
        const bool branch_taken_0x2b1dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DC4u;
        // 0x2b1dc8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dc4) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1DCCu;
label_2b1dcc:
    // 0x2b1dcc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1dd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1DD4u;
    SET_GPR_U32(ctx, 31, 0x2B1DDCu);
    ctx->pc = 0x2B1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DD4u;
    // 0x2b1dd8: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1DD4u, 0x2B1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DDCu;
label_2b1ddc:
    // 0x2b1ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1de0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1DE0u;
    {
        const bool branch_taken_0x2b1de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DE0u;
        // 0x2b1de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1de0) {
            ctx->pc = 0x2B1DF8u;
            goto label_2b1df8;
        }
    }
    ctx->pc = 0x2B1DE8u;
    // 0x2b1de8: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1DE8u;
    SET_GPR_U32(ctx, 31, 0x2B1DF0u);
    ctx->pc = 0x2B1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DE8u;
    // 0x2b1dec: 0x260504e0  addiu       $a1, $s0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1DE8u, 0x2B1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DF0u;
label_2b1df0:
    // 0x2b1df0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2B1DF0u;
    {
        const bool branch_taken_0x2b1df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DF0u;
        // 0x2b1df4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1df0) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1DF8u;
label_2b1df8:
    // 0x2b1df8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1dfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e00: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1E00u;
    SET_GPR_U32(ctx, 31, 0x2B1E08u);
    ctx->pc = 0x2B1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E00u;
    // 0x2b1e04: 0x24a5f068  addiu       $a1, $a1, -0xF98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1E00u, 0x2B1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E08u;
label_2b1e08:
    // 0x2b1e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1e0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1E0Cu;
    {
        const bool branch_taken_0x2b1e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E0Cu;
        // 0x2b1e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e0c) {
            ctx->pc = 0x2B1E24u;
            goto label_2b1e24;
        }
    }
    ctx->pc = 0x2B1E14u;
    // 0x2b1e14: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1E14u;
    SET_GPR_U32(ctx, 31, 0x2B1E1Cu);
    ctx->pc = 0x2B1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E14u;
    // 0x2b1e18: 0x260504e4  addiu       $a1, $s0, 0x4E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1E14u, 0x2B1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E1Cu;
label_2b1e1c:
    // 0x2b1e1c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2B1E1Cu;
    {
        const bool branch_taken_0x2b1e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E1Cu;
        // 0x2b1e20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e1c) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1E24u;
label_2b1e24:
    // 0x2b1e24: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E34u);
    ctx->pc = 0x2B1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E2Cu;
    // 0x2b1e30: 0x24a5f078  addiu       $a1, $a1, -0xF88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1E2Cu, 0x2B1E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E34u;
label_2b1e34:
    // 0x2b1e34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1e38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1E38u;
    {
        const bool branch_taken_0x2b1e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E38u;
        // 0x2b1e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e38) {
            ctx->pc = 0x2B1E50u;
            goto label_2b1e50;
        }
    }
    ctx->pc = 0x2B1E40u;
    // 0x2b1e40: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1E40u;
    SET_GPR_U32(ctx, 31, 0x2B1E48u);
    ctx->pc = 0x2B1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E40u;
    // 0x2b1e44: 0x260504e8  addiu       $a1, $s0, 0x4E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1E40u, 0x2B1E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E48u;
label_2b1e48:
    // 0x2b1e48: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2B1E48u;
    {
        const bool branch_taken_0x2b1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E48u;
        // 0x2b1e4c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e48) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1E50u;
label_2b1e50:
    // 0x2b1e50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1E58u;
    SET_GPR_U32(ctx, 31, 0x2B1E60u);
    ctx->pc = 0x2B1E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E58u;
    // 0x2b1e5c: 0x24a5f090  addiu       $a1, $a1, -0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1E58u, 0x2B1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E60u;
label_2b1e60:
    // 0x2b1e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1e64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1E64u;
    {
        const bool branch_taken_0x2b1e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E64u;
        // 0x2b1e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e64) {
            ctx->pc = 0x2B1E7Cu;
            goto label_2b1e7c;
        }
    }
    ctx->pc = 0x2B1E6Cu;
    // 0x2b1e6c: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E74u);
    ctx->pc = 0x2B1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E6Cu;
    // 0x2b1e70: 0x260504ec  addiu       $a1, $s0, 0x4EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1E6Cu, 0x2B1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E74u;
label_2b1e74:
    // 0x2b1e74: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2B1E74u;
    {
        const bool branch_taken_0x2b1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E74u;
        // 0x2b1e78: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e74) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1E7Cu;
label_2b1e7c:
    // 0x2b1e7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1E84u;
    SET_GPR_U32(ctx, 31, 0x2B1E8Cu);
    ctx->pc = 0x2B1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E84u;
    // 0x2b1e88: 0x24a5f0a0  addiu       $a1, $a1, -0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1E84u, 0x2B1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E8Cu;
label_2b1e8c:
    // 0x2b1e8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1E90u;
    {
        const bool branch_taken_0x2b1e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E90u;
        // 0x2b1e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e90) {
            ctx->pc = 0x2B1EA8u;
            goto label_2b1ea8;
        }
    }
    ctx->pc = 0x2B1E98u;
    // 0x2b1e98: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1E98u;
    SET_GPR_U32(ctx, 31, 0x2B1EA0u);
    ctx->pc = 0x2B1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E98u;
    // 0x2b1e9c: 0x260504f0  addiu       $a1, $s0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1E98u, 0x2B1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EA0u;
label_2b1ea0:
    // 0x2b1ea0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2B1EA0u;
    {
        const bool branch_taken_0x2b1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EA0u;
        // 0x2b1ea4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ea0) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1EA8u;
label_2b1ea8:
    // 0x2b1ea8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1eb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1EB0u;
    SET_GPR_U32(ctx, 31, 0x2B1EB8u);
    ctx->pc = 0x2B1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EB0u;
    // 0x2b1eb4: 0x24a5f0b0  addiu       $a1, $a1, -0xF50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1EB0u, 0x2B1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EB8u;
label_2b1eb8:
    // 0x2b1eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1ebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1EBCu;
    {
        const bool branch_taken_0x2b1ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EBCu;
        // 0x2b1ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ebc) {
            ctx->pc = 0x2B1ED4u;
            goto label_2b1ed4;
        }
    }
    ctx->pc = 0x2B1EC4u;
    // 0x2b1ec4: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B1EC4u;
    SET_GPR_U32(ctx, 31, 0x2B1ECCu);
    ctx->pc = 0x2B1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EC4u;
    // 0x2b1ec8: 0x260504f4  addiu       $a1, $s0, 0x4F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B1EC4u, 0x2B1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1ECCu;
label_2b1ecc:
    // 0x2b1ecc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2B1ECCu;
    {
        const bool branch_taken_0x2b1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ECCu;
        // 0x2b1ed0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ecc) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1ED4u;
label_2b1ed4:
    // 0x2b1ed4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1edc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1EDCu;
    SET_GPR_U32(ctx, 31, 0x2B1EE4u);
    ctx->pc = 0x2B1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EDCu;
    // 0x2b1ee0: 0x24a5f0c8  addiu       $a1, $a1, -0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1EDCu, 0x2B1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EE4u;
label_2b1ee4:
    // 0x2b1ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1ee8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B1EE8u;
    {
        const bool branch_taken_0x2b1ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EE8u;
        // 0x2b1eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ee8) {
            ctx->pc = 0x2B1F4Cu;
            goto label_2b1f4c;
        }
    }
    ctx->pc = 0x2B1EF0u;
    // 0x2b1ef0: 0x26050500  addiu       $a1, $s0, 0x500
    ctx->pc = 0x2b1ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x2b1ef4: 0x26060504  addiu       $a2, $s0, 0x504
    ctx->pc = 0x2b1ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1284));
    // 0x2b1ef8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2B1EF8u;
    SET_GPR_U32(ctx, 31, 0x2B1F00u);
    ctx->pc = 0x2B1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EF8u;
    // 0x2b1efc: 0x26070508  addiu       $a3, $s0, 0x508 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2B1EF8u, 0x2B1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F00u;
label_2b1f00:
    // 0x2b1f00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b1f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1f04: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2b1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1f08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b1f08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1f0c: 0x0  nop
    ctx->pc = 0x2b1f0cu;
    // NOP
    // 0x2b1f10: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
    ctx->pc = 0x2B1F10u;
    {
        const bool branch_taken_0x2b1f10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1f10) {
            ctx->pc = 0x2B1F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1F10u;
            // 0x2b1f14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1F18u;
    // 0x2b1f18: 0xc6000504  lwc1        $f0, 0x504($s0)
    ctx->pc = 0x2b1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1f1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b1f1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1f20: 0x0  nop
    ctx->pc = 0x2b1f20u;
    // NOP
    // 0x2b1f24: 0x45020041  bc1fl       . + 4 + (0x41 << 2)
    ctx->pc = 0x2B1F24u;
    {
        const bool branch_taken_0x2b1f24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1f24) {
            ctx->pc = 0x2B1F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1F24u;
            // 0x2b1f28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1F2Cu;
    // 0x2b1f2c: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x2b1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1f30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b1f30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1f34: 0x0  nop
    ctx->pc = 0x2b1f34u;
    // NOP
    // 0x2b1f38: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2B1F38u;
    {
        const bool branch_taken_0x2b1f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F38u;
        // 0x2b1f3c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f38) {
            ctx->pc = 0x2B2028u;
            goto label_2b2028;
        }
    }
    ctx->pc = 0x2B1F40u;
    // 0x2b1f40: 0xc440f290  lwc1        $f0, -0xD70($v0)
    ctx->pc = 0x2b1f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1f44: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B1F44u;
    {
        const bool branch_taken_0x2b1f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F44u;
        // 0x2b1f48: 0xe6000500  swc1        $f0, 0x500($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f44) {
            ctx->pc = 0x2B2028u;
            goto label_2b2028;
        }
    }
    ctx->pc = 0x2B1F4Cu;
label_2b1f4c:
    // 0x2b1f4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1F54u;
    SET_GPR_U32(ctx, 31, 0x2B1F5Cu);
    ctx->pc = 0x2B1F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F54u;
    // 0x2b1f58: 0x24a5f0e0  addiu       $a1, $a1, -0xF20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1F54u, 0x2B1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F5Cu;
label_2b1f5c:
    // 0x2b1f5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1F60u;
    {
        const bool branch_taken_0x2b1f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F60u;
        // 0x2b1f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f60) {
            ctx->pc = 0x2B1F78u;
            goto label_2b1f78;
        }
    }
    ctx->pc = 0x2B1F68u;
    // 0x2b1f68: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1F68u;
    SET_GPR_U32(ctx, 31, 0x2B1F70u);
    ctx->pc = 0x2B1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F68u;
    // 0x2b1f6c: 0x26050510  addiu       $a1, $s0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1F68u, 0x2B1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F70u;
label_2b1f70:
    // 0x2b1f70: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B1F70u;
    {
        const bool branch_taken_0x2b1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F70u;
        // 0x2b1f74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f70) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1F78u;
label_2b1f78:
    // 0x2b1f78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1f7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1F80u;
    SET_GPR_U32(ctx, 31, 0x2B1F88u);
    ctx->pc = 0x2B1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F80u;
    // 0x2b1f84: 0x24a5f0f8  addiu       $a1, $a1, -0xF08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1F80u, 0x2B1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F88u;
label_2b1f88:
    // 0x2b1f88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1F8Cu;
    {
        const bool branch_taken_0x2b1f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F8Cu;
        // 0x2b1f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f8c) {
            ctx->pc = 0x2B1FA4u;
            goto label_2b1fa4;
        }
    }
    ctx->pc = 0x2B1F94u;
    // 0x2b1f94: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1F94u;
    SET_GPR_U32(ctx, 31, 0x2B1F9Cu);
    ctx->pc = 0x2B1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F94u;
    // 0x2b1f98: 0x26050514  addiu       $a1, $s0, 0x514 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1F94u, 0x2B1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F9Cu;
label_2b1f9c:
    // 0x2b1f9c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B1F9Cu;
    {
        const bool branch_taken_0x2b1f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F9Cu;
        // 0x2b1fa0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f9c) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1FA4u;
label_2b1fa4:
    // 0x2b1fa4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1fac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1FACu;
    SET_GPR_U32(ctx, 31, 0x2B1FB4u);
    ctx->pc = 0x2B1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FACu;
    // 0x2b1fb0: 0x24a5f110  addiu       $a1, $a1, -0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1FACu, 0x2B1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FB4u;
label_2b1fb4:
    // 0x2b1fb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1FB8u;
    {
        const bool branch_taken_0x2b1fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FB8u;
        // 0x2b1fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fb8) {
            ctx->pc = 0x2B1FD0u;
            goto label_2b1fd0;
        }
    }
    ctx->pc = 0x2B1FC0u;
    // 0x2b1fc0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1FC0u;
    SET_GPR_U32(ctx, 31, 0x2B1FC8u);
    ctx->pc = 0x2B1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FC0u;
    // 0x2b1fc4: 0x26050518  addiu       $a1, $s0, 0x518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1FC0u, 0x2B1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FC8u;
label_2b1fc8:
    // 0x2b1fc8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B1FC8u;
    {
        const bool branch_taken_0x2b1fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC8u;
        // 0x2b1fcc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fc8) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1FD0u;
label_2b1fd0:
    // 0x2b1fd0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1fd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B1FD8u;
    SET_GPR_U32(ctx, 31, 0x2B1FE0u);
    ctx->pc = 0x2B1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FD8u;
    // 0x2b1fdc: 0x24a5f128  addiu       $a1, $a1, -0xED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B1FD8u, 0x2B1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FE0u;
label_2b1fe0:
    // 0x2b1fe0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1fe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1FE4u;
    {
        const bool branch_taken_0x2b1fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FE4u;
        // 0x2b1fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fe4) {
            ctx->pc = 0x2B1FFCu;
            goto label_2b1ffc;
        }
    }
    ctx->pc = 0x2B1FECu;
    // 0x2b1fec: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2B1FECu;
    SET_GPR_U32(ctx, 31, 0x2B1FF4u);
    ctx->pc = 0x2B1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FECu;
    // 0x2b1ff0: 0x2605051c  addiu       $a1, $s0, 0x51C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2B1FECu, 0x2B1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FF4u;
label_2b1ff4:
    // 0x2b1ff4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B1FF4u;
    {
        const bool branch_taken_0x2b1ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FF4u;
        // 0x2b1ff8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ff4) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B1FFCu;
label_2b1ffc:
    // 0x2b1ffc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b2000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2004: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B2004u;
    SET_GPR_U32(ctx, 31, 0x2B200Cu);
    ctx->pc = 0x2B2008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2004u;
    // 0x2b2008: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B2004u, 0x2B200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B200Cu;
label_2b200c:
    // 0x2b200c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2010u;
    {
        const bool branch_taken_0x2b2010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2010u;
        // 0x2b2014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2010) {
            ctx->pc = 0x2B2020u;
            goto label_2b2020;
        }
    }
    ctx->pc = 0x2B2018u;
    // 0x2b2018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2018u;
    {
        const bool branch_taken_0x2b2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2018u;
        // 0x2b201c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2018) {
            ctx->pc = 0x2B202Cu;
            goto label_2b202c;
        }
    }
    ctx->pc = 0x2B2020u;
label_2b2020:
    // 0x2b2020: 0xc09e056  jal         func_278158
    ctx->pc = 0x2B2020u;
    SET_GPR_U32(ctx, 31, 0x2B2028u);
    ctx->pc = 0x2B2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2020u;
    // 0x2b2024: 0x26050520  addiu       $a1, $s0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2B2020u, 0x2B2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2028u;
label_2b2028:
    // 0x2b2028: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b2028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b202c:
    // 0x2b202c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2030: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2B2030u;
    SET_GPR_U32(ctx, 31, 0x2B2038u);
    ctx->pc = 0x2B2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2030u;
    // 0x2b2034: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2B2030u, 0x2B2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2038u;
label_2b2038:
    // 0x2b2038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b2038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b203c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b203cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2048: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b2048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b204c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B204Cu;
        // 0x2b2050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2054u;
    // 0x2b2054: 0x0  nop
    ctx->pc = 0x2b2054u;
    // NOP
    ctx->pc = 0x2b2058u;
}

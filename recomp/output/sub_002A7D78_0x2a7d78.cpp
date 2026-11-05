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

// Function: sub_002A7D78
// Address: 0x2a7d78 - 0x2a8140
void sub_002A7D78_0x2a7d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7D78_0x2a7d78");
#endif

    switch (ctx->pc) {
        case 0x2a7decu: goto label_2a7dec;
        case 0x2a7df8u: goto label_2a7df8;
        case 0x2a7e04u: goto label_2a7e04;
        case 0x2a7e1cu: goto label_2a7e1c;
        case 0x2a7e28u: goto label_2a7e28;
        case 0x2a7e38u: goto label_2a7e38;
        case 0x2a7e58u: goto label_2a7e58;
        case 0x2a7e78u: goto label_2a7e78;
        case 0x2a7e98u: goto label_2a7e98;
        case 0x2a7eb0u: goto label_2a7eb0;
        case 0x2a7ec8u: goto label_2a7ec8;
        case 0x2a7ee0u: goto label_2a7ee0;
        case 0x2a7ef8u: goto label_2a7ef8;
        case 0x2a7f0cu: goto label_2a7f0c;
        case 0x2a7f24u: goto label_2a7f24;
        case 0x2a7f3cu: goto label_2a7f3c;
        case 0x2a7f54u: goto label_2a7f54;
        case 0x2a7f6cu: goto label_2a7f6c;
        case 0x2a7f84u: goto label_2a7f84;
        case 0x2a7f98u: goto label_2a7f98;
        case 0x2a7fb0u: goto label_2a7fb0;
        case 0x2a7fccu: goto label_2a7fcc;
        case 0x2a7fe8u: goto label_2a7fe8;
        case 0x2a8004u: goto label_2a8004;
        case 0x2a8020u: goto label_2a8020;
        case 0x2a8040u: goto label_2a8040;
        case 0x2a804cu: goto label_2a804c;
        case 0x2a8114u: goto label_2a8114;
        default: break;
    }

    ctx->pc = 0x2a7d78u;

    // 0x2a7d78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a7d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a7d7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a7d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2a7d80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a7d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a7d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7d88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7d8c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2a7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2a7d90: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2a7d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2a7d94: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2a7d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7d98: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a7d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2a7d9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7da0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a7da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7da4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7da8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2a7da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2a7dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7db0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2a7db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2a7db4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2a7db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7db8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2a7db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2a7dbc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a7dbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dc0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2a7dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2a7dc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a7dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dc8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2a7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2a7dcc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2a7dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a7dd0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2a7dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a7dd4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a7dd8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a7dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7ddc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a7ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a7de0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2a7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2a7de4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x2A7DE4u;
    SET_GPR_U32(ctx, 31, 0x2A7DECu);
    ctx->pc = 0x2A7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DE4u;
    // 0x2a7de8: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2A7DE4u, 0x2A7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DECu;
label_2a7dec:
    // 0x2a7dec: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2A7DECu;
    {
        const bool branch_taken_0x2a7dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DECu;
        // 0x2a7df0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7dec) {
            ctx->pc = 0x2A8040u;
            goto label_2a8040;
        }
    }
    ctx->pc = 0x2A7DF4u;
    // 0x2a7df4: 0x0  nop
    ctx->pc = 0x2a7df4u;
    // NOP
label_2a7df8:
    // 0x2a7df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dfc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7DFCu;
    SET_GPR_U32(ctx, 31, 0x2A7E04u);
    ctx->pc = 0x2A7E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DFCu;
    // 0x2a7e00: 0x24a5d870  addiu       $a1, $a1, -0x2790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7DFCu, 0x2A7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E04u;
label_2a7e04:
    // 0x2a7e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7e08: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A7E08u;
    {
        const bool branch_taken_0x2a7e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E08u;
        // 0x2a7e0c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e08) {
            ctx->pc = 0x2A7EB8u;
            goto label_2a7eb8;
        }
    }
    ctx->pc = 0x2A7E10u;
    // 0x2a7e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e14: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A7E14u;
    SET_GPR_U32(ctx, 31, 0x2A7E1Cu);
    ctx->pc = 0x2A7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E14u;
    // 0x2a7e18: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A7E14u, 0x2A7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E1Cu;
label_2a7e1c:
    // 0x2a7e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e20: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2A7E20u;
    SET_GPR_U32(ctx, 31, 0x2A7E28u);
    ctx->pc = 0x2A7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E20u;
    // 0x2a7e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2A7E20u, 0x2A7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E28u;
label_2a7e28:
    // 0x2a7e28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7E30u;
    SET_GPR_U32(ctx, 31, 0x2A7E38u);
    ctx->pc = 0x2A7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E30u;
    // 0x2a7e34: 0x24a5d880  addiu       $a1, $a1, -0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7E30u, 0x2A7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E38u;
label_2a7e38:
    // 0x2a7e38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7e3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7E3Cu;
    {
        const bool branch_taken_0x2a7e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E3Cu;
        // 0x2a7e40: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e3c) {
            ctx->pc = 0x2A7E4Cu;
            goto label_2a7e4c;
        }
    }
    ctx->pc = 0x2A7E44u;
    // 0x2a7e44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A7E44u;
    {
        const bool branch_taken_0x2a7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E44u;
        // 0x2a7e48: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e44) {
            ctx->pc = 0x2A7EA4u;
            goto label_2a7ea4;
        }
    }
    ctx->pc = 0x2A7E4Cu;
label_2a7e4c:
    // 0x2a7e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7E50u;
    SET_GPR_U32(ctx, 31, 0x2A7E58u);
    ctx->pc = 0x2A7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E50u;
    // 0x2a7e54: 0x24a5d890  addiu       $a1, $a1, -0x2770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7E50u, 0x2A7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E58u;
label_2a7e58:
    // 0x2a7e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7e5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7E5Cu;
    {
        const bool branch_taken_0x2a7e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E5Cu;
        // 0x2a7e60: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e5c) {
            ctx->pc = 0x2A7E6Cu;
            goto label_2a7e6c;
        }
    }
    ctx->pc = 0x2A7E64u;
    // 0x2a7e64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A7E64u;
    {
        const bool branch_taken_0x2a7e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E64u;
        // 0x2a7e68: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e64) {
            ctx->pc = 0x2A7EA4u;
            goto label_2a7ea4;
        }
    }
    ctx->pc = 0x2A7E6Cu;
label_2a7e6c:
    // 0x2a7e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7E70u;
    SET_GPR_U32(ctx, 31, 0x2A7E78u);
    ctx->pc = 0x2A7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E70u;
    // 0x2a7e74: 0x24a5d8a0  addiu       $a1, $a1, -0x2760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7E70u, 0x2A7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E78u;
label_2a7e78:
    // 0x2a7e78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7e7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7E7Cu;
    {
        const bool branch_taken_0x2a7e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E7Cu;
        // 0x2a7e80: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e7c) {
            ctx->pc = 0x2A7E8Cu;
            goto label_2a7e8c;
        }
    }
    ctx->pc = 0x2A7E84u;
    // 0x2a7e84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7E84u;
    {
        const bool branch_taken_0x2a7e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E84u;
        // 0x2a7e88: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e84) {
            ctx->pc = 0x2A7EA4u;
            goto label_2a7ea4;
        }
    }
    ctx->pc = 0x2A7E8Cu;
label_2a7e8c:
    // 0x2a7e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7E90u;
    SET_GPR_U32(ctx, 31, 0x2A7E98u);
    ctx->pc = 0x2A7E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E90u;
    // 0x2a7e94: 0x24a5d8b0  addiu       $a1, $a1, -0x2750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7E90u, 0x2A7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E98u;
label_2a7e98:
    // 0x2a7e98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7e9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a7e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a7ea0: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x2a7ea0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2a7ea4:
    // 0x2a7ea4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ea8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A7EA8u;
    SET_GPR_U32(ctx, 31, 0x2A7EB0u);
    ctx->pc = 0x2A7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7EA8u;
    // 0x2a7eac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A7EA8u, 0x2A7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EB0u;
label_2a7eb0:
    // 0x2a7eb0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2A7EB0u;
    {
        const bool branch_taken_0x2a7eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EB0u;
        // 0x2a7eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7eb0) {
            ctx->pc = 0x2A8044u;
            goto label_2a8044;
        }
    }
    ctx->pc = 0x2A7EB8u;
label_2a7eb8:
    // 0x2a7eb8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7ebc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ec0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7EC0u;
    SET_GPR_U32(ctx, 31, 0x2A7EC8u);
    ctx->pc = 0x2A7EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7EC0u;
    // 0x2a7ec4: 0x24a5d8c0  addiu       $a1, $a1, -0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7EC0u, 0x2A7EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EC8u;
label_2a7ec8:
    // 0x2a7ec8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7ECCu;
    {
        const bool branch_taken_0x2a7ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7ECCu;
        // 0x2a7ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ecc) {
            ctx->pc = 0x2A7EE8u;
            goto label_2a7ee8;
        }
    }
    ctx->pc = 0x2A7ED4u;
    // 0x2a7ed4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ed8: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2A7ED8u;
    SET_GPR_U32(ctx, 31, 0x2A7EE0u);
    ctx->pc = 0x2A7EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7ED8u;
    // 0x2a7edc: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2A7ED8u, 0x2A7EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EE0u;
label_2a7ee0:
    // 0x2a7ee0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2A7EE0u;
    {
        const bool branch_taken_0x2a7ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EE0u;
        // 0x2a7ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ee0) {
            ctx->pc = 0x2A8044u;
            goto label_2a8044;
        }
    }
    ctx->pc = 0x2A7EE8u;
label_2a7ee8:
    // 0x2a7ee8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7eec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ef0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7EF0u;
    SET_GPR_U32(ctx, 31, 0x2A7EF8u);
    ctx->pc = 0x2A7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7EF0u;
    // 0x2a7ef4: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7EF0u, 0x2A7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EF8u;
label_2a7ef8:
    // 0x2a7ef8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7efc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7EFCu;
    {
        const bool branch_taken_0x2a7efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EFCu;
        // 0x2a7f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7efc) {
            ctx->pc = 0x2A7F14u;
            goto label_2a7f14;
        }
    }
    ctx->pc = 0x2A7F04u;
    // 0x2a7f04: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A7F04u;
    SET_GPR_U32(ctx, 31, 0x2A7F0Cu);
    ctx->pc = 0x2A7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F04u;
    // 0x2a7f08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A7F04u, 0x2A7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F0Cu;
label_2a7f0c:
    // 0x2a7f0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2A7F0Cu;
    {
        const bool branch_taken_0x2a7f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F0Cu;
        // 0x2a7f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f0c) {
            ctx->pc = 0x2A8044u;
            goto label_2a8044;
        }
    }
    ctx->pc = 0x2A7F14u;
label_2a7f14:
    // 0x2a7f14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7f18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F24u);
    ctx->pc = 0x2A7F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F1Cu;
    // 0x2a7f20: 0x24a5d8d8  addiu       $a1, $a1, -0x2728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7F1Cu, 0x2A7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F24u;
label_2a7f24:
    // 0x2a7f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7F28u;
    {
        const bool branch_taken_0x2a7f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F28u;
        // 0x2a7f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f28) {
            ctx->pc = 0x2A7F44u;
            goto label_2a7f44;
        }
    }
    ctx->pc = 0x2A7F30u;
    // 0x2a7f30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a7f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a7f34: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2A7F34u;
    SET_GPR_U32(ctx, 31, 0x2A7F3Cu);
    ctx->pc = 0x2A7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F34u;
    // 0x2a7f38: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2A7F34u, 0x2A7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F3Cu;
label_2a7f3c:
    // 0x2a7f3c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2A7F3Cu;
    {
        const bool branch_taken_0x2a7f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F3Cu;
        // 0x2a7f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f3c) {
            ctx->pc = 0x2A8044u;
            goto label_2a8044;
        }
    }
    ctx->pc = 0x2A7F44u;
label_2a7f44:
    // 0x2a7f44: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F54u);
    ctx->pc = 0x2A7F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F4Cu;
    // 0x2a7f50: 0x24a5d8e8  addiu       $a1, $a1, -0x2718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7F4Cu, 0x2A7F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F54u;
label_2a7f54:
    // 0x2a7f54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7f58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7F58u;
    {
        const bool branch_taken_0x2a7f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F58u;
        // 0x2a7f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f58) {
            ctx->pc = 0x2A7F74u;
            goto label_2a7f74;
        }
    }
    ctx->pc = 0x2A7F60u;
    // 0x2a7f60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a7f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7f64: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2A7F64u;
    SET_GPR_U32(ctx, 31, 0x2A7F6Cu);
    ctx->pc = 0x2A7F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F64u;
    // 0x2a7f68: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2A7F64u, 0x2A7F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F6Cu;
label_2a7f6c:
    // 0x2a7f6c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2A7F6Cu;
    {
        const bool branch_taken_0x2a7f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F6Cu;
        // 0x2a7f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f6c) {
            ctx->pc = 0x2A8044u;
            goto label_2a8044;
        }
    }
    ctx->pc = 0x2A7F74u;
label_2a7f74:
    // 0x2a7f74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7f78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F84u);
    ctx->pc = 0x2A7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F7Cu;
    // 0x2a7f80: 0x24a5d8f8  addiu       $a1, $a1, -0x2708 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7F7Cu, 0x2A7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F84u;
label_2a7f84:
    // 0x2a7f84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7f88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7F88u;
    {
        const bool branch_taken_0x2a7f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F88u;
        // 0x2a7f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f88) {
            ctx->pc = 0x2A7FA0u;
            goto label_2a7fa0;
        }
    }
    ctx->pc = 0x2A7F90u;
    // 0x2a7f90: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A7F90u;
    SET_GPR_U32(ctx, 31, 0x2A7F98u);
    ctx->pc = 0x2A7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F90u;
    // 0x2a7f94: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A7F90u, 0x2A7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F98u;
label_2a7f98:
    // 0x2a7f98: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A7F98u;
    {
        const bool branch_taken_0x2a7f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F98u;
        // 0x2a7f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f98) {
            ctx->pc = 0x2A8044u;
            goto label_2a8044;
        }
    }
    ctx->pc = 0x2A7FA0u;
label_2a7fa0:
    // 0x2a7fa0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7fa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fa8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7FA8u;
    SET_GPR_U32(ctx, 31, 0x2A7FB0u);
    ctx->pc = 0x2A7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FA8u;
    // 0x2a7fac: 0x24a5d908  addiu       $a1, $a1, -0x26F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7FA8u, 0x2A7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FB0u;
label_2a7fb0:
    // 0x2a7fb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7fb4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A7FB4u;
    {
        const bool branch_taken_0x2a7fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fb4) {
            ctx->pc = 0x2A7FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7FB4u;
            // 0x2a7fb8: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A802Cu;
            goto label_2a802c;
        }
    }
    ctx->pc = 0x2A7FBCu;
    // 0x2a7fbc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7fc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7FC4u;
    SET_GPR_U32(ctx, 31, 0x2A7FCCu);
    ctx->pc = 0x2A7FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FC4u;
    // 0x2a7fc8: 0x24a5d910  addiu       $a1, $a1, -0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7FC4u, 0x2A7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FCCu;
label_2a7fcc:
    // 0x2a7fcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7fd0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A7FD0u;
    {
        const bool branch_taken_0x2a7fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fd0) {
            ctx->pc = 0x2A7FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7FD0u;
            // 0x2a7fd4: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A802Cu;
            goto label_2a802c;
        }
    }
    ctx->pc = 0x2A7FD8u;
    // 0x2a7fd8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fe0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7FE0u;
    SET_GPR_U32(ctx, 31, 0x2A7FE8u);
    ctx->pc = 0x2A7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FE0u;
    // 0x2a7fe4: 0x24a5d918  addiu       $a1, $a1, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7FE0u, 0x2A7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FE8u;
label_2a7fe8:
    // 0x2a7fe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7fec: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A7FECu;
    {
        const bool branch_taken_0x2a7fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fec) {
            ctx->pc = 0x2A7FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7FECu;
            // 0x2a7ff0: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A802Cu;
            goto label_2a802c;
        }
    }
    ctx->pc = 0x2A7FF4u;
    // 0x2a7ff4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a7ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ffc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A7FFCu;
    SET_GPR_U32(ctx, 31, 0x2A8004u);
    ctx->pc = 0x2A8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FFCu;
    // 0x2a8000: 0x24a5d920  addiu       $a1, $a1, -0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A7FFCu, 0x2A8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8004u;
label_2a8004:
    // 0x2a8004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a8004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8008: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8008u;
    {
        const bool branch_taken_0x2a8008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8008) {
            ctx->pc = 0x2A800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8008u;
            // 0x2a800c: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A802Cu;
            goto label_2a802c;
        }
    }
    ctx->pc = 0x2A8010u;
    // 0x2a8010: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a8010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a8014: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8018: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A8018u;
    SET_GPR_U32(ctx, 31, 0x2A8020u);
    ctx->pc = 0x2A801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8018u;
    // 0x2a801c: 0x24a5d928  addiu       $a1, $a1, -0x26D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A8018u, 0x2A8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8020u;
label_2a8020:
    // 0x2a8020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a8020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8024u;
    {
        const bool branch_taken_0x2a8024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8024u;
        // 0x2a8028: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8024) {
            ctx->pc = 0x2A8040u;
            goto label_2a8040;
        }
    }
    ctx->pc = 0x2A802Cu;
label_2a802c:
    // 0x2a802c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8030: 0x24a50034  addiu       $a1, $a1, 0x34
    ctx->pc = 0x2a8030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x2a8034: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a8034u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2a8038: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2A8038u;
    SET_GPR_U32(ctx, 31, 0x2A8040u);
    ctx->pc = 0x2A803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8038u;
    // 0x2a803c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2A8038u, 0x2A8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8040u;
label_2a8040:
    // 0x2a8040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8044:
    // 0x2a8044: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2A8044u;
    SET_GPR_U32(ctx, 31, 0x2A804Cu);
    ctx->pc = 0x2A8048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8044u;
    // 0x2a8048: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2A8044u, 0x2A804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A804Cu;
label_2a804c:
    // 0x2a804c: 0x5440ff6a  bnel        $v0, $zero, . + 4 + (-0x96 << 2)
    ctx->pc = 0x2A804Cu;
    {
        const bool branch_taken_0x2a804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a804c) {
            ctx->pc = 0x2A8050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A804Cu;
            // 0x2a8050: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7df8;
        }
    }
    ctx->pc = 0x2A8054u;
    // 0x2a8054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a8054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8058: 0x12820015  beq         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A8058u;
    {
        const bool branch_taken_0x2a8058 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8058u;
        // 0x2a805c: 0x2a820003  slti        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8058) {
            ctx->pc = 0x2A80B0u;
            goto label_2a80b0;
        }
    }
    ctx->pc = 0x2A8060u;
    // 0x2a8060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8060u;
    {
        const bool branch_taken_0x2a8060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8060u;
        // 0x2a8064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8060) {
            ctx->pc = 0x2A8078u;
            goto label_2a8078;
        }
    }
    ctx->pc = 0x2A8068u;
    // 0x2a8068: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A8068u;
    {
        const bool branch_taken_0x2a8068 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8068u;
        // 0x2a806c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8068) {
            ctx->pc = 0x2A8094u;
            goto label_2a8094;
        }
    }
    ctx->pc = 0x2A8070u;
    // 0x2a8070: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2A8070u;
    {
        const bool branch_taken_0x2a8070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8070) {
            ctx->pc = 0x2A810Cu;
            goto label_2a810c;
        }
    }
    ctx->pc = 0x2A8078u;
label_2a8078:
    // 0x2a8078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a8078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a807c: 0x12820011  beq         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A807Cu;
    {
        const bool branch_taken_0x2a807c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A807Cu;
        // 0x2a8080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a807c) {
            ctx->pc = 0x2A80C4u;
            goto label_2a80c4;
        }
    }
    ctx->pc = 0x2A8084u;
    // 0x2a8084: 0x12820016  beq         $s4, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8084u;
    {
        const bool branch_taken_0x2a8084 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8084u;
        // 0x2a8088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8084) {
            ctx->pc = 0x2A80E0u;
            goto label_2a80e0;
        }
    }
    ctx->pc = 0x2A808Cu;
    // 0x2a808c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A808Cu;
    {
        const bool branch_taken_0x2a808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a808c) {
            ctx->pc = 0x2A810Cu;
            goto label_2a810c;
        }
    }
    ctx->pc = 0x2A8094u;
label_2a8094:
    // 0x2a8094: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a8094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8098: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a809c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2a809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80a0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2a80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2a80a4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2a80a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2a80a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A80A8u;
    {
        const bool branch_taken_0x2a80a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80A8u;
        // 0x2a80ac: 0xe6420004  swc1        $f2, 0x4($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80a8) {
            ctx->pc = 0x2A8108u;
            goto label_2a8108;
        }
    }
    ctx->pc = 0x2A80B0u;
label_2a80b0:
    // 0x2a80b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a80b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80b4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a80b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80b8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2a80b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2a80bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A80BCu;
    {
        const bool branch_taken_0x2a80bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80BCu;
        // 0x2a80c0: 0xe6410010  swc1        $f1, 0x10($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80bc) {
            ctx->pc = 0x2A8108u;
            goto label_2a8108;
        }
    }
    ctx->pc = 0x2A80C4u;
label_2a80c4:
    // 0x2a80c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80c8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a80c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a80cc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2a80ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80d0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2a80d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2a80d4: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x2a80d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2a80d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A80D8u;
    {
        const bool branch_taken_0x2a80d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80D8u;
        // 0x2a80dc: 0xe6420018  swc1        $f2, 0x18($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80d8) {
            ctx->pc = 0x2A8108u;
            goto label_2a8108;
        }
    }
    ctx->pc = 0x2A80E0u;
label_2a80e0:
    // 0x2a80e0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2a80e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a80e8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2a80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a80ec: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2a80ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a80f0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2a80f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80f4: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x2a80f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2a80f8: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2a80f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2a80fc: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x2a80fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2a8100: 0xe6430028  swc1        $f3, 0x28($s2)
    ctx->pc = 0x2a8100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2a8104: 0xe644002c  swc1        $f4, 0x2C($s2)
    ctx->pc = 0x2a8104u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_2a8108:
    // 0x2a8108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a810c:
    // 0x2a810c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A810Cu;
    SET_GPR_U32(ctx, 31, 0x2A8114u);
    ctx->pc = 0x2A8110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A810Cu;
    // 0x2a8110: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A810Cu, 0x2A8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8114u;
label_2a8114:
    // 0x2a8114: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2a8114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8118: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2a8118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a811c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a811cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a8120: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2a8120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a8124: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2a8124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8128: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2a8128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a812c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a8130: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2a8130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a8134: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8134u;
        // 0x2a8138: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A813Cu;
    // 0x2a813c: 0x0  nop
    ctx->pc = 0x2a813cu;
    // NOP
    ctx->pc = 0x2a8140u;
}

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

// Function: sub_00161D58
// Address: 0x161d58 - 0x1624e8
void sub_00161D58_0x161d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161D58_0x161d58");
#endif

    switch (ctx->pc) {
        case 0x161da4u: goto label_161da4;
        case 0x161de0u: goto label_161de0;
        case 0x161e08u: goto label_161e08;
        case 0x161e4cu: goto label_161e4c;
        case 0x161ec0u: goto label_161ec0;
        case 0x161f08u: goto label_161f08;
        case 0x161f18u: goto label_161f18;
        case 0x161f30u: goto label_161f30;
        case 0x161f68u: goto label_161f68;
        case 0x161fc4u: goto label_161fc4;
        case 0x162020u: goto label_162020;
        case 0x162038u: goto label_162038;
        case 0x162044u: goto label_162044;
        case 0x162050u: goto label_162050;
        case 0x16205cu: goto label_16205c;
        case 0x162068u: goto label_162068;
        case 0x162080u: goto label_162080;
        case 0x1620d8u: goto label_1620d8;
        case 0x1620f0u: goto label_1620f0;
        case 0x1620fcu: goto label_1620fc;
        case 0x162108u: goto label_162108;
        case 0x162110u: goto label_162110;
        case 0x162130u: goto label_162130;
        case 0x16213cu: goto label_16213c;
        case 0x162148u: goto label_162148;
        case 0x162154u: goto label_162154;
        case 0x16217cu: goto label_16217c;
        case 0x162190u: goto label_162190;
        case 0x1621a0u: goto label_1621a0;
        case 0x1621bcu: goto label_1621bc;
        case 0x1621c8u: goto label_1621c8;
        case 0x1621d4u: goto label_1621d4;
        case 0x1621e0u: goto label_1621e0;
        case 0x1621f0u: goto label_1621f0;
        case 0x16220cu: goto label_16220c;
        case 0x162214u: goto label_162214;
        case 0x162228u: goto label_162228;
        case 0x162240u: goto label_162240;
        case 0x162250u: goto label_162250;
        case 0x162268u: goto label_162268;
        case 0x162274u: goto label_162274;
        case 0x16227cu: goto label_16227c;
        case 0x162284u: goto label_162284;
        case 0x162310u: goto label_162310;
        case 0x162318u: goto label_162318;
        case 0x162328u: goto label_162328;
        case 0x162338u: goto label_162338;
        case 0x162358u: goto label_162358;
        case 0x162368u: goto label_162368;
        case 0x162378u: goto label_162378;
        case 0x162388u: goto label_162388;
        case 0x1623b0u: goto label_1623b0;
        case 0x1623c4u: goto label_1623c4;
        case 0x1623ccu: goto label_1623cc;
        case 0x1623f0u: goto label_1623f0;
        case 0x162430u: goto label_162430;
        case 0x162454u: goto label_162454;
        case 0x16246cu: goto label_16246c;
        case 0x162484u: goto label_162484;
        case 0x1624b0u: goto label_1624b0;
        default: break;
    }

    ctx->pc = 0x161d58u;

    // 0x161d58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x161d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x161d5c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x161d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x161d60: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x161d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x161d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d68: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x161d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x161d6c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x161d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x161d70: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x161d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x161d74: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x161d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x161d78: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x161d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x161d7c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x161d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x161d80: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x161d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x161d84: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x161d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x161d88: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x161d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x161d8c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x161d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x161d90: 0x104001c8  beqz        $v0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x161D90u;
    {
        const bool branch_taken_0x161d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D90u;
        // 0x161d94: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d90) {
            ctx->pc = 0x1624B4u;
            goto label_1624b4;
        }
    }
    ctx->pc = 0x161D98u;
    // 0x161d98: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x161d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x161d9c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x161D9Cu;
    SET_GPR_U32(ctx, 31, 0x161DA4u);
    ctx->pc = 0x161DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D9Cu;
    // 0x161da0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x161D9Cu, 0x161DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161DA4u;
label_161da4:
    // 0x161da4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x161da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x161da8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x161da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x161dac: 0xc454ef0c  lwc1        $f20, -0x10F4($v0)
    ctx->pc = 0x161dacu;
    { uint32_t bits = FAST_READ32(0x43EF0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x161db0: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x161db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x161db4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161db8: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x161db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x161dbc: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DBCu;
        // 0x161dc0: 0x8fb50020  lw          $s5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161EA8u;
            goto label_161ea8;
        }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x161dc8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161dcc: 0x24529c14  addiu       $s2, $v0, -0x63EC
    ctx->pc = 0x161dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x161dd0: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x161dd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x161dd4: 0x2654fefc  addiu       $s4, $s2, -0x104
    ctx->pc = 0x161dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967036));
    // 0x161dd8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161ddc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_161de0:
    // 0x161de0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x161de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161de8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161dec: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x161DECu;
    {
        const bool branch_taken_0x161dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DECu;
        // 0x161df0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dec) {
            ctx->pc = 0x161E88u;
            goto label_161e88;
        }
    }
    ctx->pc = 0x161DF4u;
    // 0x161df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161df8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x161df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x161dfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x161dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e00: 0xc04f112  jal         func_13C448
    ctx->pc = 0x161E00u;
    SET_GPR_U32(ctx, 31, 0x161E08u);
    ctx->pc = 0x161E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E00u;
    // 0x161e04: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x161E00u, 0x161E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E08u;
label_161e08:
    // 0x161e08: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E08u;
    {
        const bool branch_taken_0x161e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x161E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E08u;
        // 0x161e0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e08) {
            ctx->pc = 0x161E18u;
            goto label_161e18;
        }
    }
    ctx->pc = 0x161E10u;
    // 0x161e10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x161E10u;
    {
        const bool branch_taken_0x161e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E10u;
        // 0x161e14: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e10) {
            ctx->pc = 0x161EA8u;
            goto label_161ea8;
        }
    }
    ctx->pc = 0x161E18u;
label_161e18:
    // 0x161e18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x161e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161e20: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x161e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x161e24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161e28: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E28u;
    {
        const bool branch_taken_0x161e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e28) {
            ctx->pc = 0x161E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E28u;
            // 0x161e2c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E38u;
            goto label_161e38;
        }
    }
    ctx->pc = 0x161E30u;
    // 0x161e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161E30u;
    {
        const bool branch_taken_0x161e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E30u;
        // 0x161e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e30) {
            ctx->pc = 0x161E40u;
            goto label_161e40;
        }
    }
    ctx->pc = 0x161E38u;
label_161e38:
    // 0x161e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161e3c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_161e40:
    // 0x161e40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x161e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x161e44: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x161E44u;
    SET_GPR_U32(ctx, 31, 0x161E4Cu);
    ctx->pc = 0x161E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E44u;
    // 0x161e48: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x161E44u, 0x161E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E4Cu;
label_161e4c:
    // 0x161e4c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x161e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161e50: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x161e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161e54: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x161e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x161e58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x161e58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x161e5c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x161e5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x161e60: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x161e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x161e64: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x161e64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x161e68: 0x14930008  bne         $a0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x161E68u;
    {
        const bool branch_taken_0x161e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x161E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E68u;
        // 0x161e6c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e68) {
            ctx->pc = 0x161E8Cu;
            goto label_161e8c;
        }
    }
    ctx->pc = 0x161E70u;
    // 0x161e70: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x161e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e74: 0x0  nop
    ctx->pc = 0x161e74u;
    // NOP
    // 0x161e78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161E78u;
    {
        const bool branch_taken_0x161e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E78u;
        // 0x161e7c: 0x32a200ff  andi        $v0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e78) {
            ctx->pc = 0x161E88u;
            goto label_161e88;
        }
    }
    ctx->pc = 0x161E80u;
    // 0x161e80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x161e80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x161e84: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x161e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_161e88:
    // 0x161e88: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x161e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_161e8c:
    // 0x161e8c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x161e8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161e90: 0x2ea30010  sltiu       $v1, $s5, 0x10
    ctx->pc = 0x161e90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x161e94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161E94u;
    {
        const bool branch_taken_0x161e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E94u;
        // 0x161e98: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e94) {
            ctx->pc = 0x161EA8u;
            goto label_161ea8;
        }
    }
    ctx->pc = 0x161E9Cu;
    // 0x161e9c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x161e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x161ea0: 0x5462ffcf  bnel        $v1, $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x161EA0u;
    {
        const bool branch_taken_0x161ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161ea0) {
            ctx->pc = 0x161EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EA0u;
            // 0x161ea4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161de0;
        }
    }
    ctx->pc = 0x161EA8u;
label_161ea8:
    // 0x161ea8: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x161ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x161eac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161eb0: 0x1082017c  beq         $a0, $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x161EB0u;
    {
        const bool branch_taken_0x161eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x161EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EB0u;
        // 0x161eb4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161eb0) {
            ctx->pc = 0x1624A4u;
            goto label_1624a4;
        }
    }
    ctx->pc = 0x161EB8u;
    // 0x161eb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x161ebc: 0x0  nop
    ctx->pc = 0x161ebcu;
    // NOP
label_161ec0:
    // 0x161ec0: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x161ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x161ec4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x161ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x161ec8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x161ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x161ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161ed0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x161ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161ed4: 0x1260016b  beqz        $s3, . + 4 + (0x16B << 2)
    ctx->pc = 0x161ED4u;
    {
        const bool branch_taken_0x161ed4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x161ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161ED4u;
        // 0x161ed8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ed4) {
            ctx->pc = 0x162484u;
            goto label_162484;
        }
    }
    ctx->pc = 0x161EDCu;
    // 0x161edc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x161edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x161ee0: 0x24849c14  addiu       $a0, $a0, -0x63EC
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941716));
    // 0x161ee4: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x161ee8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x161ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161eec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x161eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ef0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x161ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161ef4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x161ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x161ef8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x161ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x161efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f00: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x161F00u;
    SET_GPR_U32(ctx, 31, 0x161F08u);
    ctx->pc = 0x161F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F00u;
    // 0x161f04: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x161F00u, 0x161F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F08u;
label_161f08:
    // 0x161f08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161F08u;
    {
        const bool branch_taken_0x161f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F08u;
        // 0x161f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f08) {
            ctx->pc = 0x161F18u;
            goto label_161f18;
        }
    }
    ctx->pc = 0x161F10u;
    // 0x161f10: 0xc04f452  jal         func_13D148
    ctx->pc = 0x161F10u;
    SET_GPR_U32(ctx, 31, 0x161F18u);
    ctx->pc = 0x161F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F10u;
    // 0x161f14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x161F10u, 0x161F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F18u;
label_161f18:
    // 0x161f18: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x161f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x161f1c: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x161F1Cu;
    {
        const bool branch_taken_0x161f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F1Cu;
        // 0x161f20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f1c) {
            ctx->pc = 0x1623A8u;
            goto label_1623a8;
        }
    }
    ctx->pc = 0x161F24u;
    // 0x161f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f28: 0xc04f112  jal         func_13C448
    ctx->pc = 0x161F28u;
    SET_GPR_U32(ctx, 31, 0x161F30u);
    ctx->pc = 0x161F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F28u;
    // 0x161f2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x161F28u, 0x161F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F30u;
label_161f30:
    // 0x161f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f34: 0x1443011c  bne         $v0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x161F34u;
    {
        const bool branch_taken_0x161f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x161F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F34u;
        // 0x161f38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f34) {
            ctx->pc = 0x1623A8u;
            goto label_1623a8;
        }
    }
    ctx->pc = 0x161F3Cu;
    // 0x161f3c: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x161f3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x161f40: 0x14750119  bne         $v1, $s5, . + 4 + (0x119 << 2)
    ctx->pc = 0x161F40u;
    {
        const bool branch_taken_0x161f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x161F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F40u;
        // 0x161f44: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f40) {
            ctx->pc = 0x1623A8u;
            goto label_1623a8;
        }
    }
    ctx->pc = 0x161F48u;
    // 0x161f48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x161f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f4c: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x161f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x161f50: 0x26250228  addiu       $a1, $s1, 0x228
    ctx->pc = 0x161f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x161f54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x161f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x161f58: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x161f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x161f5c: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x161f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
    // 0x161f60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x161f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x161f64: 0x0  nop
    ctx->pc = 0x161f64u;
    // NOP
label_161f68:
    // 0x161f68: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x161f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161f6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161f70: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x161F70u;
    {
        const bool branch_taken_0x161f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F70u;
        // 0x161f74: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f70) {
            ctx->pc = 0x162390u;
            goto label_162390;
        }
    }
    ctx->pc = 0x161F78u;
    // 0x161f78: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x161f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x161f7c: 0x8c56022c  lw          $s6, 0x22C($v0)
    ctx->pc = 0x161f7cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x161f80: 0x2ac30009  slti        $v1, $s6, 0x9
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x161f84: 0x14600103  bnez        $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x161F84u;
    {
        const bool branch_taken_0x161f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F84u;
        // 0x161f88: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f84) {
            ctx->pc = 0x162394u;
            goto label_162394;
        }
    }
    ctx->pc = 0x161F8Cu;
    // 0x161f8c: 0x2ac2000c  slti        $v0, $s6, 0xC
    ctx->pc = 0x161f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x161f90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x161F90u;
    {
        const bool branch_taken_0x161f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161f90) {
            ctx->pc = 0x161F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161F90u;
            // 0x161f94: 0x8e220214  lw          $v0, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161FA8u;
            goto label_161fa8;
        }
    }
    ctx->pc = 0x161F98u;
    // 0x161f98: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x161f9c: 0x16c200fd  bne         $s6, $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x161F9Cu;
    {
        const bool branch_taken_0x161f9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x161FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F9Cu;
        // 0x161fa0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f9c) {
            ctx->pc = 0x162394u;
            goto label_162394;
        }
    }
    ctx->pc = 0x161FA4u;
    // 0x161fa4: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x161fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_161fa8:
    // 0x161fa8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x161fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x161fac: 0x8e2602e0  lw          $a2, 0x2E0($s1)
    ctx->pc = 0x161facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x161fb0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x161fb4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x161fb8: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x161fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x161fbc: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x161FBCu;
    SET_GPR_U32(ctx, 31, 0x161FC4u);
    ctx->pc = 0x161FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161FBCu;
    // 0x161fc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x161FBCu, 0x161FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161FC4u;
label_161fc4:
    // 0x161fc4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x161fc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fc8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x161fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x161fcc: 0x38620009  xori        $v0, $v1, 0x9
    ctx->pc = 0x161fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x161fd0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x161fd0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161fd4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161FD4u;
    {
        const bool branch_taken_0x161fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FD4u;
        // 0x161fd8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fd4) {
            ctx->pc = 0x161FE4u;
            goto label_161fe4;
        }
    }
    ctx->pc = 0x161FDCu;
    // 0x161fdc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x161fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fe0: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x161fe0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_161fe4:
    // 0x161fe4: 0x8e230354  lw          $v1, 0x354($s1)
    ctx->pc = 0x161fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 852)));
    // 0x161fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x161fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fec: 0x1064004a  beq         $v1, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x161FECu;
    {
        const bool branch_taken_0x161fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x161FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FECu;
        // 0x161ff0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fec) {
            ctx->pc = 0x162118u;
            goto label_162118;
        }
    }
    ctx->pc = 0x161FF4u;
    // 0x161ff4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x161ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x161ff8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FF8u;
    {
        const bool branch_taken_0x161ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FF8u;
        // 0x161ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ff8) {
            ctx->pc = 0x162010u;
            goto label_162010;
        }
    }
    ctx->pc = 0x162000u;
    // 0x162000: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x162000u;
    {
        const bool branch_taken_0x162000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162000u;
        // 0x162004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162000) {
            ctx->pc = 0x1621E8u;
            goto label_1621e8;
        }
    }
    ctx->pc = 0x162008u;
    // 0x162008: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x162008u;
    {
        const bool branch_taken_0x162008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162008) {
            ctx->pc = 0x16227Cu;
            goto label_16227c;
        }
    }
    ctx->pc = 0x162010u;
label_162010:
    // 0x162010: 0x1462009a  bne         $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x162010u;
    {
        const bool branch_taken_0x162010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x162014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162010u;
        // 0x162014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162010) {
            ctx->pc = 0x16227Cu;
            goto label_16227c;
        }
    }
    ctx->pc = 0x162018u;
    // 0x162018: 0xc04f13c  jal         func_13C4F0
    ctx->pc = 0x162018u;
    SET_GPR_U32(ctx, 31, 0x162020u);
    ctx->pc = 0x16201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162018u;
    // 0x16201c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4F0u, 0x162018u, 0x162020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162020u;
label_162020:
    // 0x162020: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162020u;
    {
        const bool branch_taken_0x162020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162020u;
        // 0x162024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162020) {
            ctx->pc = 0x16203Cu;
            goto label_16203c;
        }
    }
    ctx->pc = 0x162028u;
    // 0x162028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16202c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162030: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x162030u;
    SET_GPR_U32(ctx, 31, 0x162038u);
    ctx->pc = 0x162034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162030u;
    // 0x162034: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x162030u, 0x162038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162038u;
label_162038:
    // 0x162038: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16203c:
    // 0x16203c: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x16203Cu;
    SET_GPR_U32(ctx, 31, 0x162044u);
    ctx->pc = 0x162040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16203Cu;
    // 0x162040: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x16203Cu, 0x162044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162044u;
label_162044:
    // 0x162044: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162048: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x162048u;
    SET_GPR_U32(ctx, 31, 0x162050u);
    ctx->pc = 0x16204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162048u;
    // 0x16204c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x162048u, 0x162050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162050u;
label_162050:
    // 0x162050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162054: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x162054u;
    SET_GPR_U32(ctx, 31, 0x16205Cu);
    ctx->pc = 0x162058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162054u;
    // 0x162058: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x162054u, 0x16205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16205Cu;
label_16205c:
    // 0x16205c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162060: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x162060u;
    SET_GPR_U32(ctx, 31, 0x162068u);
    ctx->pc = 0x162064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162060u;
    // 0x162064: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x162060u, 0x162068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162068u;
label_162068:
    // 0x162068: 0x8e22033c  lw          $v0, 0x33C($s1)
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x16206c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16206Cu;
    {
        const bool branch_taken_0x16206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16206c) {
            ctx->pc = 0x1620ACu;
            goto label_1620ac;
        }
    }
    ctx->pc = 0x162074u;
    // 0x162074: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x162074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x162078: 0xc043ed0  jal         func_10FB40
    ctx->pc = 0x162078u;
    SET_GPR_U32(ctx, 31, 0x162080u);
    ctx->pc = 0x16207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162078u;
    // 0x16207c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB40u, 0x162078u, 0x162080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162080u;
label_162080:
    // 0x162080: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162080u;
    {
        const bool branch_taken_0x162080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162080) {
            ctx->pc = 0x1620ACu;
            goto label_1620ac;
        }
    }
    ctx->pc = 0x162088u;
    // 0x162088: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x162088u;
    {
        const bool branch_taken_0x162088 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162088u;
        // 0x16208c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162088) {
            ctx->pc = 0x1620A0u;
            goto label_1620a0;
        }
    }
    ctx->pc = 0x162090u;
    // 0x162090: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x162090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162094: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x162094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x162098: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x162098u;
    {
        const bool branch_taken_0x162098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162098u;
        // 0x16209c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162098) {
            ctx->pc = 0x1620D0u;
            goto label_1620d0;
        }
    }
    ctx->pc = 0x1620A0u;
label_1620a0:
    // 0x1620a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1620a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1620A4u;
    {
        const bool branch_taken_0x1620a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620A4u;
        // 0x1620a8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620a4) {
            ctx->pc = 0x1620CCu;
            goto label_1620cc;
        }
    }
    ctx->pc = 0x1620ACu;
label_1620ac:
    // 0x1620ac: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1620ACu;
    {
        const bool branch_taken_0x1620ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620ACu;
        // 0x1620b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620ac) {
            ctx->pc = 0x1620C4u;
            goto label_1620c4;
        }
    }
    ctx->pc = 0x1620B4u;
    // 0x1620b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1620b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620b8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1620b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1620bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1620BCu;
    {
        const bool branch_taken_0x1620bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620BCu;
        // 0x1620c0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620bc) {
            ctx->pc = 0x1620D0u;
            goto label_1620d0;
        }
    }
    ctx->pc = 0x1620C4u;
label_1620c4:
    // 0x1620c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1620c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620c8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1620c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1620cc:
    // 0x1620cc: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x1620ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1620d0:
    // 0x1620d0: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x1620D0u;
    SET_GPR_U32(ctx, 31, 0x1620D8u);
    ctx->pc = 0x1620D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1620D0u;
    // 0x1620d4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x1620D0u, 0x1620D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1620D8u;
label_1620d8:
    // 0x1620d8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1620d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1620dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1620e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1620E0u;
    {
        const bool branch_taken_0x1620e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620E0u;
        // 0x1620e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620e0) {
            ctx->pc = 0x162108u;
            goto label_162108;
        }
    }
    ctx->pc = 0x1620E8u;
    // 0x1620e8: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1620E8u;
    SET_GPR_U32(ctx, 31, 0x1620F0u);
    ctx->pc = 0x1620ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1620E8u;
    // 0x1620ec: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1620E8u, 0x1620F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1620F0u;
label_1620f0:
    // 0x1620f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620f4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1620F4u;
    SET_GPR_U32(ctx, 31, 0x1620FCu);
    ctx->pc = 0x1620F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1620F4u;
    // 0x1620f8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1620F4u, 0x1620FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1620FCu;
label_1620fc:
    // 0x1620fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162100: 0xc0cda26  jal         func_336898
    ctx->pc = 0x162100u;
    SET_GPR_U32(ctx, 31, 0x162108u);
    ctx->pc = 0x162104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162100u;
    // 0x162104: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x162100u, 0x162108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162108u;
label_162108:
    // 0x162108: 0xc043e8a  jal         func_10FA28
    ctx->pc = 0x162108u;
    SET_GPR_U32(ctx, 31, 0x162110u);
    ctx->pc = 0x16210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162108u;
    // 0x16210c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA28u, 0x162108u, 0x162110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162110u;
label_162110:
    // 0x162110: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x162110u;
    {
        const bool branch_taken_0x162110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162110) {
            ctx->pc = 0x16227Cu;
            goto label_16227c;
        }
    }
    ctx->pc = 0x162118u;
label_162118:
    // 0x162118: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x162118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x16211c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16211Cu;
    {
        const bool branch_taken_0x16211c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16211Cu;
        // 0x162120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16211c) {
            ctx->pc = 0x162148u;
            goto label_162148;
        }
    }
    ctx->pc = 0x162124u;
    // 0x162124: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x162124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162128: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x162128u;
    SET_GPR_U32(ctx, 31, 0x162130u);
    ctx->pc = 0x16212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162128u;
    // 0x16212c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x162128u, 0x162130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162130u;
label_162130:
    // 0x162130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162134: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x162134u;
    SET_GPR_U32(ctx, 31, 0x16213Cu);
    ctx->pc = 0x162138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162134u;
    // 0x162138: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x162134u, 0x16213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16213Cu;
label_16213c:
    // 0x16213c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162140: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x162140u;
    SET_GPR_U32(ctx, 31, 0x162148u);
    ctx->pc = 0x162144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162140u;
    // 0x162144: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x162140u, 0x162148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162148u;
label_162148:
    // 0x162148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16214c: 0xc04f13c  jal         func_13C4F0
    ctx->pc = 0x16214Cu;
    SET_GPR_U32(ctx, 31, 0x162154u);
    ctx->pc = 0x162150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16214Cu;
    // 0x162150: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4F0u, 0x16214Cu, 0x162154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162154u;
label_162154:
    // 0x162154: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x162154u;
    {
        const bool branch_taken_0x162154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162154) {
            ctx->pc = 0x162158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162154u;
            // 0x162158: 0xae20035c  sw          $zero, 0x35C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1621A4u;
            goto label_1621a4;
        }
    }
    ctx->pc = 0x16215Cu;
    // 0x16215c: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x16215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x162160: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x162160u;
    {
        const bool branch_taken_0x162160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162160u;
        // 0x162164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162160) {
            ctx->pc = 0x162194u;
            goto label_162194;
        }
    }
    ctx->pc = 0x162168u;
    // 0x162168: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162168u;
    {
        const bool branch_taken_0x162168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162168u;
        // 0x16216c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162168) {
            ctx->pc = 0x162184u;
            goto label_162184;
        }
    }
    ctx->pc = 0x162170u;
    // 0x162170: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162174: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x162174u;
    SET_GPR_U32(ctx, 31, 0x16217Cu);
    ctx->pc = 0x162178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162174u;
    // 0x162178: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x162174u, 0x16217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16217Cu;
label_16217c:
    // 0x16217c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16217Cu;
    {
        const bool branch_taken_0x16217c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16217Cu;
        // 0x162180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16217c) {
            ctx->pc = 0x162194u;
            goto label_162194;
        }
    }
    ctx->pc = 0x162184u;
label_162184:
    // 0x162184: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x162188: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x162188u;
    SET_GPR_U32(ctx, 31, 0x162190u);
    ctx->pc = 0x16218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162188u;
    // 0x16218c: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x162188u, 0x162190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162190u;
label_162190:
    // 0x162190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162194:
    // 0x162194: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x162194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162198: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x162198u;
    SET_GPR_U32(ctx, 31, 0x1621A0u);
    ctx->pc = 0x16219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162198u;
    // 0x16219c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x162198u, 0x1621A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621A0u;
label_1621a0:
    // 0x1621a0: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x1621a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_1621a4:
    // 0x1621a4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1621a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1621a8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1621a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1621ac: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1621ACu;
    {
        const bool branch_taken_0x1621ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621ACu;
        // 0x1621b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621ac) {
            ctx->pc = 0x1621D4u;
            goto label_1621d4;
        }
    }
    ctx->pc = 0x1621B4u;
    // 0x1621b4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1621B4u;
    SET_GPR_U32(ctx, 31, 0x1621BCu);
    ctx->pc = 0x1621B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621B4u;
    // 0x1621b8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1621B4u, 0x1621BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621BCu;
label_1621bc:
    // 0x1621bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1621bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621c0: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1621C0u;
    SET_GPR_U32(ctx, 31, 0x1621C8u);
    ctx->pc = 0x1621C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621C0u;
    // 0x1621c4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1621C0u, 0x1621C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621C8u;
label_1621c8:
    // 0x1621c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1621c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621cc: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1621CCu;
    SET_GPR_U32(ctx, 31, 0x1621D4u);
    ctx->pc = 0x1621D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621CCu;
    // 0x1621d0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1621CCu, 0x1621D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621D4u;
label_1621d4:
    // 0x1621d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1621d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621d8: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1621D8u;
    SET_GPR_U32(ctx, 31, 0x1621E0u);
    ctx->pc = 0x1621DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621D8u;
    // 0x1621dc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1621D8u, 0x1621E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621E0u;
label_1621e0:
    // 0x1621e0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1621E0u;
    {
        const bool branch_taken_0x1621e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621E0u;
        // 0x1621e4: 0xae2203a8  sw          $v0, 0x3A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621e0) {
            ctx->pc = 0x16227Cu;
            goto label_16227c;
        }
    }
    ctx->pc = 0x1621E8u;
label_1621e8:
    // 0x1621e8: 0xc04f13c  jal         func_13C4F0
    ctx->pc = 0x1621E8u;
    SET_GPR_U32(ctx, 31, 0x1621F0u);
    ctx->pc = 0x1621ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621E8u;
    // 0x1621ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4F0u, 0x1621E8u, 0x1621F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621F0u;
label_1621f0:
    // 0x1621f0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1621F0u;
    {
        const bool branch_taken_0x1621f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1621F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F0u;
        // 0x1621f4: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f0) {
            ctx->pc = 0x162254u;
            goto label_162254;
        }
    }
    ctx->pc = 0x1621F8u;
    // 0x1621f8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1621F8u;
    {
        const bool branch_taken_0x1621f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F8u;
        // 0x1621fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f8) {
            ctx->pc = 0x162230u;
            goto label_162230;
        }
    }
    ctx->pc = 0x162200u;
    // 0x162200: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x162204: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x162204u;
    SET_GPR_U32(ctx, 31, 0x16220Cu);
    ctx->pc = 0x162208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162204u;
    // 0x162208: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x162204u, 0x16220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16220Cu;
label_16220c:
    // 0x16220c: 0xc058f32  jal         func_163CC8
    ctx->pc = 0x16220Cu;
    SET_GPR_U32(ctx, 31, 0x162214u);
    ctx->pc = 0x162210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16220Cu;
    // 0x162210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CC8u, 0x16220Cu, 0x162214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162214u;
label_162214:
    // 0x162214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x162218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16221c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x16221cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162220: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x162220u;
    SET_GPR_U32(ctx, 31, 0x162228u);
    ctx->pc = 0x162224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162220u;
    // 0x162224: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x162220u, 0x162228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162228u;
label_162228:
    // 0x162228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162228u;
    {
        const bool branch_taken_0x162228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162228u;
        // 0x16222c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162228) {
            ctx->pc = 0x162244u;
            goto label_162244;
        }
    }
    ctx->pc = 0x162230u;
label_162230:
    // 0x162230: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x162230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162234: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162238: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x162238u;
    SET_GPR_U32(ctx, 31, 0x162240u);
    ctx->pc = 0x16223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162238u;
    // 0x16223c: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x162238u, 0x162240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162240u;
label_162240:
    // 0x162240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162244:
    // 0x162244: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x162244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162248: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x162248u;
    SET_GPR_U32(ctx, 31, 0x162250u);
    ctx->pc = 0x16224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162248u;
    // 0x16224c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x162248u, 0x162250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162250u;
label_162250:
    // 0x162250: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x162250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_162254:
    // 0x162254: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x162254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162258: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x162258u;
    {
        const bool branch_taken_0x162258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162258u;
        // 0x16225c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162258) {
            ctx->pc = 0x16227Cu;
            goto label_16227c;
        }
    }
    ctx->pc = 0x162260u;
    // 0x162260: 0xc0cda26  jal         func_336898
    ctx->pc = 0x162260u;
    SET_GPR_U32(ctx, 31, 0x162268u);
    ctx->pc = 0x162264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162260u;
    // 0x162264: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x162260u, 0x162268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162268u;
label_162268:
    // 0x162268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16226c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x16226Cu;
    SET_GPR_U32(ctx, 31, 0x162274u);
    ctx->pc = 0x162270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16226Cu;
    // 0x162270: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x16226Cu, 0x162274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162274u;
label_162274:
    // 0x162274: 0xc095202  jal         func_254808
    ctx->pc = 0x162274u;
    SET_GPR_U32(ctx, 31, 0x16227Cu);
    ctx->pc = 0x162278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162274u;
    // 0x162278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254808u, 0x162274u, 0x16227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16227Cu;
label_16227c:
    // 0x16227c: 0xc044240  jal         func_110900
    ctx->pc = 0x16227Cu;
    SET_GPR_U32(ctx, 31, 0x162284u);
    ctx->pc = 0x162280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16227Cu;
    // 0x162280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x16227Cu, 0x162284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162284u;
label_162284:
    // 0x162284: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x162288: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x162288u;
    {
        const bool branch_taken_0x162288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x16228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162288u;
        // 0x16228c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162288) {
            ctx->pc = 0x16229Cu;
            goto label_16229c;
        }
    }
    ctx->pc = 0x162290u;
    // 0x162290: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x162290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x162294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162298: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x162298u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_16229c:
    // 0x16229c: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x16229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1622a0: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1622A0u;
    {
        const bool branch_taken_0x1622a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1622A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622A0u;
        // 0x1622a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622a0) {
            ctx->pc = 0x1622B4u;
            goto label_1622b4;
        }
    }
    ctx->pc = 0x1622A8u;
    // 0x1622a8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1622a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1622ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1622acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1622b0: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x1622b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1622b4:
    // 0x1622b4: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1622B4u;
    {
        const bool branch_taken_0x1622b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1622B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622B4u;
        // 0x1622b8: 0x2ac20009  slti        $v0, $s6, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622b4) {
            ctx->pc = 0x1622ECu;
            goto label_1622ec;
        }
    }
    ctx->pc = 0x1622BCu;
    // 0x1622bc: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1622BCu;
    {
        const bool branch_taken_0x1622bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1622C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622BCu;
        // 0x1622c0: 0x38630002  xori        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622bc) {
            ctx->pc = 0x1622DCu;
            goto label_1622dc;
        }
    }
    ctx->pc = 0x1622C4u;
    // 0x1622c4: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x1622c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x1622c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1622c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1622cc: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1622ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1622d0: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1622d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x1622d4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1622d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1622d8: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x1622d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1622dc:
    // 0x1622dc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1622DCu;
    {
        const bool branch_taken_0x1622dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1622E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622DCu;
        // 0x1622e0: 0x2ac20009  slti        $v0, $s6, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622dc) {
            ctx->pc = 0x1622ECu;
            goto label_1622ec;
        }
    }
    ctx->pc = 0x1622E4u;
    // 0x1622e4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1622E4u;
    {
        const bool branch_taken_0x1622e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1622e4) {
            ctx->pc = 0x162310u;
            goto label_162310;
        }
    }
    ctx->pc = 0x1622ECu;
label_1622ec:
    // 0x1622ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1622ECu;
    {
        const bool branch_taken_0x1622ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1622F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622ECu;
        // 0x1622f0: 0x2ac2000b  slti        $v0, $s6, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622ec) {
            ctx->pc = 0x162310u;
            goto label_162310;
        }
    }
    ctx->pc = 0x1622F4u;
    // 0x1622f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1622F4u;
    {
        const bool branch_taken_0x1622f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1622F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622F4u;
        // 0x1622f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622f4) {
            ctx->pc = 0x162308u;
            goto label_162308;
        }
    }
    ctx->pc = 0x1622FCu;
    // 0x1622fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1622fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x162300: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162300u;
    {
        const bool branch_taken_0x162300 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x162300) {
            ctx->pc = 0x162310u;
            goto label_162310;
        }
    }
    ctx->pc = 0x162308u;
label_162308:
    // 0x162308: 0xc058fa4  jal         func_163E90
    ctx->pc = 0x162308u;
    SET_GPR_U32(ctx, 31, 0x162310u);
    ctx->pc = 0x16230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162308u;
    // 0x16230c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E90u, 0x162308u, 0x162310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162310u;
label_162310:
    // 0x162310: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x162310u;
    SET_GPR_U32(ctx, 31, 0x162318u);
    ctx->pc = 0x162314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162310u;
    // 0x162314: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x162310u, 0x162318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162318u;
label_162318:
    // 0x162318: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x162318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16231c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162320: 0xc042128  jal         func_1084A0
    ctx->pc = 0x162320u;
    SET_GPR_U32(ctx, 31, 0x162328u);
    ctx->pc = 0x162324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162320u;
    // 0x162324: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x162320u, 0x162328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162328u;
label_162328:
    // 0x162328: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16232c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162330: 0xc04d6fe  jal         func_135BF8
    ctx->pc = 0x162330u;
    SET_GPR_U32(ctx, 31, 0x162338u);
    ctx->pc = 0x162334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162330u;
    // 0x162334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x162330u, 0x162338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162338u;
label_162338:
    // 0x162338: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x162338u;
    {
        const bool branch_taken_0x162338 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x16233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162338u;
        // 0x16233c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162338) {
            ctx->pc = 0x162358u;
            goto label_162358;
        }
    }
    ctx->pc = 0x162340u;
    // 0x162340: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x162344: 0x8e2702e0  lw          $a3, 0x2E0($s1)
    ctx->pc = 0x162344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x162348: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x16234c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162350: 0xc04668a  jal         func_119A28
    ctx->pc = 0x162350u;
    SET_GPR_U32(ctx, 31, 0x162358u);
    ctx->pc = 0x162354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162350u;
    // 0x162354: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x162350u, 0x162358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162358u;
label_162358:
    // 0x162358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16235c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162360: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x162360u;
    SET_GPR_U32(ctx, 31, 0x162368u);
    ctx->pc = 0x162364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162360u;
    // 0x162364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x162360u, 0x162368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162368u;
label_162368:
    // 0x162368: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16236c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162370: 0xc04f124  jal         func_13C490
    ctx->pc = 0x162370u;
    SET_GPR_U32(ctx, 31, 0x162378u);
    ctx->pc = 0x162374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162370u;
    // 0x162374: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x162370u, 0x162378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162378u;
label_162378:
    // 0x162378: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x162378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16237c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162380: 0xc04f118  jal         func_13C460
    ctx->pc = 0x162380u;
    SET_GPR_U32(ctx, 31, 0x162388u);
    ctx->pc = 0x162384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162380u;
    // 0x162384: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x162380u, 0x162388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162388u;
label_162388:
    // 0x162388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x162388u;
    {
        const bool branch_taken_0x162388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162388u;
        // 0x16238c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162388) {
            ctx->pc = 0x1623A8u;
            goto label_1623a8;
        }
    }
    ctx->pc = 0x162390u;
label_162390:
    // 0x162390: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_162394:
    // 0x162394: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x162394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162398: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x162398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16239c: 0x1460fef2  bnez        $v1, . + 4 + (-0x10E << 2)
    ctx->pc = 0x16239Cu;
    {
        const bool branch_taken_0x16239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1623A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16239Cu;
        // 0x1623a0: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16239c) {
            ctx->pc = 0x161F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161f68;
        }
    }
    ctx->pc = 0x1623A4u;
    // 0x1623a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1623a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1623a8:
    // 0x1623a8: 0xc04f112  jal         func_13C448
    ctx->pc = 0x1623A8u;
    SET_GPR_U32(ctx, 31, 0x1623B0u);
    ctx->pc = 0x1623ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623A8u;
    // 0x1623ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x1623A8u, 0x1623B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623B0u;
label_1623b0:
    // 0x1623b0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1623B0u;
    {
        const bool branch_taken_0x1623b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1623B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623B0u;
        // 0x1623b4: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623b0) {
            ctx->pc = 0x162488u;
            goto label_162488;
        }
    }
    ctx->pc = 0x1623B8u;
    // 0x1623b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1623b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623bc: 0xc04f576  jal         func_13D5D8
    ctx->pc = 0x1623BCu;
    SET_GPR_U32(ctx, 31, 0x1623C4u);
    ctx->pc = 0x1623C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623BCu;
    // 0x1623c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5D8u, 0x1623BCu, 0x1623C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623C4u;
label_1623c4:
    // 0x1623c4: 0xc044240  jal         func_110900
    ctx->pc = 0x1623C4u;
    SET_GPR_U32(ctx, 31, 0x1623CCu);
    ctx->pc = 0x1623C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623C4u;
    // 0x1623c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x1623C4u, 0x1623CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623CCu;
label_1623cc:
    // 0x1623cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1623ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623d0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1623d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1623d4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1623D4u;
    {
        const bool branch_taken_0x1623d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1623D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623D4u;
        // 0x1623d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623d4) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x1623DCu;
    // 0x1623dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1623DCu;
    {
        const bool branch_taken_0x1623dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1623E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623DCu;
        // 0x1623e0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623dc) {
            ctx->pc = 0x1623F4u;
            goto label_1623f4;
        }
    }
    ctx->pc = 0x1623E4u;
    // 0x1623e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1623e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623e8: 0xc058fa4  jal         func_163E90
    ctx->pc = 0x1623E8u;
    SET_GPR_U32(ctx, 31, 0x1623F0u);
    ctx->pc = 0x1623ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623E8u;
    // 0x1623ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E90u, 0x1623E8u, 0x1623F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623F0u;
label_1623f0:
    // 0x1623f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1623f4:
    // 0x1623f4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1623f8: 0x2444a080  addiu       $a0, $v0, -0x5F80
    ctx->pc = 0x1623f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x1623fc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1623fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x162400: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162404: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x162404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x162408: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16240c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162410: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x162410) {
            ctx->pc = 0x162414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162410u;
            // 0x162414: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162420u;
            goto label_162420;
        }
    }
    ctx->pc = 0x162418u;
    // 0x162418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162418u;
    {
        const bool branch_taken_0x162418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162418u;
        // 0x16241c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162418) {
            ctx->pc = 0x162428u;
            goto label_162428;
        }
    }
    ctx->pc = 0x162420u;
label_162420:
    // 0x162420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162424: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x162424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_162428:
    // 0x162428: 0xc049624  jal         func_125890
    ctx->pc = 0x162428u;
    SET_GPR_U32(ctx, 31, 0x162430u);
    ctx->pc = 0x125890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125890u, 0x162428u, 0x162430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162430u;
label_162430:
    // 0x162430: 0x8e230354  lw          $v1, 0x354($s1)
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 852)));
    // 0x162434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162438: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x162438u;
    {
        const bool branch_taken_0x162438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162438u;
        // 0x16243c: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162438) {
            ctx->pc = 0x162488u;
            goto label_162488;
        }
    }
    ctx->pc = 0x162440u;
    // 0x162440: 0x8e2503a8  lw          $a1, 0x3A8($s1)
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x162444: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x162444u;
    {
        const bool branch_taken_0x162444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x162448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162444u;
        // 0x162448: 0x307500ff  andi        $s5, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162444) {
            ctx->pc = 0x16248Cu;
            goto label_16248c;
        }
    }
    ctx->pc = 0x16244Cu;
    // 0x16244c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16244Cu;
    SET_GPR_U32(ctx, 31, 0x162454u);
    ctx->pc = 0x162450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16244Cu;
    // 0x162450: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16244Cu, 0x162454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162454u;
label_162454:
    // 0x162454: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x162454u;
    {
        const bool branch_taken_0x162454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162454u;
        // 0x162458: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162454) {
            ctx->pc = 0x162484u;
            goto label_162484;
        }
    }
    ctx->pc = 0x16245Cu;
    // 0x16245c: 0xae2003a8  sw          $zero, 0x3A8($s1)
    ctx->pc = 0x16245cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 0));
    // 0x162460: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x162464: 0xc04803c  jal         func_1200F0
    ctx->pc = 0x162464u;
    SET_GPR_U32(ctx, 31, 0x16246Cu);
    ctx->pc = 0x162468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162464u;
    // 0x162468: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200F0u, 0x162464u, 0x16246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16246Cu;
label_16246c:
    // 0x16246c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16246Cu;
    {
        const bool branch_taken_0x16246c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16246Cu;
        // 0x162470: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16246c) {
            ctx->pc = 0x162484u;
            goto label_162484;
        }
    }
    ctx->pc = 0x162474u;
    // 0x162474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162478: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x162478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16247c: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x16247Cu;
    SET_GPR_U32(ctx, 31, 0x162484u);
    ctx->pc = 0x162480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16247Cu;
    // 0x162480: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x16247Cu, 0x162484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162484u;
label_162484:
    // 0x162484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x162484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_162488:
    // 0x162488: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x162488u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16248c:
    // 0x16248c: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x16248cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x162490: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162490u;
    {
        const bool branch_taken_0x162490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162490u;
        // 0x162494: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162490) {
            ctx->pc = 0x1624A4u;
            goto label_1624a4;
        }
    }
    ctx->pc = 0x162498u;
    // 0x162498: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x162498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x16249c: 0x5482fe88  bnel        $a0, $v0, . + 4 + (-0x178 << 2)
    ctx->pc = 0x16249Cu;
    {
        const bool branch_taken_0x16249c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16249c) {
            ctx->pc = 0x1624A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16249Cu;
            // 0x1624a0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161ec0;
        }
    }
    ctx->pc = 0x1624A4u;
label_1624a4:
    // 0x1624a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1624a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624a8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1624A8u;
    SET_GPR_U32(ctx, 31, 0x1624B0u);
    ctx->pc = 0x1624ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1624A8u;
    // 0x1624ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1624A8u, 0x1624B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1624B0u;
label_1624b0:
    // 0x1624b0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1624b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1624b4:
    // 0x1624b4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1624b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1624b8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1624b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1624bc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1624bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1624c0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1624c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1624c4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1624c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1624c8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1624c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1624cc: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1624ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1624d0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1624d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1624d4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1624d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1624d8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1624d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1624dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1624DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1624E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624DCu;
        // 0x1624e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1624DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1624E4u;
    // 0x1624e4: 0x0  nop
    ctx->pc = 0x1624e4u;
    // NOP
    ctx->pc = 0x1624e8u;
}

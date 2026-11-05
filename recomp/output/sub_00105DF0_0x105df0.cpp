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

// Function: sub_00105DF0
// Address: 0x105df0 - 0x106490
void sub_00105DF0_0x105df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105DF0_0x105df0");
#endif

    switch (ctx->pc) {
        case 0x105e50u: goto label_105e50;
        case 0x105ec8u: goto label_105ec8;
        case 0x105ef0u: goto label_105ef0;
        case 0x105f08u: goto label_105f08;
        case 0x105f34u: goto label_105f34;
        case 0x105f68u: goto label_105f68;
        case 0x105fb0u: goto label_105fb0;
        case 0x105fb8u: goto label_105fb8;
        case 0x105fd0u: goto label_105fd0;
        case 0x105fe4u: goto label_105fe4;
        case 0x10602cu: goto label_10602c;
        case 0x106038u: goto label_106038;
        case 0x106050u: goto label_106050;
        case 0x10605cu: goto label_10605c;
        case 0x1060a4u: goto label_1060a4;
        case 0x1060f8u: goto label_1060f8;
        case 0x1061a4u: goto label_1061a4;
        case 0x1061ccu: goto label_1061cc;
        case 0x1061e8u: goto label_1061e8;
        case 0x106214u: goto label_106214;
        case 0x1062a0u: goto label_1062a0;
        case 0x1062c8u: goto label_1062c8;
        case 0x1062e0u: goto label_1062e0;
        case 0x10630cu: goto label_10630c;
        case 0x106384u: goto label_106384;
        case 0x1063acu: goto label_1063ac;
        case 0x1063c8u: goto label_1063c8;
        case 0x1063f4u: goto label_1063f4;
        case 0x106448u: goto label_106448;
        case 0x10645cu: goto label_10645c;
        default: break;
    }

    ctx->pc = 0x105df0u;

    // 0x105df0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x105df4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x105df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x105df8: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x105df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x105dfc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x105dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x105e00: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x105e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x105e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e08: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x105e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x105e0c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x105e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x105e10: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x105e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x105e14: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x105e14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x105e18: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x105e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x105e1c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x105e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x105e20: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x105e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x105e24: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x105e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x105e28: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x105e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x105e2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x105e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x105e30: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x105e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x105e34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x105e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x105e38: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x105e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x105e3c: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x105e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
    // 0x105e40: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x105e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x105e44: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x105e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x105e48: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x105E48u;
    SET_GPR_U32(ctx, 31, 0x105E50u);
    ctx->pc = 0x105E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E48u;
    // 0x105e4c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x105E48u, 0x105E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E50u;
label_105e50:
    // 0x105e50: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x105e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x105e54: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x105e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e58: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x105e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105e5c: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x105e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105e60: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x105e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x105e64: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x105e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x105e68: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105E68u;
    {
        const bool branch_taken_0x105e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x105E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E68u;
        // 0x105e6c: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e68) {
            ctx->pc = 0x105E88u;
            goto label_105e88;
        }
    }
    ctx->pc = 0x105E70u;
    // 0x105e70: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x105E70u;
    {
        const bool branch_taken_0x105e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x105e70) {
            ctx->pc = 0x105E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E70u;
            // 0x105e74: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E78u;
            goto label_105e78;
        }
    }
    ctx->pc = 0x105E78u;
label_105e78:
    // 0x105e78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x105e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105e7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x105e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x105e80: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x105E80u;
    {
        const bool branch_taken_0x105e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E80u;
        // 0x105e84: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e80) {
            ctx->pc = 0x105F44u;
            goto label_105f44;
        }
    }
    ctx->pc = 0x105E88u;
label_105e88:
    // 0x105e88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105e90: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x105e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x105e94: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x105e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x105e98: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x105e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x105e9c: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x105e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x105ea0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x105ea0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x105ea4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x105ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x105ea8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x105ea8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x105eac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105eb0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x105eb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105EB4u;
    {
        const bool branch_taken_0x105eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EB4u;
        // 0x105eb8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105eb4) {
            ctx->pc = 0x105ED0u;
            goto label_105ed0;
        }
    }
    ctx->pc = 0x105EBCu;
    // 0x105ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ec0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x105EC0u;
    SET_GPR_U32(ctx, 31, 0x105EC8u);
    ctx->pc = 0x105EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EC0u;
    // 0x105ec4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x105EC0u, 0x105EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EC8u;
label_105ec8:
    // 0x105ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x105EC8u;
    {
        const bool branch_taken_0x105ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EC8u;
        // 0x105ecc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ec8) {
            ctx->pc = 0x105ED8u;
            goto label_105ed8;
        }
    }
    ctx->pc = 0x105ED0u;
label_105ed0:
    // 0x105ed0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x105ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ed4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x105ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105ed8:
    // 0x105ed8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x105ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105edc: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105EDCu;
    {
        const bool branch_taken_0x105edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x105EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EDCu;
        // 0x105ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105edc) {
            ctx->pc = 0x105EF8u;
            goto label_105ef8;
        }
    }
    ctx->pc = 0x105EE4u;
    // 0x105ee4: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x105ee8: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x105EE8u;
    SET_GPR_U32(ctx, 31, 0x105EF0u);
    ctx->pc = 0x105EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EE8u;
    // 0x105eec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x105EE8u, 0x105EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EF0u;
label_105ef0:
    // 0x105ef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105EF0u;
    {
        const bool branch_taken_0x105ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EF0u;
        // 0x105ef4: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ef0) {
            ctx->pc = 0x105EFCu;
            goto label_105efc;
        }
    }
    ctx->pc = 0x105EF8u;
label_105ef8:
    // 0x105ef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x105ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105efc:
    // 0x105efc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x105efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x105f00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105F00u;
    {
        const bool branch_taken_0x105f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F00u;
        // 0x105f04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f00) {
            ctx->pc = 0x105F20u;
            goto label_105f20;
        }
    }
    ctx->pc = 0x105F08u;
label_105f08:
    // 0x105f08: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105f0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x105f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x105f10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x105f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x105f14: 0x0  nop
    ctx->pc = 0x105f14u;
    // NOP
    // 0x105f18: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x105F18u;
    {
        const bool branch_taken_0x105f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x105F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F18u;
        // 0x105f1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f18) {
            ctx->pc = 0x105F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105f08;
        }
    }
    ctx->pc = 0x105F20u;
label_105f20:
    // 0x105f20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x105f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105f24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F24u;
    {
        const bool branch_taken_0x105f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F24u;
        // 0x105f28: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f24) {
            ctx->pc = 0x105F38u;
            goto label_105f38;
        }
    }
    ctx->pc = 0x105F2Cu;
    // 0x105f2c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x105F2Cu;
    SET_GPR_U32(ctx, 31, 0x105F34u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x105F2Cu, 0x105F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F34u;
label_105f34:
    // 0x105f34: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x105f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_105f38:
    // 0x105f38: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x105f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x105f3c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x105f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x105f40: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x105f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_105f44:
    // 0x105f44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x105f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105f48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x105f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105f54: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x105f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x105f58: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x105F58u;
    {
        const bool branch_taken_0x105f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F58u;
        // 0x105f5c: 0x27a20064  addiu       $v0, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f58) {
            ctx->pc = 0x106434u;
            goto label_106434;
        }
    }
    ctx->pc = 0x105F60u;
    // 0x105f60: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x105f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x105f64: 0x8c95fffc  lw          $s5, -0x4($a0)
    ctx->pc = 0x105f64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_105f68:
    // 0x105f68: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x105f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x105f6c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x105f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x105f70: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x105f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x105f74: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x105F74u;
    {
        const bool branch_taken_0x105f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F74u;
        // 0x105f78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f74) {
            ctx->pc = 0x106418u;
            goto label_106418;
        }
    }
    ctx->pc = 0x105F7Cu;
    // 0x105f7c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x105f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x105f80: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x105f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x105f84: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x105f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x105f88: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105f8c: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x105f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x105f90: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x105f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x105f94: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x105f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x105f98: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x105f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x105f9c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x105f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x105fa0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x105fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x105fa4: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x105fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x105fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x105fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fac: 0x0  nop
    ctx->pc = 0x105facu;
    // NOP
label_105fb0:
    // 0x105fb0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x105FB0u;
    SET_GPR_U32(ctx, 31, 0x105FB8u);
    ctx->pc = 0x105FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FB0u;
    // 0x105fb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x105FB0u, 0x105FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FB8u;
label_105fb8:
    // 0x105fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x105fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fc8: 0xc041480  jal         func_105200
    ctx->pc = 0x105FC8u;
    SET_GPR_U32(ctx, 31, 0x105FD0u);
    ctx->pc = 0x105FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FC8u;
    // 0x105fcc: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105200u, 0x105FC8u, 0x105FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FD0u;
label_105fd0:
    // 0x105fd0: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x105fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x105fd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x105fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x105fdc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x105FDCu;
    SET_GPR_U32(ctx, 31, 0x105FE4u);
    ctx->pc = 0x105FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FDCu;
    // 0x105fe0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x105FDCu, 0x105FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FE4u;
label_105fe4:
    // 0x105fe4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x105fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x105fe8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x105fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105fec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x105fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105ff0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x105ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x105ff4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x105ff4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x105ff8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x105ff8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x105ffc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x105ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x106000: 0x46000004  c1          0x4
    ctx->pc = 0x106000u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x106004: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x106004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106008: 0x0  nop
    ctx->pc = 0x106008u;
    // NOP
    // 0x10600c: 0x450100fd  bc1t        . + 4 + (0xFD << 2)
    ctx->pc = 0x10600Cu;
    {
        const bool branch_taken_0x10600c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x106010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10600Cu;
        // 0x106010: 0x26570001  addiu       $s7, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10600c) {
            ctx->pc = 0x106404u;
            goto label_106404;
        }
    }
    ctx->pc = 0x106014u;
    // 0x106014: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x106014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x106018: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x106018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x10601c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10601Cu;
    {
        const bool branch_taken_0x10601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10601c) {
            ctx->pc = 0x106020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10601Cu;
            // 0x106020: 0x92220014  lbu         $v0, 0x14($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10603Cu;
            goto label_10603c;
        }
    }
    ctx->pc = 0x106024u;
    // 0x106024: 0xc04113e  jal         func_1044F8
    ctx->pc = 0x106024u;
    SET_GPR_U32(ctx, 31, 0x10602Cu);
    ctx->pc = 0x106028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106024u;
    // 0x106028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F8u, 0x106024u, 0x10602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10602Cu;
label_10602c:
    // 0x10602c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x10602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x106030: 0xc0f6aea  jal         func_3DABA8
    ctx->pc = 0x106030u;
    SET_GPR_U32(ctx, 31, 0x106038u);
    ctx->pc = 0x106034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106030u;
    // 0x106034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DABA8u, 0x106030u, 0x106038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106038u;
label_106038:
    // 0x106038: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x106038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_10603c:
    // 0x10603c: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x10603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x106040: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x106040u;
    {
        const bool branch_taken_0x106040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106040) {
            ctx->pc = 0x106044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106040u;
            // 0x106044: 0x8ea20028  lw          $v0, 0x28($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106060u;
            goto label_106060;
        }
    }
    ctx->pc = 0x106048u;
    // 0x106048: 0xc04113e  jal         func_1044F8
    ctx->pc = 0x106048u;
    SET_GPR_U32(ctx, 31, 0x106050u);
    ctx->pc = 0x10604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106048u;
    // 0x10604c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F8u, 0x106048u, 0x106050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106050u;
label_106050:
    // 0x106050: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x106054: 0xc0f6aea  jal         func_3DABA8
    ctx->pc = 0x106054u;
    SET_GPR_U32(ctx, 31, 0x10605Cu);
    ctx->pc = 0x106058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106054u;
    // 0x106058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DABA8u, 0x106054u, 0x10605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10605Cu;
label_10605c:
    // 0x10605c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x10605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_106060:
    // 0x106060: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106060u;
    {
        const bool branch_taken_0x106060 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x106064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106060u;
        // 0x106064: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106060) {
            ctx->pc = 0x10607Cu;
            goto label_10607c;
        }
    }
    ctx->pc = 0x106068u;
    // 0x106068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x106068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10606c: 0x0  nop
    ctx->pc = 0x10606cu;
    // NOP
    // 0x106070: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x106070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x106074: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x106074u;
    {
        const bool branch_taken_0x106074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106074u;
        // 0x106078: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106074) {
            ctx->pc = 0x10609Cu;
            goto label_10609c;
        }
    }
    ctx->pc = 0x10607Cu;
label_10607c:
    // 0x10607c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x10607cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106080: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106084: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x106084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x106088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x106088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10608c: 0x0  nop
    ctx->pc = 0x10608cu;
    // NOP
    // 0x106090: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x106090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x106094: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x106094u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x106098: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x106098u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_10609c:
    // 0x10609c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x10609Cu;
    SET_GPR_U32(ctx, 31, 0x1060A4u);
    ctx->pc = 0x1060A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10609Cu;
    // 0x1060a0: 0x26570001  addiu       $s7, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x10609Cu, 0x1060A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060A4u;
label_1060a4:
    // 0x1060a4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1060a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1060a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1060a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060ac: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1060acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1060b0: 0x544000d5  bnel        $v0, $zero, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1060B0u;
    {
        const bool branch_taken_0x1060b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1060b0) {
            ctx->pc = 0x1060B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1060B0u;
            // 0x1060b4: 0x92a20022  lbu         $v0, 0x22($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106408u;
            goto label_106408;
        }
    }
    ctx->pc = 0x1060B8u;
    // 0x1060b8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1060bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1060bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1060c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1060c4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1060c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060c8: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1060c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1060cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1060ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1060d0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1060d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1060d4: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1060D4u;
    {
        const bool branch_taken_0x1060d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060D4u;
        // 0x1060d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060d4) {
            ctx->pc = 0x106228u;
            goto label_106228;
        }
    }
    ctx->pc = 0x1060DCu;
    // 0x1060dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1060dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1060e0: 0x1047000c  beq         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1060E0u;
    {
        const bool branch_taken_0x1060e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1060E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060E0u;
        // 0x1060e4: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060e0) {
            ctx->pc = 0x106114u;
            goto label_106114;
        }
    }
    ctx->pc = 0x1060E8u;
    // 0x1060e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1060e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1060ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1060f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1060f4: 0x0  nop
    ctx->pc = 0x1060f4u;
    // NOP
label_1060f8:
    // 0x1060f8: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1060f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1060fc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1060FCu;
    {
        const bool branch_taken_0x1060fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060FCu;
        // 0x106100: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060fc) {
            ctx->pc = 0x106228u;
            goto label_106228;
        }
    }
    ctx->pc = 0x106104u;
    // 0x106104: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x106104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106108: 0x5448fffb  bnel        $v0, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106108u;
    {
        const bool branch_taken_0x106108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x106108) {
            ctx->pc = 0x10610Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106108u;
            // 0x10610c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1060F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1060f8;
        }
    }
    ctx->pc = 0x106110u;
    // 0x106110: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_106114:
    // 0x106114: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x106114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x106118: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x106118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10611c: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x10611Cu;
    {
        const bool branch_taken_0x10611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10611c) {
            ctx->pc = 0x106120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10611Cu;
            // 0x106120: 0xace90028  sw          $t1, 0x28($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10622Cu;
            goto label_10622c;
        }
    }
    ctx->pc = 0x106124u;
    // 0x106124: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x106128: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x106128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10612c: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x10612Cu;
    {
        const bool branch_taken_0x10612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10612Cu;
        // 0x106130: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10612c) {
            ctx->pc = 0x106404u;
            goto label_106404;
        }
    }
    ctx->pc = 0x106134u;
    // 0x106134: 0xace90028  sw          $t1, 0x28($a3)
    ctx->pc = 0x106134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 9));
    // 0x106138: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10613c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x106140: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106140u;
    {
        const bool branch_taken_0x106140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106140u;
        // 0x106144: 0x27b4004c  addiu       $s4, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106140) {
            ctx->pc = 0x106164u;
            goto label_106164;
        }
    }
    ctx->pc = 0x106148u;
    // 0x106148: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106148u;
    {
        const bool branch_taken_0x106148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106148u;
        // 0x10614c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106148) {
            ctx->pc = 0x106154u;
            goto label_106154;
        }
    }
    ctx->pc = 0x106150u;
    // 0x106150: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_106154:
    // 0x106154: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x106154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106158: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10615c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x10615Cu;
    {
        const bool branch_taken_0x10615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10615Cu;
        // 0x106160: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10615c) {
            ctx->pc = 0x106404u;
            goto label_106404;
        }
    }
    ctx->pc = 0x106164u;
label_106164:
    // 0x106164: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x106164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106168: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x106168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x10616c: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x10616cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x106170: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x106174: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x106174u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x106178: 0xafb60054  sw          $s6, 0x54($sp)
    ctx->pc = 0x106178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 22));
    // 0x10617c: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x10617cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x106180: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x106180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x106184: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x106184u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x106188: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x106188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10618c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x10618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x106190: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106190u;
    {
        const bool branch_taken_0x106190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106190u;
        // 0x106194: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106190) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x106198u;
    // 0x106198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10619c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x10619Cu;
    SET_GPR_U32(ctx, 31, 0x1061A4u);
    ctx->pc = 0x1061A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10619Cu;
    // 0x1061a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x10619Cu, 0x1061A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061A4u;
label_1061a4:
    // 0x1061a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1061A4u;
    {
        const bool branch_taken_0x1061a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061A4u;
        // 0x1061a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061a4) {
            ctx->pc = 0x1061B4u;
            goto label_1061b4;
        }
    }
    ctx->pc = 0x1061ACu;
label_1061ac:
    // 0x1061ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1061acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1061b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1061b4:
    // 0x1061b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1061b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1061b8: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1061B8u;
    {
        const bool branch_taken_0x1061b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1061BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061B8u;
        // 0x1061bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061b8) {
            ctx->pc = 0x1061D4u;
            goto label_1061d4;
        }
    }
    ctx->pc = 0x1061C0u;
    // 0x1061c0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1061c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1061c4: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1061C4u;
    SET_GPR_U32(ctx, 31, 0x1061CCu);
    ctx->pc = 0x1061C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061C4u;
    // 0x1061c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1061C4u, 0x1061CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061CCu;
label_1061cc:
    // 0x1061cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1061CCu;
    {
        const bool branch_taken_0x1061cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061CCu;
        // 0x1061d0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061cc) {
            ctx->pc = 0x1061D8u;
            goto label_1061d8;
        }
    }
    ctx->pc = 0x1061D4u;
label_1061d4:
    // 0x1061d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1061d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1061d8:
    // 0x1061d8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1061d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1061dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1061DCu;
    {
        const bool branch_taken_0x1061dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061DCu;
        // 0x1061e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061dc) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x1061E4u;
    // 0x1061e4: 0x0  nop
    ctx->pc = 0x1061e4u;
    // NOP
label_1061e8:
    // 0x1061e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1061ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1061ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1061f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1061f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1061f4: 0x0  nop
    ctx->pc = 0x1061f4u;
    // NOP
    // 0x1061f8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1061F8u;
    {
        const bool branch_taken_0x1061f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1061FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061F8u;
        // 0x1061fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061f8) {
            ctx->pc = 0x1061E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1061e8;
        }
    }
    ctx->pc = 0x106200u;
label_106200:
    // 0x106200: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106204: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106204u;
    {
        const bool branch_taken_0x106204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106204u;
        // 0x106208: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106204) {
            ctx->pc = 0x106218u;
            goto label_106218;
        }
    }
    ctx->pc = 0x10620Cu;
    // 0x10620c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10620Cu;
    SET_GPR_U32(ctx, 31, 0x106214u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10620Cu, 0x106214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106214u;
label_106214:
    // 0x106214: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x106214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_106218:
    // 0x106218: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x106218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x10621c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x10621cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x106220: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x106220u;
    {
        const bool branch_taken_0x106220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106220u;
        // 0x106224: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106220) {
            ctx->pc = 0x106404u;
            goto label_106404;
        }
    }
    ctx->pc = 0x106228u;
label_106228:
    // 0x106228: 0xace90028  sw          $t1, 0x28($a3)
    ctx->pc = 0x106228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 9));
label_10622c:
    // 0x10622c: 0x27b4004c  addiu       $s4, $sp, 0x4C
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x106230: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x106230u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106234: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x106234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106238: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x106238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x10623c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10623Cu;
    {
        const bool branch_taken_0x10623c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10623Cu;
        // 0x106240: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10623c) {
            ctx->pc = 0x106260u;
            goto label_106260;
        }
    }
    ctx->pc = 0x106244u;
    // 0x106244: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106244u;
    {
        const bool branch_taken_0x106244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106244u;
        // 0x106248: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106244) {
            ctx->pc = 0x106250u;
            goto label_106250;
        }
    }
    ctx->pc = 0x10624Cu;
    // 0x10624c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10624cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_106250:
    // 0x106250: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x106250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106254: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x106254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106258: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x106258u;
    {
        const bool branch_taken_0x106258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106258u;
        // 0x10625c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106258) {
            ctx->pc = 0x10631Cu;
            goto label_10631c;
        }
    }
    ctx->pc = 0x106260u;
label_106260:
    // 0x106260: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x106260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106264: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x106264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x106268: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x106268u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x10626c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x10626cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106270: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x106270u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x106274: 0xafb6005c  sw          $s6, 0x5C($sp)
    ctx->pc = 0x106274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 22));
    // 0x106278: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x106278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x10627c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x106280: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x106280u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x106284: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x106284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106288: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x106288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10628c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10628Cu;
    {
        const bool branch_taken_0x10628c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10628Cu;
        // 0x106290: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10628c) {
            ctx->pc = 0x1062A8u;
            goto label_1062a8;
        }
    }
    ctx->pc = 0x106294u;
    // 0x106294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106298: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x106298u;
    SET_GPR_U32(ctx, 31, 0x1062A0u);
    ctx->pc = 0x10629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106298u;
    // 0x10629c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x106298u, 0x1062A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062A0u;
label_1062a0:
    // 0x1062a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1062A0u;
    {
        const bool branch_taken_0x1062a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062A0u;
        // 0x1062a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062a0) {
            ctx->pc = 0x1062B0u;
            goto label_1062b0;
        }
    }
    ctx->pc = 0x1062A8u;
label_1062a8:
    // 0x1062a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1062a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1062acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1062b0:
    // 0x1062b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1062b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1062b4: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1062B4u;
    {
        const bool branch_taken_0x1062b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1062B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062B4u;
        // 0x1062b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062b4) {
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062BCu;
    // 0x1062bc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1062bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1062c0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1062C0u;
    SET_GPR_U32(ctx, 31, 0x1062C8u);
    ctx->pc = 0x1062C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062C0u;
    // 0x1062c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1062C0u, 0x1062C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062C8u;
label_1062c8:
    // 0x1062c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1062C8u;
    {
        const bool branch_taken_0x1062c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062C8u;
        // 0x1062cc: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c8) {
            ctx->pc = 0x1062D4u;
            goto label_1062d4;
        }
    }
    ctx->pc = 0x1062D0u;
label_1062d0:
    // 0x1062d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1062d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1062d4:
    // 0x1062d4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1062d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1062d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1062D8u;
    {
        const bool branch_taken_0x1062d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062D8u;
        // 0x1062dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062d8) {
            ctx->pc = 0x1062F8u;
            goto label_1062f8;
        }
    }
    ctx->pc = 0x1062E0u;
label_1062e0:
    // 0x1062e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1062e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1062e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1062e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1062e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1062e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1062ec: 0x0  nop
    ctx->pc = 0x1062ecu;
    // NOP
    // 0x1062f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1062F0u;
    {
        const bool branch_taken_0x1062f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062F0u;
        // 0x1062f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062f0) {
            ctx->pc = 0x1062E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1062e0;
        }
    }
    ctx->pc = 0x1062F8u;
label_1062f8:
    // 0x1062f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1062fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1062FCu;
    {
        const bool branch_taken_0x1062fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062FCu;
        // 0x106300: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062fc) {
            ctx->pc = 0x106310u;
            goto label_106310;
        }
    }
    ctx->pc = 0x106304u;
    // 0x106304: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x106304u;
    SET_GPR_U32(ctx, 31, 0x10630Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x106304u, 0x10630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10630Cu;
label_10630c:
    // 0x10630c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x10630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_106310:
    // 0x106310: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x106310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x106314: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x106314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x106318: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x106318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_10631c:
    // 0x10631c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x10631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x106320: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106324: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106324u;
    {
        const bool branch_taken_0x106324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106324u;
        // 0x106328: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106324) {
            ctx->pc = 0x106348u;
            goto label_106348;
        }
    }
    ctx->pc = 0x10632Cu;
    // 0x10632c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10632Cu;
    {
        const bool branch_taken_0x10632c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10632Cu;
        // 0x106330: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10632c) {
            ctx->pc = 0x106338u;
            goto label_106338;
        }
    }
    ctx->pc = 0x106334u;
    // 0x106334: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_106338:
    // 0x106338: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x106338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10633c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106340: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x106340u;
    {
        const bool branch_taken_0x106340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106340u;
        // 0x106344: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106340) {
            ctx->pc = 0x106404u;
            goto label_106404;
        }
    }
    ctx->pc = 0x106348u;
label_106348:
    // 0x106348: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x106348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x10634c: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x106350: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x106350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x106354: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x106354u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x106358: 0xafb60064  sw          $s6, 0x64($sp)
    ctx->pc = 0x106358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 22));
    // 0x10635c: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x10635cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x106360: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x106360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x106364: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x106364u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x106368: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10636c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x10636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x106370: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106370u;
    {
        const bool branch_taken_0x106370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106370u;
        // 0x106374: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106370) {
            ctx->pc = 0x10638Cu;
            goto label_10638c;
        }
    }
    ctx->pc = 0x106378u;
    // 0x106378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10637c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x10637Cu;
    SET_GPR_U32(ctx, 31, 0x106384u);
    ctx->pc = 0x106380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10637Cu;
    // 0x106380: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x10637Cu, 0x106384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106384u;
label_106384:
    // 0x106384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x106384u;
    {
        const bool branch_taken_0x106384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106384u;
        // 0x106388: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106384) {
            ctx->pc = 0x106394u;
            goto label_106394;
        }
    }
    ctx->pc = 0x10638Cu;
label_10638c:
    // 0x10638c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10638cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106390: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106394:
    // 0x106394: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106398: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106398u;
    {
        const bool branch_taken_0x106398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x10639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106398u;
        // 0x10639c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106398) {
            ctx->pc = 0x1063B4u;
            goto label_1063b4;
        }
    }
    ctx->pc = 0x1063A0u;
    // 0x1063a0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1063a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1063a4: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1063A4u;
    SET_GPR_U32(ctx, 31, 0x1063ACu);
    ctx->pc = 0x1063A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063A4u;
    // 0x1063a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1063A4u, 0x1063ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063ACu;
label_1063ac:
    // 0x1063ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1063ACu;
    {
        const bool branch_taken_0x1063ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063ACu;
        // 0x1063b0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063ac) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x1063B4u;
label_1063b4:
    // 0x1063b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1063b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1063b8:
    // 0x1063b8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1063bc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1063BCu;
    {
        const bool branch_taken_0x1063bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063BCu;
        // 0x1063c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063bc) {
            ctx->pc = 0x1063E0u;
            goto label_1063e0;
        }
    }
    ctx->pc = 0x1063C4u;
    // 0x1063c4: 0x0  nop
    ctx->pc = 0x1063c4u;
    // NOP
label_1063c8:
    // 0x1063c8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1063c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1063cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1063ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1063d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1063d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1063d4: 0x0  nop
    ctx->pc = 0x1063d4u;
    // NOP
    // 0x1063d8: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1063D8u;
    {
        const bool branch_taken_0x1063d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1063DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063D8u;
        // 0x1063dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063d8) {
            ctx->pc = 0x1063C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1063c8;
        }
    }
    ctx->pc = 0x1063E0u;
label_1063e0:
    // 0x1063e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1063e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1063e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1063E4u;
    {
        const bool branch_taken_0x1063e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063E4u;
        // 0x1063e8: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063e4) {
            ctx->pc = 0x1063F8u;
            goto label_1063f8;
        }
    }
    ctx->pc = 0x1063ECu;
    // 0x1063ec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1063ECu;
    SET_GPR_U32(ctx, 31, 0x1063F4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1063ECu, 0x1063F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063F4u;
label_1063f4:
    // 0x1063f4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1063f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1063f8:
    // 0x1063f8: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x1063f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x1063fc: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x1063fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x106400: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x106400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_106404:
    // 0x106404: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x106404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
label_106408:
    // 0x106408: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x106408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10640c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x10640cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106410: 0x1440fee7  bnez        $v0, . + 4 + (-0x119 << 2)
    ctx->pc = 0x106410u;
    {
        const bool branch_taken_0x106410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106410u;
        // 0x106414: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106410) {
            ctx->pc = 0x105FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105fb0;
        }
    }
    ctx->pc = 0x106418u;
label_106418:
    // 0x106418: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10641c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106424: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x106424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106428: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x106428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x10642c: 0x5440fece  bnel        $v0, $zero, . + 4 + (-0x132 << 2)
    ctx->pc = 0x10642Cu;
    {
        const bool branch_taken_0x10642c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10642c) {
            ctx->pc = 0x106430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10642Cu;
            // 0x106430: 0x8c95fffc  lw          $s5, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105f68;
        }
    }
    ctx->pc = 0x106434u;
label_106434:
    // 0x106434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106438: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106438u;
    {
        const bool branch_taken_0x106438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106438) {
            ctx->pc = 0x10643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106438u;
            // 0x10643c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10644Cu;
            goto label_10644c;
        }
    }
    ctx->pc = 0x106440u;
    // 0x106440: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x106440u;
    SET_GPR_U32(ctx, 31, 0x106448u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x106440u, 0x106448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106448u;
label_106448:
    // 0x106448: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10644c:
    // 0x10644c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10644Cu;
    {
        const bool branch_taken_0x10644c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10644Cu;
        // 0x106450: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10644c) {
            ctx->pc = 0x106460u;
            goto label_106460;
        }
    }
    ctx->pc = 0x106454u;
    // 0x106454: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x106454u;
    SET_GPR_U32(ctx, 31, 0x10645Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x106454u, 0x10645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10645Cu;
label_10645c:
    // 0x10645c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x10645cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_106460:
    // 0x106460: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x106460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x106464: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x106464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106468: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x106468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x10646c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x10646cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x106470: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x106470u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x106474: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x106474u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x106478: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x106478u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x10647c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x10647cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x106480: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x106480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x106484: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x106484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106488: 0x3e00008  jr          $ra
    ctx->pc = 0x106488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106488u;
        // 0x10648c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106490u;
}

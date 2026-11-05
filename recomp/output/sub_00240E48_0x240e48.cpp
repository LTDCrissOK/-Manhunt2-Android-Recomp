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

// Function: sub_00240E48
// Address: 0x240e48 - 0x241018
void sub_00240E48_0x240e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E48_0x240e48");
#endif

    switch (ctx->pc) {
        case 0x240e78u: goto label_240e78;
        case 0x240f08u: goto label_240f08;
        case 0x240f78u: goto label_240f78;
        case 0x240f88u: goto label_240f88;
        case 0x240fa8u: goto label_240fa8;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fe8u: goto label_240fe8;
        case 0x240ff8u: goto label_240ff8;
        default: break;
    }

    ctx->pc = 0x240e48u;

    // 0x240e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240e50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x240e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x240e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240e60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x240e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240e68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x240e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e6c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x240e70: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x240E70u;
    SET_GPR_U32(ctx, 31, 0x240E78u);
    ctx->pc = 0x240E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E70u;
    // 0x240e74: 0x8c520048  lw          $s2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x240E70u, 0x240E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E78u;
label_240e78:
    // 0x240e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e7c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x240E7Cu;
    {
        const bool branch_taken_0x240e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E7Cu;
        // 0x240e80: 0x2402045c  addiu       $v0, $zero, 0x45C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e7c) {
            ctx->pc = 0x240EB0u;
            goto label_240eb0;
        }
    }
    ctx->pc = 0x240E84u;
    // 0x240e84: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x240e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x240e88: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x240e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x240e8c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x240e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x240e90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240E90u;
    {
        const bool branch_taken_0x240e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E90u;
        // 0x240e94: 0x2402045c  addiu       $v0, $zero, 0x45C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e90) {
            ctx->pc = 0x240EB0u;
            goto label_240eb0;
        }
    }
    ctx->pc = 0x240E98u;
    // 0x240e98: 0x2a420462  slti        $v0, $s2, 0x462
    ctx->pc = 0x240e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1122) ? 1 : 0);
    // 0x240e9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x240E9Cu;
    {
        const bool branch_taken_0x240e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240e9c) {
            ctx->pc = 0x240EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240E9Cu;
            // 0x240ea0: 0x8c910278  lw          $s1, 0x278($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240EACu;
            goto label_240eac;
        }
    }
    ctx->pc = 0x240EA4u;
    // 0x240ea4: 0x8c91027c  lw          $s1, 0x27C($a0)
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x240ea8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x240ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240eac:
    // 0x240eac: 0x2402045c  addiu       $v0, $zero, 0x45C
    ctx->pc = 0x240eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
label_240eb0:
    // 0x240eb0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240EB0u;
    {
        const bool branch_taken_0x240eb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x240EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EB0u;
        // 0x240eb4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240eb0) {
            ctx->pc = 0x240EC0u;
            goto label_240ec0;
        }
    }
    ctx->pc = 0x240EB8u;
    // 0x240eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240EB8u;
    {
        const bool branch_taken_0x240eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EB8u;
        // 0x240ebc: 0xc4410064  lwc1        $f1, 0x64($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240eb8) {
            ctx->pc = 0x240EC4u;
            goto label_240ec4;
        }
    }
    ctx->pc = 0x240EC0u;
label_240ec0:
    // 0x240ec0: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x240ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_240ec4:
    // 0x240ec4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x240ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x240ec8: 0x2403045b  addiu       $v1, $zero, 0x45B
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1115));
    // 0x240ecc: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x240ed0: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x240ED0u;
    {
        const bool branch_taken_0x240ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x240ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240ED0u;
        // 0x240ed4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ed0) {
            ctx->pc = 0x240EE4u;
            goto label_240ee4;
        }
    }
    ctx->pc = 0x240ED8u;
    // 0x240ed8: 0x2402045c  addiu       $v0, $zero, 0x45C
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
    // 0x240edc: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240EDCu;
    {
        const bool branch_taken_0x240edc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x240edc) {
            ctx->pc = 0x240EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240EDCu;
            // 0x240ee0: 0x8cc201e4  lw          $v0, 0x1E4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240EF4u;
            goto label_240ef4;
        }
    }
    ctx->pc = 0x240EE4u;
label_240ee4:
    // 0x240ee4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x240ee8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x240ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x240eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240ef0: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x240ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_240ef4:
    // 0x240ef4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x240EF4u;
    {
        const bool branch_taken_0x240ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ef4) {
            ctx->pc = 0x240EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240EF4u;
            // 0x240ef8: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240F2Cu;
            goto label_240f2c;
        }
    }
    ctx->pc = 0x240EFCu;
    // 0x240efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f00: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x240f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x240f04: 0x0  nop
    ctx->pc = 0x240f04u;
    // NOP
label_240f08:
    // 0x240f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240f0c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x240F0Cu;
    {
        const bool branch_taken_0x240f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240f0c) {
            ctx->pc = 0x240F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240F0Cu;
            // 0x240f10: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240F2Cu;
            goto label_240f2c;
        }
    }
    ctx->pc = 0x240F14u;
    // 0x240f14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x240f18: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x240f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240f1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x240F1Cu;
    {
        const bool branch_taken_0x240f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F1Cu;
        // 0x240f20: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f1c) {
            ctx->pc = 0x240F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240f08;
        }
    }
    ctx->pc = 0x240F24u;
    // 0x240f24: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x240f28: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x240f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240f2c:
    // 0x240f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x240f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240f30: 0x0  nop
    ctx->pc = 0x240f30u;
    // NOP
    // 0x240f34: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x240F34u;
    {
        const bool branch_taken_0x240f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240f34) {
            ctx->pc = 0x240F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240F34u;
            // 0x240f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FC0u;
            goto label_240fc0;
        }
    }
    ctx->pc = 0x240F3Cu;
    // 0x240f3c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x240f40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240f44: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x240F44u;
    {
        const bool branch_taken_0x240f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240f44) {
            ctx->pc = 0x240F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240F44u;
            // 0x240f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FD0u;
            goto label_240fd0;
        }
    }
    ctx->pc = 0x240F4Cu;
    // 0x240f4c: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x240F4Cu;
    {
        const bool branch_taken_0x240f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f4c) {
            ctx->pc = 0x240F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240F4Cu;
            // 0x240f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FACu;
            goto label_240fac;
        }
    }
    ctx->pc = 0x240F54u;
    // 0x240f54: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x240f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x240f58: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x240f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x240f5c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x240f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x240f60: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x240F60u;
    {
        const bool branch_taken_0x240f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240f60) {
            ctx->pc = 0x240F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240F60u;
            // 0x240f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FACu;
            goto label_240fac;
        }
    }
    ctx->pc = 0x240F68u;
    // 0x240f68: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x240F68u;
    {
        const bool branch_taken_0x240f68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f68) {
            ctx->pc = 0x240F80u;
            goto label_240f80;
        }
    }
    ctx->pc = 0x240F70u;
    // 0x240f70: 0xc098b66  jal         func_262D98
    ctx->pc = 0x240F70u;
    SET_GPR_U32(ctx, 31, 0x240F78u);
    ctx->pc = 0x262D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D98u, 0x240F70u, 0x240F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F78u;
label_240f78:
    // 0x240f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x240F78u;
    {
        const bool branch_taken_0x240f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f78) {
            ctx->pc = 0x240F8Cu;
            goto label_240f8c;
        }
    }
    ctx->pc = 0x240F80u;
label_240f80:
    // 0x240f80: 0xc098b14  jal         func_262C50
    ctx->pc = 0x240F80u;
    SET_GPR_U32(ctx, 31, 0x240F88u);
    ctx->pc = 0x240F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F80u;
    // 0x240f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C50u, 0x240F80u, 0x240F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F88u;
label_240f88:
    // 0x240f88: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x240f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_240f8c:
    // 0x240f8c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x240f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x240f90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x240F90u;
    {
        const bool branch_taken_0x240f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240f90) {
            ctx->pc = 0x240F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240F90u;
            // 0x240f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FACu;
            goto label_240fac;
        }
    }
    ctx->pc = 0x240F98u;
    // 0x240f98: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x240f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x240f9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240fa0: 0xc0ae6b8  jal         func_2B9AE0
    ctx->pc = 0x240FA0u;
    SET_GPR_U32(ctx, 31, 0x240FA8u);
    ctx->pc = 0x240FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FA0u;
    // 0x240fa4: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x240FA0u, 0x240FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FA8u;
label_240fa8:
    // 0x240fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240fac:
    // 0x240fac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240fb0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240FB0u;
    SET_GPR_U32(ctx, 31, 0x240FB8u);
    ctx->pc = 0x240FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FB0u;
    // 0x240fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240FB0u, 0x240FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FB8u;
label_240fb8:
    // 0x240fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x240FB8u;
    {
        const bool branch_taken_0x240fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FB8u;
        // 0x240fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fb8) {
            ctx->pc = 0x240FD0u;
            goto label_240fd0;
        }
    }
    ctx->pc = 0x240FC0u;
label_240fc0:
    // 0x240fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240fc4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240FC4u;
    SET_GPR_U32(ctx, 31, 0x240FCCu);
    ctx->pc = 0x240FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FC4u;
    // 0x240fc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240FC4u, 0x240FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FCCu;
label_240fcc:
    // 0x240fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240fd0:
    // 0x240fd0: 0xc08dc16  jal         func_237058
    ctx->pc = 0x240FD0u;
    SET_GPR_U32(ctx, 31, 0x240FD8u);
    ctx->pc = 0x240FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FD0u;
    // 0x240fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x240FD0u, 0x240FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FD8u;
label_240fd8:
    // 0x240fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fdc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x240fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x240fe0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240FE0u;
    SET_GPR_U32(ctx, 31, 0x240FE8u);
    ctx->pc = 0x240FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FE0u;
    // 0x240fe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240FE0u, 0x240FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FE8u;
label_240fe8:
    // 0x240fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fec: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x240fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x240ff0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240FF0u;
    SET_GPR_U32(ctx, 31, 0x240FF8u);
    ctx->pc = 0x240FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FF0u;
    // 0x240ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240FF0u, 0x240FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FF8u;
label_240ff8:
    // 0x240ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x241004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x241008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24100c: 0x3e00008  jr          $ra
    ctx->pc = 0x24100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24100Cu;
        // 0x241010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241014u;
    // 0x241014: 0x0  nop
    ctx->pc = 0x241014u;
    // NOP
    ctx->pc = 0x241018u;
}

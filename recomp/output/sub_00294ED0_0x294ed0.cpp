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

// Function: sub_00294ED0
// Address: 0x294ed0 - 0x295238
void sub_00294ED0_0x294ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294ED0_0x294ed0");
#endif

    switch (ctx->pc) {
        case 0x294ff8u: goto label_294ff8;
        case 0x295020u: goto label_295020;
        case 0x2950f8u: goto label_2950f8;
        case 0x295108u: goto label_295108;
        case 0x29512cu: goto label_29512c;
        case 0x2951f4u: goto label_2951f4;
        case 0x295204u: goto label_295204;
        default: break;
    }

    ctx->pc = 0x294ed0u;

    // 0x294ed0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x294ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x294ed4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x294ed8: 0x9062b821  lbu         $v0, -0x47DF($v1)
    ctx->pc = 0x294ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x294edc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x294edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294ee4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x294ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294eec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x294eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x294ef0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x294ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x294ef4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x294ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x294ef8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x294ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x294efc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x294efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x294f00: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x294f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x294f04: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x294f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x294f08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294F08u;
    {
        const bool branch_taken_0x294f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F08u;
        // 0x294f0c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f08) {
            ctx->pc = 0x294F24u;
            goto label_294f24;
        }
    }
    ctx->pc = 0x294F10u;
    // 0x294f10: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x294f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x294f14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x294f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x294f18: 0x8c43adf0  lw          $v1, -0x5210($v0)
    ctx->pc = 0x294f18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x294f1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x294F1Cu;
    {
        const bool branch_taken_0x294f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F1Cu;
        // 0x294f20: 0xaca300f4  sw          $v1, 0xF4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f1c) {
            ctx->pc = 0x294F70u;
            goto label_294f70;
        }
    }
    ctx->pc = 0x294F24u;
label_294f24:
    // 0x294f24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x294f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x294f28: 0x8ca400f4  lw          $a0, 0xF4($a1)
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x294f2c: 0x2446ac88  addiu       $a2, $v0, -0x5378
    ctx->pc = 0x294f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x294f30: 0x8cc30168  lw          $v1, 0x168($a2)
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x294f34: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x294F34u;
    {
        const bool branch_taken_0x294f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x294F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F34u;
        // 0x294f38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f34) {
            ctx->pc = 0x294F54u;
            goto label_294f54;
        }
    }
    ctx->pc = 0x294F3Cu;
    // 0x294f3c: 0x240402ee  addiu       $a0, $zero, 0x2EE
    ctx->pc = 0x294f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x294f40: 0xaca200ec  sw          $v0, 0xEC($a1)
    ctx->pc = 0x294f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 2));
    // 0x294f44: 0x8cc30168  lw          $v1, 0x168($a2)
    ctx->pc = 0x294f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 360)));
    // 0x294f48: 0xaca400f0  sw          $a0, 0xF0($a1)
    ctx->pc = 0x294f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 4));
    // 0x294f4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x294F4Cu;
    {
        const bool branch_taken_0x294f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F4Cu;
        // 0x294f50: 0xaca300f4  sw          $v1, 0xF4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f4c) {
            ctx->pc = 0x294F70u;
            goto label_294f70;
        }
    }
    ctx->pc = 0x294F54u;
label_294f54:
    // 0x294f54: 0x8ca200ec  lw          $v0, 0xEC($a1)
    ctx->pc = 0x294f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x294f58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x294F58u;
    {
        const bool branch_taken_0x294f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294f58) {
            ctx->pc = 0x294F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F58u;
            // 0x294f5c: 0x8ca400f0  lw          $a0, 0xF0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F74u;
            goto label_294f74;
        }
    }
    ctx->pc = 0x294F60u;
    // 0x294f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294f64: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x294f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x294f68: 0xaca200ec  sw          $v0, 0xEC($a1)
    ctx->pc = 0x294f68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 2));
    // 0x294f6c: 0xaca300f0  sw          $v1, 0xF0($a1)
    ctx->pc = 0x294f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 3));
label_294f70:
    // 0x294f70: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x294f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_294f74:
    // 0x294f74: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294F74u;
    {
        const bool branch_taken_0x294f74 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x294F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F74u;
        // 0x294f78: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f74) {
            ctx->pc = 0x294F90u;
            goto label_294f90;
        }
    }
    ctx->pc = 0x294F7Cu;
    // 0x294f7c: 0x8c622b40  lw          $v0, 0x2B40($v1)
    ctx->pc = 0x294f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11072)));
    // 0x294f80: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x294f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x294f84: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294F84u;
    {
        const bool branch_taken_0x294f84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x294F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F84u;
        // 0x294f88: 0xaca200f0  sw          $v0, 0xF0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f84) {
            ctx->pc = 0x294F90u;
            goto label_294f90;
        }
    }
    ctx->pc = 0x294F8Cu;
    // 0x294f8c: 0xa0e0b821  sb          $zero, -0x47DF($a3)
    ctx->pc = 0x294f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294948897), (uint8_t)GPR_U32(ctx, 0));
label_294f90:
    // 0x294f90: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x294f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x294f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x294f98: 0x3052000f  andi        $s2, $v0, 0xF
    ctx->pc = 0x294f98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x294f9c: 0x2a430009  slti        $v1, $s2, 0x9
    ctx->pc = 0x294f9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x294fa0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294FA0u;
    {
        const bool branch_taken_0x294fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FA0u;
        // 0x294fa4: 0xaca200e0  sw          $v0, 0xE0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fa0) {
            ctx->pc = 0x294FB0u;
            goto label_294fb0;
        }
    }
    ctx->pc = 0x294FA8u;
    // 0x294fa8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x294fac: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x294facu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_294fb0:
    // 0x294fb0: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x294fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x294fb4: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x294fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x294fb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x294fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294fbc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294FBCu;
    {
        const bool branch_taken_0x294fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x294FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FBCu;
        // 0x294fc0: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fbc) {
            ctx->pc = 0x294FD4u;
            goto label_294fd4;
        }
    }
    ctx->pc = 0x294FC4u;
    // 0x294fc4: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x294fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x294fc8: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x294fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x294fcc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x294fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x294fd0: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x294fd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_294fd4:
    // 0x294fd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x294fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x294fd8: 0x24b10070  addiu       $s1, $a1, 0x70
    ctx->pc = 0x294fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x294fdc: 0x2456ac88  addiu       $s6, $v0, -0x5378
    ctx->pc = 0x294fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x294fe0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x294fe0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fe4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x294fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294fe8: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x294fe8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x294fec: 0x24b40054  addiu       $s4, $a1, 0x54
    ctx->pc = 0x294fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x294ff0: 0x26d50190  addiu       $s5, $s6, 0x190
    ctx->pc = 0x294ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 400));
    // 0x294ff4: 0x0  nop
    ctx->pc = 0x294ff4u;
    // NOP
label_294ff8:
    // 0x294ff8: 0x8fc5bd50  lw          $a1, -0x42B0($fp)
    ctx->pc = 0x294ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    // 0x294ffc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x294ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x295000: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x295000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x295004: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x295004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x295008: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x295008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29500c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295010: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295010u;
    {
        const bool branch_taken_0x295010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x295014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295010u;
        // 0x295014: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295010) {
            ctx->pc = 0x29502Cu;
            goto label_29502c;
        }
    }
    ctx->pc = 0x295018u;
    // 0x295018: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x295018u;
    SET_GPR_U32(ctx, 31, 0x295020u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x295018u, 0x295020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295020u;
label_295020:
    // 0x295020: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x295020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x295024: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x295024u;
    {
        const bool branch_taken_0x295024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x295024) {
            ctx->pc = 0x295028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295024u;
            // 0x295028: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295034u;
            goto label_295034;
        }
    }
    ctx->pc = 0x29502Cu;
label_29502c:
    // 0x29502c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29502cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295030: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x295030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_295034:
    // 0x295034: 0x5050002c  beql        $v0, $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x295034u;
    {
        const bool branch_taken_0x295034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x295034) {
            ctx->pc = 0x295038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295034u;
            // 0x295038: 0x8ec20168  lw          $v0, 0x168($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2950E8u;
            goto label_2950e8;
        }
    }
    ctx->pc = 0x29503Cu;
    // 0x29503c: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29503Cu;
    {
        const bool branch_taken_0x29503c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29503Cu;
        // 0x295040: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29503c) {
            ctx->pc = 0x2950E4u;
            goto label_2950e4;
        }
    }
    ctx->pc = 0x295044u;
    // 0x295044: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x295044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x295048: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295048u;
    {
        const bool branch_taken_0x295048 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295048u;
        // 0x29504c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295048) {
            ctx->pc = 0x295064u;
            goto label_295064;
        }
    }
    ctx->pc = 0x295050u;
    // 0x295050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295054: 0x0  nop
    ctx->pc = 0x295054u;
    // NOP
    // 0x295058: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29505c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29505Cu;
    {
        const bool branch_taken_0x29505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29505c) {
            ctx->pc = 0x29507Cu;
            goto label_29507c;
        }
    }
    ctx->pc = 0x295064u;
label_295064:
    // 0x295064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x295068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29506c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295070: 0x0  nop
    ctx->pc = 0x295070u;
    // NOP
    // 0x295074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295078: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x295078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29507c:
    // 0x29507c: 0x3c013a66  lui         $at, 0x3A66
    ctx->pc = 0x29507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14950 << 16));
    // 0x295080: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x295080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x295084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295088: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29508c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29508cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295090: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x295090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x295094: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x295094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x295098: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295098u;
    {
        const bool branch_taken_0x295098 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295098u;
        // 0x29509c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295098) {
            ctx->pc = 0x2950B4u;
            goto label_2950b4;
        }
    }
    ctx->pc = 0x2950A0u;
    // 0x2950a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2950a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2950a4: 0x0  nop
    ctx->pc = 0x2950a4u;
    // NOP
    // 0x2950a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2950a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2950ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2950ACu;
    {
        const bool branch_taken_0x2950ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2950ac) {
            ctx->pc = 0x2950CCu;
            goto label_2950cc;
        }
    }
    ctx->pc = 0x2950B4u;
label_2950b4:
    // 0x2950b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2950b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2950b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2950b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2950bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2950bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2950c0: 0x0  nop
    ctx->pc = 0x2950c0u;
    // NOP
    // 0x2950c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2950c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2950c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2950c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2950cc:
    // 0x2950cc: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x2950ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x2950d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2950d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2950d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2950d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2950d8: 0x0  nop
    ctx->pc = 0x2950d8u;
    // NOP
    // 0x2950dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2950dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2950e0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2950e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2950e4:
    // 0x2950e4: 0x8ec20168  lw          $v0, 0x168($s6)
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 360)));
label_2950e8:
    // 0x2950e8: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2950E8u;
    {
        const bool branch_taken_0x2950e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2950ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950E8u;
        // 0x2950ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950e8) {
            ctx->pc = 0x295100u;
            goto label_295100;
        }
    }
    ctx->pc = 0x2950F0u;
    // 0x2950f0: 0xc0a5360  jal         func_294D80
    ctx->pc = 0x2950F0u;
    SET_GPR_U32(ctx, 31, 0x2950F8u);
    ctx->pc = 0x2950F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950F0u;
    // 0x2950f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D80u, 0x2950F0u, 0x2950F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950F8u;
label_2950f8:
    // 0x2950f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2950F8u;
    {
        const bool branch_taken_0x2950f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950F8u;
        // 0x2950fc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950f8) {
            ctx->pc = 0x295108u;
            goto label_295108;
        }
    }
    ctx->pc = 0x295100u;
label_295100:
    // 0x295100: 0xc0a5360  jal         func_294D80
    ctx->pc = 0x295100u;
    SET_GPR_U32(ctx, 31, 0x295108u);
    ctx->pc = 0x295104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295100u;
    // 0x295104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D80u, 0x295100u, 0x295108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295108u;
label_295108:
    // 0x295108: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29510c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x29510cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x295110: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x295110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x295114: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x295114u;
    {
        const bool branch_taken_0x295114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295114u;
        // 0x295118: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295114) {
            ctx->pc = 0x294FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294ff8;
        }
    }
    ctx->pc = 0x29511Cu;
    // 0x29511c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x29511cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x295120: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x295120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x295124: 0xc0a8d56  jal         func_2A3558
    ctx->pc = 0x295124u;
    SET_GPR_U32(ctx, 31, 0x29512Cu);
    ctx->pc = 0x295128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295124u;
    // 0x295128: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3558u, 0x295124u, 0x29512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29512Cu;
label_29512c:
    // 0x29512c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29512cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295130: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x295130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x295134: 0x1043002b  beq         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x295134u;
    {
        const bool branch_taken_0x295134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x295134) {
            ctx->pc = 0x2951E4u;
            goto label_2951e4;
        }
    }
    ctx->pc = 0x29513Cu;
    // 0x29513c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x29513Cu;
    {
        const bool branch_taken_0x29513c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29513Cu;
        // 0x295140: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29513c) {
            ctx->pc = 0x2951E4u;
            goto label_2951e4;
        }
    }
    ctx->pc = 0x295144u;
    // 0x295144: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x295144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x295148: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295148u;
    {
        const bool branch_taken_0x295148 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295148u;
        // 0x29514c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295148) {
            ctx->pc = 0x295164u;
            goto label_295164;
        }
    }
    ctx->pc = 0x295150u;
    // 0x295150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295154: 0x0  nop
    ctx->pc = 0x295154u;
    // NOP
    // 0x295158: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29515c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29515Cu;
    {
        const bool branch_taken_0x29515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29515c) {
            ctx->pc = 0x29517Cu;
            goto label_29517c;
        }
    }
    ctx->pc = 0x295164u;
label_295164:
    // 0x295164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x295168: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29516c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29516cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295170: 0x0  nop
    ctx->pc = 0x295170u;
    // NOP
    // 0x295174: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295178: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x295178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29517c:
    // 0x29517c: 0x3c013a66  lui         $at, 0x3A66
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14950 << 16));
    // 0x295180: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x295184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295188: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x295188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x29518c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29518cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295190: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x295190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x295194: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x295194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x295198: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295198u;
    {
        const bool branch_taken_0x295198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295198u;
        // 0x29519c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295198) {
            ctx->pc = 0x2951B4u;
            goto label_2951b4;
        }
    }
    ctx->pc = 0x2951A0u;
    // 0x2951a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2951a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2951a4: 0x0  nop
    ctx->pc = 0x2951a4u;
    // NOP
    // 0x2951a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2951a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2951ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2951ACu;
    {
        const bool branch_taken_0x2951ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2951ac) {
            ctx->pc = 0x2951CCu;
            goto label_2951cc;
        }
    }
    ctx->pc = 0x2951B4u;
label_2951b4:
    // 0x2951b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2951b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2951b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2951b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2951bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2951bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2951c0: 0x0  nop
    ctx->pc = 0x2951c0u;
    // NOP
    // 0x2951c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2951c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2951c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2951c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2951cc:
    // 0x2951cc: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x2951d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2951d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2951d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2951d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2951d8: 0x0  nop
    ctx->pc = 0x2951d8u;
    // NOP
    // 0x2951dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2951dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2951e0: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x2951e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_2951e4:
    // 0x2951e4: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2951E4u;
    {
        const bool branch_taken_0x2951e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2951E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951E4u;
        // 0x2951e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951e4) {
            ctx->pc = 0x2951FCu;
            goto label_2951fc;
        }
    }
    ctx->pc = 0x2951ECu;
    // 0x2951ec: 0xc0a5360  jal         func_294D80
    ctx->pc = 0x2951ECu;
    SET_GPR_U32(ctx, 31, 0x2951F4u);
    ctx->pc = 0x2951F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951ECu;
    // 0x2951f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D80u, 0x2951ECu, 0x2951F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951F4u;
label_2951f4:
    // 0x2951f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2951F4u;
    {
        const bool branch_taken_0x2951f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951F4u;
        // 0x2951f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951f4) {
            ctx->pc = 0x295208u;
            goto label_295208;
        }
    }
    ctx->pc = 0x2951FCu;
label_2951fc:
    // 0x2951fc: 0xc0a5360  jal         func_294D80
    ctx->pc = 0x2951FCu;
    SET_GPR_U32(ctx, 31, 0x295204u);
    ctx->pc = 0x295200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951FCu;
    // 0x295200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D80u, 0x2951FCu, 0x295204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295204u;
label_295204:
    // 0x295204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295208:
    // 0x295208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x295208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29520c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29520cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295210: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x295210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x295214: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x295214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295218: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x295218u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29521c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29521cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295220: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x295220u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x295224: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x295224u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295228: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x295228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29522c: 0x3e00008  jr          $ra
    ctx->pc = 0x29522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29522Cu;
        // 0x295230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29522Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295234u;
    // 0x295234: 0x0  nop
    ctx->pc = 0x295234u;
    // NOP
    ctx->pc = 0x295238u;
}

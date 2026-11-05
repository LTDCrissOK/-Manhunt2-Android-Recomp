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

// Function: sub_0034BE60
// Address: 0x34be60 - 0x34bfe0
void sub_0034BE60_0x34be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BE60_0x34be60");
#endif

    switch (ctx->pc) {
        case 0x34be9cu: goto label_34be9c;
        case 0x34beb0u: goto label_34beb0;
        case 0x34bebcu: goto label_34bebc;
        case 0x34bec4u: goto label_34bec4;
        case 0x34beccu: goto label_34becc;
        case 0x34bf08u: goto label_34bf08;
        case 0x34bf18u: goto label_34bf18;
        case 0x34bf28u: goto label_34bf28;
        case 0x34bf8cu: goto label_34bf8c;
        case 0x34bfb4u: goto label_34bfb4;
        default: break;
    }

    ctx->pc = 0x34be60u;

    // 0x34be60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34be64: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x34be64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x34be68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34be6c: 0x24e765b0  addiu       $a3, $a3, 0x65B0
    ctx->pc = 0x34be6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26032));
    // 0x34be70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34be70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be74: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x34be74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34be78: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x34be78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x34be7c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x34be7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x34be80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34be84: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x34be84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34be88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34be8c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x34be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x34be90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34be94: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x34BE94u;
    SET_GPR_U32(ctx, 31, 0x34BE9Cu);
    ctx->pc = 0x34BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BE94u;
    // 0x34be98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x34BE94u, 0x34BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE9Cu;
label_34be9c:
    // 0x34be9c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x34be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x34bea0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34bea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34bea4: 0x24725ad0  addiu       $s2, $v1, 0x5AD0
    ctx->pc = 0x34bea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 23248));
    // 0x34bea8: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x34BEA8u;
    SET_GPR_U32(ctx, 31, 0x34BEB0u);
    ctx->pc = 0x34BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BEA8u;
    // 0x34beac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x34BEA8u, 0x34BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BEB0u;
label_34beb0:
    // 0x34beb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34beb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34beb4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34BEB4u;
    SET_GPR_U32(ctx, 31, 0x34BEBCu);
    ctx->pc = 0x34BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BEB4u;
    // 0x34beb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34BEB4u, 0x34BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BEBCu;
label_34bebc:
    // 0x34bebc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34BEBCu;
    SET_GPR_U32(ctx, 31, 0x34BEC4u);
    ctx->pc = 0x34BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BEBCu;
    // 0x34bec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34BEBCu, 0x34BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BEC4u;
label_34bec4:
    // 0x34bec4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34BEC4u;
    SET_GPR_U32(ctx, 31, 0x34BECCu);
    ctx->pc = 0x34BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BEC4u;
    // 0x34bec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34BEC4u, 0x34BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BECCu;
label_34becc:
    // 0x34becc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x34beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bed0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x34bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x34bed4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x34bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x34bed8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34bedc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34bee0: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x34bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x34bee4: 0x24a565c0  addiu       $a1, $a1, 0x65C0
    ctx->pc = 0x34bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
    // 0x34bee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34bee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34beec: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x34beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34bef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34bef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bef8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x34bef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34befc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x34befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bf00: 0xc0b0a1c  jal         func_2C2870
    ctx->pc = 0x34BF00u;
    SET_GPR_U32(ctx, 31, 0x34BF08u);
    ctx->pc = 0x34BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF00u;
    // 0x34bf04: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x34BF00u, 0x34BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF08u;
label_34bf08:
    // 0x34bf08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BF08u;
    {
        const bool branch_taken_0x34bf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bf08) {
            ctx->pc = 0x34BF18u;
            goto label_34bf18;
        }
    }
    ctx->pc = 0x34BF10u;
    // 0x34bf10: 0xc0b0ef2  jal         func_2C3BC8
    ctx->pc = 0x34BF10u;
    SET_GPR_U32(ctx, 31, 0x34BF18u);
    ctx->pc = 0x34BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF10u;
    // 0x34bf14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x34BF10u, 0x34BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF18u;
label_34bf18:
    // 0x34bf18: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BF18u;
    {
        const bool branch_taken_0x34bf18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF18u;
        // 0x34bf1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf18) {
            ctx->pc = 0x34BF28u;
            goto label_34bf28;
        }
    }
    ctx->pc = 0x34BF20u;
    // 0x34bf20: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x34BF20u;
    SET_GPR_U32(ctx, 31, 0x34BF28u);
    ctx->pc = 0x34BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF20u;
    // 0x34bf24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x34BF20u, 0x34BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF28u;
label_34bf28:
    // 0x34bf28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x34bf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bf2c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x34bf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x34bf30: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34bf30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34bf34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34bf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34bf38: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x34bf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x34bf3c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x34bf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x34bf40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34bf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34bf44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bf48: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34bf48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34bf4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34bf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bf50: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x34bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x34bf54: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x34bf54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x34bf58: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x34bf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x34bf5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34bf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bf60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x34bf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x34bf64: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x34bf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x34bf68: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x34bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bf6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34bf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34bf70: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x34bf70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x34bf74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x34bf74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bf78: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x34bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x34bf7c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x34bf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bf80: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x34bf80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bf84: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x34BF84u;
    SET_GPR_U32(ctx, 31, 0x34BF8Cu);
    ctx->pc = 0x34BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF84u;
    // 0x34bf88: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x34BF84u, 0x34BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF8Cu;
label_34bf8c:
    // 0x34bf8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34bf90: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x34bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x34bf94: 0xa0702ce8  sb          $s0, 0x2CE8($v1)
    ctx->pc = 0x34bf94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x482CE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CE8u, _value); } while (0);
    // 0x34bf98: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34bf98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34bf9c: 0xf841be20  sqc2        $vf1, -0x41E0($v0)
    ctx->pc = 0x34bf9cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5BBE20u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5BBE20u, _value); } while (0);
    // 0x34bfa0: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x34bfa4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34BFA4u;
    {
        const bool branch_taken_0x34bfa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFA4u;
        // 0x34bfa8: 0xa2200075  sb          $zero, 0x75($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bfa4) {
            ctx->pc = 0x34BFB8u;
            goto label_34bfb8;
        }
    }
    ctx->pc = 0x34BFACu;
    // 0x34bfac: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34BFACu;
    SET_GPR_U32(ctx, 31, 0x34BFB4u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34BFACu, 0x34BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BFB4u;
label_34bfb4:
    // 0x34bfb4: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x34bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_34bfb8:
    // 0x34bfb8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34bfbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34bfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bfc0: 0x8c622ce0  lw          $v0, 0x2CE0($v1)
    ctx->pc = 0x34bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CE0u));
    // 0x34bfc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34bfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bfc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34bfcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34bfccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bfd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34bfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34bfd4: 0xac622ce0  sw          $v0, 0x2CE0($v1)
    ctx->pc = 0x34bfd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CE0u, _value); } while (0);
    // 0x34bfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x34BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFD8u;
        // 0x34bfdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BFE0u;
}

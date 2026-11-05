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

// Function: sub_00224DD0
// Address: 0x224dd0 - 0x224f80
void sub_00224DD0_0x224dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224DD0_0x224dd0");
#endif

    switch (ctx->pc) {
        case 0x224e04u: goto label_224e04;
        case 0x224e18u: goto label_224e18;
        case 0x224e48u: goto label_224e48;
        case 0x224e5cu: goto label_224e5c;
        case 0x224e8cu: goto label_224e8c;
        case 0x224ea0u: goto label_224ea0;
        case 0x224eb8u: goto label_224eb8;
        case 0x224eccu: goto label_224ecc;
        case 0x224ee4u: goto label_224ee4;
        case 0x224ef8u: goto label_224ef8;
        case 0x224f10u: goto label_224f10;
        case 0x224f24u: goto label_224f24;
        case 0x224f3cu: goto label_224f3c;
        case 0x224f54u: goto label_224f54;
        case 0x224f64u: goto label_224f64;
        default: break;
    }

    ctx->pc = 0x224dd0u;

    // 0x224dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224dd4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x224dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x224dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224ddc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x224ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224de4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224de8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224dec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224df0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224df4: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x224df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x224df8: 0x24a53df0  addiu       $a1, $a1, 0x3DF0
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15856));
    // 0x224dfc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224DFCu;
    SET_GPR_U32(ctx, 31, 0x224E04u);
    ctx->pc = 0x224E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224DFCu;
    // 0x224e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224DFCu, 0x224E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E04u;
label_224e04:
    // 0x224e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224e08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224E08u;
    {
        const bool branch_taken_0x224e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E08u;
        // 0x224e0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e08) {
            ctx->pc = 0x224E38u;
            goto label_224e38;
        }
    }
    ctx->pc = 0x224E10u;
    // 0x224e10: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224E10u;
    SET_GPR_U32(ctx, 31, 0x224E18u);
    ctx->pc = 0x224E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E10u;
    // 0x224e14: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224E10u, 0x224E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E18u;
label_224e18:
    // 0x224e18: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x224e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e1c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x224e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x224e20: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x224e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x224e24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x224e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224e28: 0x0  nop
    ctx->pc = 0x224e28u;
    // NOP
    // 0x224e2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x224e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x224e30: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x224E30u;
    {
        const bool branch_taken_0x224e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E30u;
        // 0x224e34: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e30) {
            ctx->pc = 0x224F64u;
            goto label_224f64;
        }
    }
    ctx->pc = 0x224E38u;
label_224e38:
    // 0x224e38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224E40u;
    SET_GPR_U32(ctx, 31, 0x224E48u);
    ctx->pc = 0x224E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E40u;
    // 0x224e44: 0x24a53e08  addiu       $a1, $a1, 0x3E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224E40u, 0x224E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E48u;
label_224e48:
    // 0x224e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224e4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224E4Cu;
    {
        const bool branch_taken_0x224e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E4Cu;
        // 0x224e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e4c) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224E54u;
    // 0x224e54: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224E54u;
    SET_GPR_U32(ctx, 31, 0x224E5Cu);
    ctx->pc = 0x224E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E54u;
    // 0x224e58: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224E54u, 0x224E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E5Cu;
label_224e5c:
    // 0x224e5c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x224e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e60: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x224e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x224e64: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x224e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x224e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x224e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224e6c: 0x0  nop
    ctx->pc = 0x224e6cu;
    // NOP
    // 0x224e70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x224e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x224e74: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x224E74u;
    {
        const bool branch_taken_0x224e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E74u;
        // 0x224e78: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e74) {
            ctx->pc = 0x224F64u;
            goto label_224f64;
        }
    }
    ctx->pc = 0x224E7Cu;
label_224e7c:
    // 0x224e7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224E84u;
    SET_GPR_U32(ctx, 31, 0x224E8Cu);
    ctx->pc = 0x224E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E84u;
    // 0x224e88: 0x24a53e20  addiu       $a1, $a1, 0x3E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224E84u, 0x224E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E8Cu;
label_224e8c:
    // 0x224e8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224E90u;
    {
        const bool branch_taken_0x224e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E90u;
        // 0x224e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e90) {
            ctx->pc = 0x224EA8u;
            goto label_224ea8;
        }
    }
    ctx->pc = 0x224E98u;
    // 0x224e98: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224E98u;
    SET_GPR_U32(ctx, 31, 0x224EA0u);
    ctx->pc = 0x224E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E98u;
    // 0x224e9c: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224E98u, 0x224EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EA0u;
label_224ea0:
    // 0x224ea0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x224EA0u;
    {
        const bool branch_taken_0x224ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EA0u;
        // 0x224ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ea0) {
            ctx->pc = 0x224F68u;
            goto label_224f68;
        }
    }
    ctx->pc = 0x224EA8u;
label_224ea8:
    // 0x224ea8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224EB0u;
    SET_GPR_U32(ctx, 31, 0x224EB8u);
    ctx->pc = 0x224EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EB0u;
    // 0x224eb4: 0x24a53e30  addiu       $a1, $a1, 0x3E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224EB0u, 0x224EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EB8u;
label_224eb8:
    // 0x224eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224ebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224EBCu;
    {
        const bool branch_taken_0x224ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EBCu;
        // 0x224ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ebc) {
            ctx->pc = 0x224ED4u;
            goto label_224ed4;
        }
    }
    ctx->pc = 0x224EC4u;
    // 0x224ec4: 0xc09e056  jal         func_278158
    ctx->pc = 0x224EC4u;
    SET_GPR_U32(ctx, 31, 0x224ECCu);
    ctx->pc = 0x224EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EC4u;
    // 0x224ec8: 0x2625006c  addiu       $a1, $s1, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x224EC4u, 0x224ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224ECCu;
label_224ecc:
    // 0x224ecc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x224ECCu;
    {
        const bool branch_taken_0x224ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ECCu;
        // 0x224ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ecc) {
            ctx->pc = 0x224F68u;
            goto label_224f68;
        }
    }
    ctx->pc = 0x224ED4u;
label_224ed4:
    // 0x224ed4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224edc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224EDCu;
    SET_GPR_U32(ctx, 31, 0x224EE4u);
    ctx->pc = 0x224EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EDCu;
    // 0x224ee0: 0x24a53e40  addiu       $a1, $a1, 0x3E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224EDCu, 0x224EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EE4u;
label_224ee4:
    // 0x224ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224ee8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224EE8u;
    {
        const bool branch_taken_0x224ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EE8u;
        // 0x224eec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ee8) {
            ctx->pc = 0x224F00u;
            goto label_224f00;
        }
    }
    ctx->pc = 0x224EF0u;
    // 0x224ef0: 0xc09e056  jal         func_278158
    ctx->pc = 0x224EF0u;
    SET_GPR_U32(ctx, 31, 0x224EF8u);
    ctx->pc = 0x224EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EF0u;
    // 0x224ef4: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x224EF0u, 0x224EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EF8u;
label_224ef8:
    // 0x224ef8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x224EF8u;
    {
        const bool branch_taken_0x224ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EF8u;
        // 0x224efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ef8) {
            ctx->pc = 0x224F68u;
            goto label_224f68;
        }
    }
    ctx->pc = 0x224F00u;
label_224f00:
    // 0x224f00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224F08u;
    SET_GPR_U32(ctx, 31, 0x224F10u);
    ctx->pc = 0x224F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F08u;
    // 0x224f0c: 0x24a53e48  addiu       $a1, $a1, 0x3E48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224F08u, 0x224F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F10u;
label_224f10:
    // 0x224f10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224f14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224F14u;
    {
        const bool branch_taken_0x224f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F14u;
        // 0x224f18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f14) {
            ctx->pc = 0x224F2Cu;
            goto label_224f2c;
        }
    }
    ctx->pc = 0x224F1Cu;
    // 0x224f1c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224F1Cu;
    SET_GPR_U32(ctx, 31, 0x224F24u);
    ctx->pc = 0x224F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F1Cu;
    // 0x224f20: 0x26250074  addiu       $a1, $s1, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224F1Cu, 0x224F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F24u;
label_224f24:
    // 0x224f24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x224F24u;
    {
        const bool branch_taken_0x224f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F24u;
        // 0x224f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f24) {
            ctx->pc = 0x224F68u;
            goto label_224f68;
        }
    }
    ctx->pc = 0x224F2Cu;
label_224f2c:
    // 0x224f2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224F34u;
    SET_GPR_U32(ctx, 31, 0x224F3Cu);
    ctx->pc = 0x224F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F34u;
    // 0x224f38: 0x24a53e60  addiu       $a1, $a1, 0x3E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224F34u, 0x224F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F3Cu;
label_224f3c:
    // 0x224f3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224f40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224F40u;
    {
        const bool branch_taken_0x224f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F40u;
        // 0x224f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f40) {
            ctx->pc = 0x224F5Cu;
            goto label_224f5c;
        }
    }
    ctx->pc = 0x224F48u;
    // 0x224f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f4c: 0xc08920a  jal         func_224828
    ctx->pc = 0x224F4Cu;
    SET_GPR_U32(ctx, 31, 0x224F54u);
    ctx->pc = 0x224F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F4Cu;
    // 0x224f50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224828u, 0x224F4Cu, 0x224F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F54u;
label_224f54:
    // 0x224f54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x224F54u;
    {
        const bool branch_taken_0x224f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F54u;
        // 0x224f58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f54) {
            ctx->pc = 0x224F6Cu;
            goto label_224f6c;
        }
    }
    ctx->pc = 0x224F5Cu;
label_224f5c:
    // 0x224f5c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224F5Cu;
    SET_GPR_U32(ctx, 31, 0x224F64u);
    ctx->pc = 0x224F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F5Cu;
    // 0x224f60: 0x26250078  addiu       $a1, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224F5Cu, 0x224F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F64u;
label_224f64:
    // 0x224f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224f68:
    // 0x224f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224f6c:
    // 0x224f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224f74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224f78: 0x3e00008  jr          $ra
    ctx->pc = 0x224F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F78u;
        // 0x224f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F80u;
}

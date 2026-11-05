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

// Function: sub_0031BEB8
// Address: 0x31beb8 - 0x31c150
void sub_0031BEB8_0x31beb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BEB8_0x31beb8");
#endif

    switch (ctx->pc) {
        case 0x31bf00u: goto label_31bf00;
        case 0x31bf20u: goto label_31bf20;
        case 0x31bf2cu: goto label_31bf2c;
        case 0x31bf44u: goto label_31bf44;
        case 0x31bf5cu: goto label_31bf5c;
        case 0x31bf78u: goto label_31bf78;
        case 0x31bf90u: goto label_31bf90;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfc0u: goto label_31bfc0;
        case 0x31bfdcu: goto label_31bfdc;
        case 0x31bff4u: goto label_31bff4;
        case 0x31c00cu: goto label_31c00c;
        case 0x31c024u: goto label_31c024;
        case 0x31c040u: goto label_31c040;
        case 0x31c058u: goto label_31c058;
        case 0x31c070u: goto label_31c070;
        case 0x31c084u: goto label_31c084;
        case 0x31c0a0u: goto label_31c0a0;
        case 0x31c0b4u: goto label_31c0b4;
        case 0x31c0ccu: goto label_31c0cc;
        case 0x31c0e0u: goto label_31c0e0;
        case 0x31c0fcu: goto label_31c0fc;
        case 0x31c108u: goto label_31c108;
        case 0x31c11cu: goto label_31c11c;
        default: break;
    }

    ctx->pc = 0x31beb8u;

    // 0x31beb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31beb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31bebc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31bec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31bec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bec8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31becc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31beccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31bed0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31bed4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31bed8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31bedc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31bee0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31bee4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31bee8: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x31bee8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x31beec: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31bef0: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x31bef0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x31bef4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x31bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31bef8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31BEF8u;
    SET_GPR_U32(ctx, 31, 0x31BF00u);
    ctx->pc = 0x31BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEF8u;
    // 0x31befc: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31BEF8u, 0x31BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF00u;
label_31bf00:
    // 0x31bf00: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x31bf04: 0x2451cc24  addiu       $s1, $v0, -0x33DC
    ctx->pc = 0x31bf04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954020));
    // 0x31bf08: 0x26350004  addiu       $s5, $s1, 0x4
    ctx->pc = 0x31bf08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31bf0c: 0x26340008  addiu       $s4, $s1, 0x8
    ctx->pc = 0x31bf0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x31bf10: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x31bf10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x31bf14: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x31BF14u;
    {
        const bool branch_taken_0x31bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF14u;
        // 0x31bf18: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf14) {
            ctx->pc = 0x31C0FCu;
            goto label_31c0fc;
        }
    }
    ctx->pc = 0x31BF1Cu;
    // 0x31bf1c: 0x0  nop
    ctx->pc = 0x31bf1cu;
    // NOP
label_31bf20:
    // 0x31bf20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BF24u;
    SET_GPR_U32(ctx, 31, 0x31BF2Cu);
    ctx->pc = 0x31BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF24u;
    // 0x31bf28: 0x24453c20  addiu       $a1, $v0, 0x3C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BF24u, 0x31BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF2Cu;
label_31bf2c:
    // 0x31bf2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bf30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BF30u;
    {
        const bool branch_taken_0x31bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF30u;
        // 0x31bf34: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf30) {
            ctx->pc = 0x31BF4Cu;
            goto label_31bf4c;
        }
    }
    ctx->pc = 0x31BF38u;
    // 0x31bf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31bf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf3c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31BF3Cu;
    SET_GPR_U32(ctx, 31, 0x31BF44u);
    ctx->pc = 0x31BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF3Cu;
    // 0x31bf40: 0x2445cc10  addiu       $a1, $v0, -0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31BF3Cu, 0x31BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF44u;
label_31bf44:
    // 0x31bf44: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x31BF44u;
    {
        const bool branch_taken_0x31bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF44u;
        // 0x31bf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf44) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31BF4Cu;
label_31bf4c:
    // 0x31bf4c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31bf50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BF54u;
    SET_GPR_U32(ctx, 31, 0x31BF5Cu);
    ctx->pc = 0x31BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF54u;
    // 0x31bf58: 0x24453c38  addiu       $a1, $v0, 0x3C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BF54u, 0x31BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF5Cu;
label_31bf5c:
    // 0x31bf5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bf60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BF60u;
    {
        const bool branch_taken_0x31bf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF60u;
        // 0x31bf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf60) {
            ctx->pc = 0x31BF80u;
            goto label_31bf80;
        }
    }
    ctx->pc = 0x31BF68u;
    // 0x31bf68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf6c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x31bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x31bf70: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31BF70u;
    SET_GPR_U32(ctx, 31, 0x31BF78u);
    ctx->pc = 0x31BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF70u;
    // 0x31bf74: 0x26270028  addiu       $a3, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31BF70u, 0x31BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF78u;
label_31bf78:
    // 0x31bf78: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x31BF78u;
    {
        const bool branch_taken_0x31bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF78u;
        // 0x31bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf78) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31BF80u;
label_31bf80:
    // 0x31bf80: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31bf84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BF88u;
    SET_GPR_U32(ctx, 31, 0x31BF90u);
    ctx->pc = 0x31BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF88u;
    // 0x31bf8c: 0x24453c50  addiu       $a1, $v0, 0x3C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BF88u, 0x31BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF90u;
label_31bf90:
    // 0x31bf90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bf94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BF94u;
    {
        const bool branch_taken_0x31bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF94u;
        // 0x31bf98: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf94) {
            ctx->pc = 0x31BFB0u;
            goto label_31bfb0;
        }
    }
    ctx->pc = 0x31BF9Cu;
    // 0x31bf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfa0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31BFA0u;
    SET_GPR_U32(ctx, 31, 0x31BFA8u);
    ctx->pc = 0x31BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFA0u;
    // 0x31bfa4: 0x2445cc14  addiu       $a1, $v0, -0x33EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31BFA0u, 0x31BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFA8u;
label_31bfa8:
    // 0x31bfa8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x31BFA8u;
    {
        const bool branch_taken_0x31bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFA8u;
        // 0x31bfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfa8) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31BFB0u;
label_31bfb0:
    // 0x31bfb0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31bfb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfb8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BFB8u;
    SET_GPR_U32(ctx, 31, 0x31BFC0u);
    ctx->pc = 0x31BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFB8u;
    // 0x31bfbc: 0x24453c68  addiu       $a1, $v0, 0x3C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BFB8u, 0x31BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFC0u;
label_31bfc0:
    // 0x31bfc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bfc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BFC4u;
    {
        const bool branch_taken_0x31bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFC4u;
        // 0x31bfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfc4) {
            ctx->pc = 0x31BFE4u;
            goto label_31bfe4;
        }
    }
    ctx->pc = 0x31BFCCu;
    // 0x31bfcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31bfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfd0: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x31bfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x31bfd4: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31BFD4u;
    SET_GPR_U32(ctx, 31, 0x31BFDCu);
    ctx->pc = 0x31BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFD4u;
    // 0x31bfd8: 0x26a70028  addiu       $a3, $s5, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31BFD4u, 0x31BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFDCu;
label_31bfdc:
    // 0x31bfdc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x31BFDCu;
    {
        const bool branch_taken_0x31bfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFDCu;
        // 0x31bfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfdc) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31BFE4u;
label_31bfe4:
    // 0x31bfe4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31bfe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BFECu;
    SET_GPR_U32(ctx, 31, 0x31BFF4u);
    ctx->pc = 0x31BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFECu;
    // 0x31bff0: 0x24453c80  addiu       $a1, $v0, 0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BFECu, 0x31BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFF4u;
label_31bff4:
    // 0x31bff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bff8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BFF8u;
    {
        const bool branch_taken_0x31bff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFF8u;
        // 0x31bffc: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bff8) {
            ctx->pc = 0x31C014u;
            goto label_31c014;
        }
    }
    ctx->pc = 0x31C000u;
    // 0x31c000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c004: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C004u;
    SET_GPR_U32(ctx, 31, 0x31C00Cu);
    ctx->pc = 0x31C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C004u;
    // 0x31c008: 0x24a5cc18  addiu       $a1, $a1, -0x33E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C004u, 0x31C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C00Cu;
label_31c00c:
    // 0x31c00c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x31C00Cu;
    {
        const bool branch_taken_0x31c00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C00Cu;
        // 0x31c010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c00c) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C014u;
label_31c014:
    // 0x31c014: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c018: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c01c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C01Cu;
    SET_GPR_U32(ctx, 31, 0x31C024u);
    ctx->pc = 0x31C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C01Cu;
    // 0x31c020: 0x24453c98  addiu       $a1, $v0, 0x3C98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C01Cu, 0x31C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C024u;
label_31c024:
    // 0x31c024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c028: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C028u;
    {
        const bool branch_taken_0x31c028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C028u;
        // 0x31c02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c028) {
            ctx->pc = 0x31C048u;
            goto label_31c048;
        }
    }
    ctx->pc = 0x31C030u;
    // 0x31c030: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31c030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c034: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x31c034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x31c038: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31C038u;
    SET_GPR_U32(ctx, 31, 0x31C040u);
    ctx->pc = 0x31C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C038u;
    // 0x31c03c: 0x26870028  addiu       $a3, $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31C038u, 0x31C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C040u;
label_31c040:
    // 0x31c040: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31C040u;
    {
        const bool branch_taken_0x31c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C040u;
        // 0x31c044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c040) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C048u;
label_31c048:
    // 0x31c048: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c04c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c050: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C050u;
    SET_GPR_U32(ctx, 31, 0x31C058u);
    ctx->pc = 0x31C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C050u;
    // 0x31c054: 0x24453ca8  addiu       $a1, $v0, 0x3CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C050u, 0x31C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C058u;
label_31c058:
    // 0x31c058: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c05c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C05Cu;
    {
        const bool branch_taken_0x31c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C05Cu;
        // 0x31c060: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c05c) {
            ctx->pc = 0x31C078u;
            goto label_31c078;
        }
    }
    ctx->pc = 0x31C064u;
    // 0x31c064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c068: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C068u;
    SET_GPR_U32(ctx, 31, 0x31C070u);
    ctx->pc = 0x31C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C068u;
    // 0x31c06c: 0x24a5cc1c  addiu       $a1, $a1, -0x33E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954012));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C068u, 0x31C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C070u;
label_31c070:
    // 0x31c070: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x31C070u;
    {
        const bool branch_taken_0x31c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C070u;
        // 0x31c074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c070) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C078u;
label_31c078:
    // 0x31c078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c07c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C07Cu;
    SET_GPR_U32(ctx, 31, 0x31C084u);
    ctx->pc = 0x31C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C07Cu;
    // 0x31c080: 0x27c53cc0  addiu       $a1, $fp, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C07Cu, 0x31C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C084u;
label_31c084:
    // 0x31c084: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C088u;
    {
        const bool branch_taken_0x31c088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C088u;
        // 0x31c08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c088) {
            ctx->pc = 0x31C0A8u;
            goto label_31c0a8;
        }
    }
    ctx->pc = 0x31C090u;
    // 0x31c090: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31c090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c094: 0x26660014  addiu       $a2, $s3, 0x14
    ctx->pc = 0x31c094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x31c098: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31C098u;
    SET_GPR_U32(ctx, 31, 0x31C0A0u);
    ctx->pc = 0x31C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C098u;
    // 0x31c09c: 0x26670028  addiu       $a3, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31C098u, 0x31C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C0A0u;
label_31c0a0:
    // 0x31c0a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31C0A0u;
    {
        const bool branch_taken_0x31c0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0A0u;
        // 0x31c0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0a0) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C0A8u;
label_31c0a8:
    // 0x31c0a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C0ACu;
    SET_GPR_U32(ctx, 31, 0x31C0B4u);
    ctx->pc = 0x31C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C0ACu;
    // 0x31c0b0: 0x26e53cd0  addiu       $a1, $s7, 0x3CD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 15568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C0ACu, 0x31C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C0B4u;
label_31c0b4:
    // 0x31c0b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c0b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C0B8u;
    {
        const bool branch_taken_0x31c0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0B8u;
        // 0x31c0bc: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0b8) {
            ctx->pc = 0x31C0D4u;
            goto label_31c0d4;
        }
    }
    ctx->pc = 0x31C0C0u;
    // 0x31c0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0c4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C0C4u;
    SET_GPR_U32(ctx, 31, 0x31C0CCu);
    ctx->pc = 0x31C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C0C4u;
    // 0x31c0c8: 0x24a5cc20  addiu       $a1, $a1, -0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C0C4u, 0x31C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C0CCu;
label_31c0cc:
    // 0x31c0cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31C0CCu;
    {
        const bool branch_taken_0x31c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0CCu;
        // 0x31c0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0cc) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C0D4u;
label_31c0d4:
    // 0x31c0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C0D8u;
    SET_GPR_U32(ctx, 31, 0x31C0E0u);
    ctx->pc = 0x31C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C0D8u;
    // 0x31c0dc: 0x26c53ce8  addiu       $a1, $s6, 0x3CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 15592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C0D8u, 0x31C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C0E0u;
label_31c0e0:
    // 0x31c0e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C0E4u;
    {
        const bool branch_taken_0x31c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0E4u;
        // 0x31c0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0e4) {
            ctx->pc = 0x31C0FCu;
            goto label_31c0fc;
        }
    }
    ctx->pc = 0x31C0ECu;
    // 0x31c0ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0f0: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x31c0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x31c0f4: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31C0F4u;
    SET_GPR_U32(ctx, 31, 0x31C0FCu);
    ctx->pc = 0x31C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C0F4u;
    // 0x31c0f8: 0x26470028  addiu       $a3, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31C0F4u, 0x31C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C0FCu;
label_31c0fc:
    // 0x31c0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c100:
    // 0x31c100: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31C100u;
    SET_GPR_U32(ctx, 31, 0x31C108u);
    ctx->pc = 0x31C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C100u;
    // 0x31c104: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31C100u, 0x31C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C108u;
label_31c108:
    // 0x31c108: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x31C108u;
    {
        const bool branch_taken_0x31c108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C108u;
        // 0x31c10c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c108) {
            ctx->pc = 0x31BF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf20;
        }
    }
    ctx->pc = 0x31C110u;
    // 0x31c110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c114: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31C114u;
    SET_GPR_U32(ctx, 31, 0x31C11Cu);
    ctx->pc = 0x31C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C114u;
    // 0x31c118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31C114u, 0x31C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C11Cu;
label_31c11c:
    // 0x31c11c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31c11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c120: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31c120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31c124: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31c124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c128: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31c128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31c12c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31c12cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c130: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31c130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31c134: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x31c134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c138: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x31c138u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31c13c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x31c13cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c140: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x31c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31c144: 0x3e00008  jr          $ra
    ctx->pc = 0x31C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C144u;
        // 0x31c148: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C14Cu;
    // 0x31c14c: 0x0  nop
    ctx->pc = 0x31c14cu;
    // NOP
    ctx->pc = 0x31c150u;
}

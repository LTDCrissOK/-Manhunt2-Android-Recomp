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

// Function: sub_001FF570
// Address: 0x1ff570 - 0x1ff7b0
void sub_001FF570_0x1ff570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF570_0x1ff570");
#endif

    switch (ctx->pc) {
        case 0x1ff5c8u: goto label_1ff5c8;
        case 0x1ff5d8u: goto label_1ff5d8;
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff63cu: goto label_1ff63c;
        case 0x1ff650u: goto label_1ff650;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff6a0u: goto label_1ff6a0;
        case 0x1ff6bcu: goto label_1ff6bc;
        case 0x1ff6c8u: goto label_1ff6c8;
        case 0x1ff6d0u: goto label_1ff6d0;
        case 0x1ff6e4u: goto label_1ff6e4;
        case 0x1ff6f8u: goto label_1ff6f8;
        case 0x1ff710u: goto label_1ff710;
        case 0x1ff748u: goto label_1ff748;
        case 0x1ff758u: goto label_1ff758;
        case 0x1ff774u: goto label_1ff774;
        case 0x1ff784u: goto label_1ff784;
        default: break;
    }

    ctx->pc = 0x1ff570u;

    // 0x1ff570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff574: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1ff574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1ff578: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ff578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ff57c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ff57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ff580: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x1ff580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x1ff584: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ff584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ff588: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ff588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff58c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ff58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ff590: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ff590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff594: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1ff594u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ff598: 0x24543510  addiu       $s4, $v0, 0x3510
    ctx->pc = 0x1ff598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x1ff59c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ff59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ff5a0: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1ff5a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff5a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ff5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ff5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ff5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ff5ac: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ff5acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ff5b0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1ff5b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ff5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ff5b8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1ff5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A3514u));
    // 0x1ff5bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF5BCu;
    {
        const bool branch_taken_0x1ff5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5BCu;
        // 0x1ff5c0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5bc) {
            ctx->pc = 0x1FF600u;
            goto label_1ff600;
        }
    }
    ctx->pc = 0x1FF5C4u;
    // 0x1ff5c4: 0x0  nop
    ctx->pc = 0x1ff5c4u;
    // NOP
label_1ff5c8:
    // 0x1ff5c8: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FF5C8u;
    {
        const bool branch_taken_0x1ff5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1ff5c8) {
            ctx->pc = 0x1FF5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF5C8u;
            // 0x1ff5cc: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF604u;
            goto label_1ff604;
        }
    }
    ctx->pc = 0x1FF5D0u;
    // 0x1ff5d0: 0xc09c684  jal         func_271A10
    ctx->pc = 0x1FF5D0u;
    SET_GPR_U32(ctx, 31, 0x1FF5D8u);
    ctx->pc = 0x1FF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5D0u;
    // 0x1ff5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A10u, 0x1FF5D0u, 0x1FF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5D8u;
label_1ff5d8:
    // 0x1ff5d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF5D8u;
    {
        const bool branch_taken_0x1ff5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5D8u;
        // 0x1ff5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5d8) {
            ctx->pc = 0x1FF600u;
            goto label_1ff600;
        }
    }
    ctx->pc = 0x1FF5E0u;
    // 0x1ff5e0: 0xc07fdec  jal         func_1FF7B0
    ctx->pc = 0x1FF5E0u;
    SET_GPR_U32(ctx, 31, 0x1FF5E8u);
    ctx->pc = 0x1FF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5E0u;
    // 0x1ff5e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7B0u, 0x1FF5E0u, 0x1FF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5E8u;
label_1ff5e8:
    // 0x1ff5e8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1ff5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff5ec: 0x0  nop
    ctx->pc = 0x1ff5ecu;
    // NOP
    // 0x1ff5f0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF5F0u;
    {
        const bool branch_taken_0x1ff5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ff5f0) {
            ctx->pc = 0x1FF5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF5F0u;
            // 0x1ff5f4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF604u;
            goto label_1ff604;
        }
    }
    ctx->pc = 0x1FF5F8u;
    // 0x1ff5f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1ff5f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1ff5fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1ff5fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff600:
    // 0x1ff600: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1ff604:
    // 0x1ff604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ff604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff608: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF608u;
    {
        const bool branch_taken_0x1ff608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF608u;
        // 0x1ff60c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff608) {
            ctx->pc = 0x1FF614u;
            goto label_1ff614;
        }
    }
    ctx->pc = 0x1FF610u;
    // 0x1ff610: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ff610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff614:
    // 0x1ff614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF614u;
    {
        const bool branch_taken_0x1ff614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF614u;
        // 0x1ff618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff614) {
            ctx->pc = 0x1FF624u;
            goto label_1ff624;
        }
    }
    ctx->pc = 0x1FF61Cu;
    // 0x1ff61c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ff620: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1ff620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_1ff624:
    // 0x1ff624: 0x5600ffe8  bnel        $s0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FF624u;
    {
        const bool branch_taken_0x1ff624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff624) {
            ctx->pc = 0x1FF628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF624u;
            // 0x1ff628: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff5c8;
        }
    }
    ctx->pc = 0x1FF62Cu;
    // 0x1ff62c: 0x12400056  beqz        $s2, . + 4 + (0x56 << 2)
    ctx->pc = 0x1FF62Cu;
    {
        const bool branch_taken_0x1ff62c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF62Cu;
        // 0x1ff630: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff62c) {
            ctx->pc = 0x1FF788u;
            goto label_1ff788;
        }
    }
    ctx->pc = 0x1FF634u;
    // 0x1ff634: 0xc09c682  jal         func_271A08
    ctx->pc = 0x1FF634u;
    SET_GPR_U32(ctx, 31, 0x1FF63Cu);
    ctx->pc = 0x1FF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF634u;
    // 0x1ff638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A08u, 0x1FF634u, 0x1FF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF63Cu;
label_1ff63c:
    // 0x1ff63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff640: 0x52000051  beql        $s0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x1FF640u;
    {
        const bool branch_taken_0x1ff640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff640) {
            ctx->pc = 0x1FF644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF640u;
            // 0x1ff644: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF788u;
            goto label_1ff788;
        }
    }
    ctx->pc = 0x1FF648u;
    // 0x1ff648: 0xc09c528  jal         func_2714A0
    ctx->pc = 0x1FF648u;
    SET_GPR_U32(ctx, 31, 0x1FF650u);
    ctx->pc = 0x1FF64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF648u;
    // 0x1ff64c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714A0u, 0x1FF648u, 0x1FF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF650u;
label_1ff650:
    // 0x1ff650: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1ff650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff654: 0x0  nop
    ctx->pc = 0x1ff654u;
    // NOP
    // 0x1ff658: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
    ctx->pc = 0x1FF658u;
    {
        const bool branch_taken_0x1ff658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF658u;
        // 0x1ff65c: 0x2614ffff  addiu       $s4, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff658) {
            ctx->pc = 0x1FF784u;
            goto label_1ff784;
        }
    }
    ctx->pc = 0x1FF660u;
    // 0x1ff660: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1ff664: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ff664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff668: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ff668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff66c: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1FF66Cu;
    SET_GPR_U32(ctx, 31, 0x1FF674u);
    ctx->pc = 0x1FF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF66Cu;
    // 0x1ff670: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1FF66Cu, 0x1FF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF674u;
label_1ff674:
    // 0x1ff674: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ff674u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ff678: 0xc09c548  jal         func_271520
    ctx->pc = 0x1FF678u;
    SET_GPR_U32(ctx, 31, 0x1FF680u);
    ctx->pc = 0x1FF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF678u;
    // 0x1ff67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271520u, 0x1FF678u, 0x1FF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF680u;
label_1ff680:
    // 0x1ff680: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ff684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff68c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ff68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ff690: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1ff690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1ff694: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff698: 0xc09c54a  jal         func_271528
    ctx->pc = 0x1FF698u;
    SET_GPR_U32(ctx, 31, 0x1FF6A0u);
    ctx->pc = 0x1FF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF698u;
    // 0x1ff69c: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271528u, 0x1FF698u, 0x1FF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6A0u;
label_1ff6a0:
    // 0x1ff6a0: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1ff6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1ff6a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6a8: 0x26310480  addiu       $s1, $s1, 0x480
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x1ff6ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ff6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ff6b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ff6b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ff6b4: 0xc07e6e4  jal         func_1F9B90
    ctx->pc = 0x1FF6B4u;
    SET_GPR_U32(ctx, 31, 0x1FF6BCu);
    ctx->pc = 0x1FF6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6B4u;
    // 0x1ff6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B90u, 0x1FF6B4u, 0x1FF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6BCu;
label_1ff6bc:
    // 0x1ff6bc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1ff6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff6c0: 0xc09c54c  jal         func_271530
    ctx->pc = 0x1FF6C0u;
    SET_GPR_U32(ctx, 31, 0x1FF6C8u);
    ctx->pc = 0x1FF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6C0u;
    // 0x1ff6c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271530u, 0x1FF6C0u, 0x1FF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6C8u;
label_1ff6c8:
    // 0x1ff6c8: 0xc09c538  jal         func_2714E0
    ctx->pc = 0x1FF6C8u;
    SET_GPR_U32(ctx, 31, 0x1FF6D0u);
    ctx->pc = 0x1FF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6C8u;
    // 0x1ff6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714E0u, 0x1FF6C8u, 0x1FF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6D0u;
label_1ff6d0:
    // 0x1ff6d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff6d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ff6d4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1ff6d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1ff6d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6dc: 0xc09c528  jal         func_2714A0
    ctx->pc = 0x1FF6DCu;
    SET_GPR_U32(ctx, 31, 0x1FF6E4u);
    ctx->pc = 0x1FF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6DCu;
    // 0x1ff6e0: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714A0u, 0x1FF6DCu, 0x1FF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6E4u;
label_1ff6e4:
    // 0x1ff6e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ff6e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ff6e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ff6ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ff6f0: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1FF6F0u;
    SET_GPR_U32(ctx, 31, 0x1FF6F8u);
    ctx->pc = 0x1FF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6F0u;
    // 0x1ff6f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1FF6F0u, 0x1FF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6F8u;
label_1ff6f8:
    // 0x1ff6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ff6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff6fc: 0x0  nop
    ctx->pc = 0x1ff6fcu;
    // NOP
    // 0x1ff700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ff700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ff704: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1ff704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff708: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1FF708u;
    SET_GPR_U32(ctx, 31, 0x1FF710u);
    ctx->pc = 0x1FF70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF708u;
    // 0x1ff70c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FF708u, 0x1FF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF710u;
label_1ff710:
    // 0x1ff710: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ff714: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1ff714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1ff718: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1ff718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ff71c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1ff71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ff720: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ff724: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1ff724u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff728: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF728u;
    {
        const bool branch_taken_0x1ff728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF728u;
        // 0x1ff72c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff728) {
            ctx->pc = 0x1FF788u;
            goto label_1ff788;
        }
    }
    ctx->pc = 0x1FF730u;
    // 0x1ff730: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF730u;
    {
        const bool branch_taken_0x1ff730 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1FF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF730u;
        // 0x1ff734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff730) {
            ctx->pc = 0x1FF760u;
            goto label_1ff760;
        }
    }
    ctx->pc = 0x1FF738u;
    // 0x1ff738: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff73c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ff73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff740: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x1FF740u;
    SET_GPR_U32(ctx, 31, 0x1FF748u);
    ctx->pc = 0x1FF744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF740u;
    // 0x1ff744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF870u, 0x1FF740u, 0x1FF748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF748u;
label_1ff748:
    // 0x1ff748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff74c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ff74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff750: 0xc07fe04  jal         func_1FF810
    ctx->pc = 0x1FF750u;
    SET_GPR_U32(ctx, 31, 0x1FF758u);
    ctx->pc = 0x1FF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF750u;
    // 0x1ff754: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF810u, 0x1FF750u, 0x1FF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF758u;
label_1ff758:
    // 0x1ff758: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FF758u;
    {
        const bool branch_taken_0x1ff758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF758u;
        // 0x1ff75c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff758) {
            ctx->pc = 0x1FF788u;
            goto label_1ff788;
        }
    }
    ctx->pc = 0x1FF760u;
label_1ff760:
    // 0x1ff760: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff764: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ff764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff76c: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x1FF76Cu;
    SET_GPR_U32(ctx, 31, 0x1FF774u);
    ctx->pc = 0x1FF770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF76Cu;
    // 0x1ff770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF870u, 0x1FF76Cu, 0x1FF774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF774u;
label_1ff774:
    // 0x1ff774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff778: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ff778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff77c: 0xc07fe04  jal         func_1FF810
    ctx->pc = 0x1FF77Cu;
    SET_GPR_U32(ctx, 31, 0x1FF784u);
    ctx->pc = 0x1FF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF77Cu;
    // 0x1ff780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF810u, 0x1FF77Cu, 0x1FF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF784u;
label_1ff784:
    // 0x1ff784: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ff784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff788:
    // 0x1ff788: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ff788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff78c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ff78cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff790: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ff790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ff794: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ff794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff798: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ff798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ff79c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ff79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff7a0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1ff7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ff7a4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ff7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ff7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7A8u;
        // 0x1ff7ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7B0u;
}

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

// Function: sub_002446B0
// Address: 0x2446b0 - 0x2449d0
void sub_002446B0_0x2446b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002446B0_0x2446b0");
#endif

    switch (ctx->pc) {
        case 0x2446d8u: goto label_2446d8;
        case 0x244740u: goto label_244740;
        case 0x2447a0u: goto label_2447a0;
        case 0x244818u: goto label_244818;
        case 0x244824u: goto label_244824;
        case 0x24482cu: goto label_24482c;
        case 0x244838u: goto label_244838;
        case 0x244868u: goto label_244868;
        case 0x24488cu: goto label_24488c;
        case 0x244898u: goto label_244898;
        case 0x2448f0u: goto label_2448f0;
        case 0x244974u: goto label_244974;
        case 0x244988u: goto label_244988;
        case 0x244998u: goto label_244998;
        case 0x2449acu: goto label_2449ac;
        default: break;
    }

    ctx->pc = 0x2446b0u;

    // 0x2446b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2446b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2446b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2446b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2446bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2446c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2446c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2446c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2446c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2446c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2446c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2446cc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2446ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2446d0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x2446D0u;
    SET_GPR_U32(ctx, 31, 0x2446D8u);
    ctx->pc = 0x2446D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446D0u;
    // 0x2446d4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2446D0u, 0x2446D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446D8u;
label_2446d8:
    // 0x2446d8: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2446D8u;
    {
        const bool branch_taken_0x2446d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2446DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446D8u;
        // 0x2446dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446d8) {
            ctx->pc = 0x2449B0u;
            goto label_2449b0;
        }
    }
    ctx->pc = 0x2446E0u;
    // 0x2446e0: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x2446e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x2446e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2446e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446e8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2446e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2446ec: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2446ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2446f0: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2446F0u;
    {
        const bool branch_taken_0x2446f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2446F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446F0u;
        // 0x2446f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446f0) {
            ctx->pc = 0x24471Cu;
            goto label_24471c;
        }
    }
    ctx->pc = 0x2446F8u;
    // 0x2446f8: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x2446f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2446fc: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x244700: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244700u;
    {
        const bool branch_taken_0x244700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244700u;
        // 0x244704: 0x240200ad  addiu       $v0, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244700) {
            ctx->pc = 0x244718u;
            goto label_244718;
        }
    }
    ctx->pc = 0x244708u;
    // 0x244708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244708u;
    {
        const bool branch_taken_0x244708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244708u;
        // 0x24470c: 0x240200ae  addiu       $v0, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244708) {
            ctx->pc = 0x244718u;
            goto label_244718;
        }
    }
    ctx->pc = 0x244710u;
    // 0x244710: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244710u;
    {
        const bool branch_taken_0x244710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244710u;
        // 0x244714: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244710) {
            ctx->pc = 0x244720u;
            goto label_244720;
        }
    }
    ctx->pc = 0x244718u;
label_244718:
    // 0x244718: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24471c:
    // 0x24471c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x24471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_244720:
    // 0x244720: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x244720u;
    {
        const bool branch_taken_0x244720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244720u;
        // 0x244724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244720) {
            ctx->pc = 0x2449ACu;
            goto label_2449ac;
        }
    }
    ctx->pc = 0x244728u;
    // 0x244728: 0x8ca200a0  lw          $v0, 0xA0($a1)
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x24472c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24472cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x244730: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x244730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x244734: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x244734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x244738: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x244738u;
    SET_GPR_U32(ctx, 31, 0x244740u);
    ctx->pc = 0x24473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244738u;
    // 0x24473c: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x244738u, 0x244740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244740u;
label_244740:
    // 0x244740: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x244740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x244744: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244748: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x244748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x24474c: 0x284200ac  slti        $v0, $v0, 0xAC
    ctx->pc = 0x24474cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)172) ? 1 : 0);
    // 0x244750: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x244750u;
    {
        const bool branch_taken_0x244750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244750) {
            ctx->pc = 0x244898u;
            goto label_244898;
        }
    }
    ctx->pc = 0x244758u;
    // 0x244758: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x244758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24475c: 0x0  nop
    ctx->pc = 0x24475cu;
    // NOP
    // 0x244760: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
    ctx->pc = 0x244760u;
    {
        const bool branch_taken_0x244760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244760) {
            ctx->pc = 0x244764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244760u;
            // 0x244764: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24483Cu;
            goto label_24483c;
        }
    }
    ctx->pc = 0x244768u;
    // 0x244768: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x244768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x24476c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x24476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x244770: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x244770u;
    {
        const bool branch_taken_0x244770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244770) {
            ctx->pc = 0x244774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244770u;
            // 0x244774: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24483Cu;
            goto label_24483c;
        }
    }
    ctx->pc = 0x244778u;
    // 0x244778: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x244778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24477c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x24477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x244780: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x244780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x244784: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x244784u;
    {
        const bool branch_taken_0x244784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244784u;
        // 0x244788: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244784) {
            ctx->pc = 0x2447C0u;
            goto label_2447c0;
        }
    }
    ctx->pc = 0x24478Cu;
    // 0x24478c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x244790: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x244790u;
    {
        const bool branch_taken_0x244790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x244790) {
            ctx->pc = 0x244794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244790u;
            // 0x244794: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2447C4u;
            goto label_2447c4;
        }
    }
    ctx->pc = 0x244798u;
    // 0x244798: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x244798u;
    SET_GPR_U32(ctx, 31, 0x2447A0u);
    ctx->pc = 0x24479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244798u;
    // 0x24479c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x244798u, 0x2447A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447A0u;
label_2447a0:
    // 0x2447a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2447A0u;
    {
        const bool branch_taken_0x2447a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2447a0) {
            ctx->pc = 0x2447A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447A0u;
            // 0x2447a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2447C4u;
            goto label_2447c4;
        }
    }
    ctx->pc = 0x2447A8u;
    // 0x2447a8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2447a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2447ac: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2447acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2447b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2447B0u;
    {
        const bool branch_taken_0x2447b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2447B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447B0u;
        // 0x2447b4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447b0) {
            ctx->pc = 0x2447C0u;
            goto label_2447c0;
        }
    }
    ctx->pc = 0x2447B8u;
    // 0x2447b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2447B8u;
    {
        const bool branch_taken_0x2447b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2447b8) {
            ctx->pc = 0x2447C4u;
            goto label_2447c4;
        }
    }
    ctx->pc = 0x2447C0u;
label_2447c0:
    // 0x2447c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2447c4:
    // 0x2447c4: 0x5640001d  bnel        $s2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2447C4u;
    {
        const bool branch_taken_0x2447c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2447c4) {
            ctx->pc = 0x2447C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447C4u;
            // 0x2447c8: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24483Cu;
            goto label_24483c;
        }
    }
    ctx->pc = 0x2447CCu;
    // 0x2447cc: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2447ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2447d0: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2447d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2447d4: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2447d8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2447D8u;
    {
        const bool branch_taken_0x2447d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2447DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447D8u;
        // 0x2447dc: 0x2462ffe3  addiu       $v0, $v1, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447d8) {
            ctx->pc = 0x244838u;
            goto label_244838;
        }
    }
    ctx->pc = 0x2447E0u;
    // 0x2447e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2447e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2447e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2447E4u;
    {
        const bool branch_taken_0x2447e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E4u;
        // 0x2447e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447e4) {
            ctx->pc = 0x244804u;
            goto label_244804;
        }
    }
    ctx->pc = 0x2447ECu;
    // 0x2447ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2447f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2447f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2447f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2447f8: 0x284304dc  slti        $v1, $v0, 0x4DC
    ctx->pc = 0x2447f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1244) ? 1 : 0);
    // 0x2447fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2447FCu;
    {
        const bool branch_taken_0x2447fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2447fc) {
            ctx->pc = 0x244800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447FCu;
            // 0x244800: 0x284504df  slti        $a1, $v0, 0x4DF (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1247) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x244804u;
            goto label_244804;
        }
    }
    ctx->pc = 0x244804u;
label_244804:
    // 0x244804: 0x54a0000d  bnel        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x244804u;
    {
        const bool branch_taken_0x244804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x244804) {
            ctx->pc = 0x244808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244804u;
            // 0x244808: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24483Cu;
            goto label_24483c;
        }
    }
    ctx->pc = 0x24480Cu;
    // 0x24480c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x244810: 0xc0699de  jal         func_1A6778
    ctx->pc = 0x244810u;
    SET_GPR_U32(ctx, 31, 0x244818u);
    ctx->pc = 0x244814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244810u;
    // 0x244814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6778u, 0x244810u, 0x244818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244818u;
label_244818:
    // 0x244818: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x244818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x24481c: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x24481Cu;
    SET_GPR_U32(ctx, 31, 0x244824u);
    ctx->pc = 0x244820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24481Cu;
    // 0x244820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x24481Cu, 0x244824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244824u;
label_244824:
    // 0x244824: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x244824u;
    SET_GPR_U32(ctx, 31, 0x24482Cu);
    ctx->pc = 0x244828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244824u;
    // 0x244828: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x244824u, 0x24482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24482Cu;
label_24482c:
    // 0x24482c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x24482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x244830: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x244830u;
    SET_GPR_U32(ctx, 31, 0x244838u);
    ctx->pc = 0x244834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244830u;
    // 0x244834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x244830u, 0x244838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244838u;
label_244838:
    // 0x244838: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x244838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24483c:
    // 0x24483c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x24483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x244840: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x244844: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244844u;
    {
        const bool branch_taken_0x244844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244844u;
        // 0x244848: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244844) {
            ctx->pc = 0x244854u;
            goto label_244854;
        }
    }
    ctx->pc = 0x24484Cu;
    // 0x24484c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24484Cu;
    {
        const bool branch_taken_0x24484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24484c) {
            ctx->pc = 0x244898u;
            goto label_244898;
        }
    }
    ctx->pc = 0x244854u;
label_244854:
    // 0x244854: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x244854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x244858: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x244858u;
    {
        const bool branch_taken_0x244858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244858u;
        // 0x24485c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244858) {
            ctx->pc = 0x244884u;
            goto label_244884;
        }
    }
    ctx->pc = 0x244860u;
    // 0x244860: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x244860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x244864: 0x0  nop
    ctx->pc = 0x244864u;
    // NOP
label_244868:
    // 0x244868: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24486c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24486Cu;
    {
        const bool branch_taken_0x24486c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24486Cu;
        // 0x244870: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24486c) {
            ctx->pc = 0x244884u;
            goto label_244884;
        }
    }
    ctx->pc = 0x244874u;
    // 0x244874: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x244874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x244878: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x244878u;
    {
        const bool branch_taken_0x244878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244878u;
        // 0x24487c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244878) {
            ctx->pc = 0x244868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244868;
        }
    }
    ctx->pc = 0x244880u;
    // 0x244880: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x244880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_244884:
    // 0x244884: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x244884u;
    SET_GPR_U32(ctx, 31, 0x24488Cu);
    ctx->pc = 0x244888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244884u;
    // 0x244888: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x244884u, 0x24488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24488Cu;
label_24488c:
    // 0x24488c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244890: 0xc08a15a  jal         func_228568
    ctx->pc = 0x244890u;
    SET_GPR_U32(ctx, 31, 0x244898u);
    ctx->pc = 0x244894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244890u;
    // 0x244894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x244890u, 0x244898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244898u;
label_244898:
    // 0x244898: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x244898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24489c: 0x0  nop
    ctx->pc = 0x24489cu;
    // NOP
    // 0x2448a0: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x2448A0u;
    {
        const bool branch_taken_0x2448a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2448A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448A0u;
        // 0x2448a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448a0) {
            ctx->pc = 0x2449A0u;
            goto label_2449a0;
        }
    }
    ctx->pc = 0x2448A8u;
    // 0x2448a8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2448a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x2448ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2448acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2448b0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2448B0u;
    {
        const bool branch_taken_0x2448b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2448B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B0u;
        // 0x2448b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448b0) {
            ctx->pc = 0x2449B0u;
            goto label_2449b0;
        }
    }
    ctx->pc = 0x2448B8u;
    // 0x2448b8: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x2448B8u;
    {
        const bool branch_taken_0x2448b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B8u;
        // 0x2448bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448b8) {
            ctx->pc = 0x244990u;
            goto label_244990;
        }
    }
    ctx->pc = 0x2448C0u;
    // 0x2448c0: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x2448c4: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2448c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x2448c8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2448c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2448cc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2448CCu;
    {
        const bool branch_taken_0x2448cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2448cc) {
            ctx->pc = 0x244990u;
            goto label_244990;
        }
    }
    ctx->pc = 0x2448D4u;
    // 0x2448d4: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2448d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2448d8: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2448dc: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2448dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2448e0: 0x1064002b  beq         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2448E0u;
    {
        const bool branch_taken_0x2448e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2448E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E0u;
        // 0x2448e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448e0) {
            ctx->pc = 0x244990u;
            goto label_244990;
        }
    }
    ctx->pc = 0x2448E8u;
    // 0x2448e8: 0xc098b66  jal         func_262D98
    ctx->pc = 0x2448E8u;
    SET_GPR_U32(ctx, 31, 0x2448F0u);
    ctx->pc = 0x2448ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448E8u;
    // 0x2448ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D98u, 0x2448E8u, 0x2448F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448F0u;
label_2448f0:
    // 0x2448f0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2448f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2448f4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2448f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2448f8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2448F8u;
    {
        const bool branch_taken_0x2448f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F8u;
        // 0x2448fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448f8) {
            ctx->pc = 0x24498Cu;
            goto label_24498c;
        }
    }
    ctx->pc = 0x244900u;
    // 0x244900: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x244904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244908: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24490c: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x24490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x244910: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244910u;
    {
        const bool branch_taken_0x244910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244910u;
        // 0x244914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244910) {
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244918u;
    // 0x244918: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x244918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24491c: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x24491cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_244920:
    // 0x244920: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x244920u;
    {
        const bool branch_taken_0x244920 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x244920) {
            ctx->pc = 0x244924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244920u;
            // 0x244924: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244960u;
            goto label_244960;
        }
    }
    ctx->pc = 0x244928u;
    // 0x244928: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x244928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24492c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24492Cu;
    {
        const bool branch_taken_0x24492c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24492Cu;
        // 0x244930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24492c) {
            ctx->pc = 0x24493Cu;
            goto label_24493c;
        }
    }
    ctx->pc = 0x244934u;
    // 0x244934: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x244938: 0x28450083  slti        $a1, $v0, 0x83
    ctx->pc = 0x244938u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_24493c:
    // 0x24493c: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24493Cu;
    {
        const bool branch_taken_0x24493c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24493c) {
            ctx->pc = 0x244940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24493Cu;
            // 0x244940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244960u;
            goto label_244960;
        }
    }
    ctx->pc = 0x244944u;
    // 0x244944: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x244948: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244948u;
    {
        const bool branch_taken_0x244948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244948u;
        // 0x24494c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244948) {
            ctx->pc = 0x244958u;
            goto label_244958;
        }
    }
    ctx->pc = 0x244950u;
    // 0x244950: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x244950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x244954: 0x28450097  slti        $a1, $v0, 0x97
    ctx->pc = 0x244954u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_244958:
    // 0x244958: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x244958u;
    {
        const bool branch_taken_0x244958 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x244958) {
            ctx->pc = 0x24495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244958u;
            // 0x24495c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244960u;
            goto label_244960;
        }
    }
    ctx->pc = 0x244960u;
label_244960:
    // 0x244960: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x244960u;
    {
        const bool branch_taken_0x244960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x244964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244960u;
        // 0x244964: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244960) {
            ctx->pc = 0x24497Cu;
            goto label_24497c;
        }
    }
    ctx->pc = 0x244968u;
    // 0x244968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24496c: 0xc0ae6b8  jal         func_2B9AE0
    ctx->pc = 0x24496Cu;
    SET_GPR_U32(ctx, 31, 0x244974u);
    ctx->pc = 0x244970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24496Cu;
    // 0x244970: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x24496Cu, 0x244974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244974u;
label_244974:
    // 0x244974: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244974u;
    {
        const bool branch_taken_0x244974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244974u;
        // 0x244978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244974) {
            ctx->pc = 0x24498Cu;
            goto label_24498c;
        }
    }
    ctx->pc = 0x24497Cu;
label_24497c:
    // 0x24497c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244980: 0xc0ae6b8  jal         func_2B9AE0
    ctx->pc = 0x244980u;
    SET_GPR_U32(ctx, 31, 0x244988u);
    ctx->pc = 0x244984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244980u;
    // 0x244984: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x244980u, 0x244988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244988u;
label_244988:
    // 0x244988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24498c:
    // 0x24498c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244990:
    // 0x244990: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244990u;
    SET_GPR_U32(ctx, 31, 0x244998u);
    ctx->pc = 0x244994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244990u;
    // 0x244994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244990u, 0x244998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244998u;
label_244998:
    // 0x244998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244998u;
    {
        const bool branch_taken_0x244998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244998u;
        // 0x24499c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244998) {
            ctx->pc = 0x2449B0u;
            goto label_2449b0;
        }
    }
    ctx->pc = 0x2449A0u;
label_2449a0:
    // 0x2449a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2449a4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2449A4u;
    SET_GPR_U32(ctx, 31, 0x2449ACu);
    ctx->pc = 0x2449A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449A4u;
    // 0x2449a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2449A4u, 0x2449ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449ACu;
label_2449ac:
    // 0x2449ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2449acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2449b0:
    // 0x2449b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2449b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2449b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2449b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2449b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2449b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2449bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2449bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2449c0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2449c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2449c4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2449c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2449c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2449C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2449CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C8u;
        // 0x2449cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2449C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2449D0u;
}

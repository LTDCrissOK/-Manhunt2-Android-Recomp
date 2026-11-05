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

// Function: sub_002334A8
// Address: 0x2334a8 - 0x233bf0
void sub_002334A8_0x2334a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002334A8_0x2334a8");
#endif

    switch (ctx->pc) {
        case 0x2334e4u: goto label_2334e4;
        case 0x2334f4u: goto label_2334f4;
        case 0x233514u: goto label_233514;
        case 0x23357cu: goto label_23357c;
        case 0x23358cu: goto label_23358c;
        case 0x233594u: goto label_233594;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335f8u: goto label_2335f8;
        case 0x233608u: goto label_233608;
        case 0x233618u: goto label_233618;
        case 0x233630u: goto label_233630;
        case 0x233670u: goto label_233670;
        case 0x233680u: goto label_233680;
        case 0x233690u: goto label_233690;
        case 0x23369cu: goto label_23369c;
        case 0x2336acu: goto label_2336ac;
        case 0x233974u: goto label_233974;
        case 0x23397cu: goto label_23397c;
        case 0x233984u: goto label_233984;
        case 0x233a10u: goto label_233a10;
        case 0x233a30u: goto label_233a30;
        case 0x233a38u: goto label_233a38;
        case 0x233a74u: goto label_233a74;
        case 0x233a98u: goto label_233a98;
        case 0x233b28u: goto label_233b28;
        case 0x233b60u: goto label_233b60;
        case 0x233ba0u: goto label_233ba0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bc0u: goto label_233bc0;
        default: break;
    }

    ctx->pc = 0x2334a8u;

    // 0x2334a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2334a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2334ac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2334acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2334b0: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2334b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2334b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2334b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2334b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334bc: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2334bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2334c0: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2334c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2334c4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2334c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2334c8: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2334c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2334cc: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x2334ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x2334d0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2334d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2334d4: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2334d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2334d8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2334d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2334dc: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2334DCu;
    SET_GPR_U32(ctx, 31, 0x2334E4u);
    ctx->pc = 0x2334E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334DCu;
    // 0x2334e0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2334DCu, 0x2334E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2334e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334e8: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2334e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x2334ec: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2334ECu;
    SET_GPR_U32(ctx, 31, 0x2334F4u);
    ctx->pc = 0x2334F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334ECu;
    // 0x2334f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2334ECu, 0x2334F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334F4u;
label_2334f4:
    // 0x2334f4: 0x8e820370  lw          $v0, 0x370($s4)
    ctx->pc = 0x2334f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x2334f8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2334f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2334fc: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x2334fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x233500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x233504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x233508: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x233508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x23350c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x23350Cu;
    SET_GPR_U32(ctx, 31, 0x233514u);
    ctx->pc = 0x233510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23350Cu;
    // 0x233510: 0xae820370  sw          $v0, 0x370($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23350Cu, 0x233514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233514u;
label_233514:
    // 0x233514: 0x104001ab  beqz        $v0, . + 4 + (0x1AB << 2)
    ctx->pc = 0x233514u;
    {
        const bool branch_taken_0x233514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233514u;
        // 0x233518: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233514) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x23351Cu;
    // 0x23351c: 0x8e830334  lw          $v1, 0x334($s4)
    ctx->pc = 0x23351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x233520: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x233520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233524: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x233524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x233528: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x23352c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x233530: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233530u;
    {
        const bool branch_taken_0x233530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233530u;
        // 0x233534: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233530) {
            ctx->pc = 0x233574u;
            goto label_233574;
        }
    }
    ctx->pc = 0x233538u;
    // 0x233538: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233538u;
    {
        const bool branch_taken_0x233538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233538u;
        // 0x23353c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233538) {
            ctx->pc = 0x233560u;
            goto label_233560;
        }
    }
    ctx->pc = 0x233540u;
    // 0x233540: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x233544: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x233548: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x233548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23354c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233550: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x233550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233554: 0x0  nop
    ctx->pc = 0x233554u;
    // NOP
    // 0x233558: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x233558u;
    {
        const bool branch_taken_0x233558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x233558) {
            ctx->pc = 0x23355Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233558u;
            // 0x23355c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233560u;
            goto label_233560;
        }
    }
    ctx->pc = 0x233560u;
label_233560:
    // 0x233560: 0x10a00197  beqz        $a1, . + 4 + (0x197 << 2)
    ctx->pc = 0x233560u;
    {
        const bool branch_taken_0x233560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x233564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233560u;
        // 0x233564: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233560) {
            ctx->pc = 0x233BC0u;
            goto label_233bc0;
        }
    }
    ctx->pc = 0x233568u;
    // 0x233568: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x233568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x23356c: 0x14620195  bne         $v1, $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x23356Cu;
    {
        const bool branch_taken_0x23356c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23356Cu;
        // 0x233570: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23356c) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x233574u;
label_233574:
    // 0x233574: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x233574u;
    SET_GPR_U32(ctx, 31, 0x23357Cu);
    ctx->pc = 0x233578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233574u;
    // 0x233578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x233574u, 0x23357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23357Cu;
label_23357c:
    // 0x23357c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23357Cu;
    {
        const bool branch_taken_0x23357c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23357c) {
            ctx->pc = 0x233580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23357Cu;
            // 0x233580: 0x8e82036c  lw          $v0, 0x36C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2335A4u;
            goto label_2335a4;
        }
    }
    ctx->pc = 0x233584u;
    // 0x233584: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x233584u;
    SET_GPR_U32(ctx, 31, 0x23358Cu);
    ctx->pc = 0x233588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233584u;
    // 0x233588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x233584u, 0x23358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23358Cu;
label_23358c:
    // 0x23358c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x23358Cu;
    SET_GPR_U32(ctx, 31, 0x233594u);
    ctx->pc = 0x233590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23358Cu;
    // 0x233590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23358Cu, 0x233594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233594u;
label_233594:
    // 0x233594: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x233594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x233598: 0x1043018a  beq         $v0, $v1, . + 4 + (0x18A << 2)
    ctx->pc = 0x233598u;
    {
        const bool branch_taken_0x233598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233598u;
        // 0x23359c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233598) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x2335A0u;
    // 0x2335a0: 0x8e82036c  lw          $v0, 0x36C($s4)
    ctx->pc = 0x2335a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
label_2335a4:
    // 0x2335a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2335a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2335a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2335A8u;
    {
        const bool branch_taken_0x2335a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2335a8) {
            ctx->pc = 0x2335ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2335A8u;
            // 0x2335ac: 0x8e830338  lw          $v1, 0x338($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2335CCu;
            goto label_2335cc;
        }
    }
    ctx->pc = 0x2335B0u;
    // 0x2335b0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2335B0u;
    SET_GPR_U32(ctx, 31, 0x2335B8u);
    ctx->pc = 0x2335B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335B0u;
    // 0x2335b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2335B0u, 0x2335B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335B8u;
label_2335b8:
    // 0x2335b8: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x2335B8u;
    SET_GPR_U32(ctx, 31, 0x2335C0u);
    ctx->pc = 0x2335BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335B8u;
    // 0x2335bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x2335B8u, 0x2335C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335C0u;
label_2335c0:
    // 0x2335c0: 0x14400180  bnez        $v0, . + 4 + (0x180 << 2)
    ctx->pc = 0x2335C0u;
    {
        const bool branch_taken_0x2335c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335C0u;
        // 0x2335c4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335c0) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x2335C8u;
    // 0x2335c8: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x2335c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
label_2335cc:
    // 0x2335cc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2335d0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2335d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2335d8: 0x1440017a  bnez        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x2335D8u;
    {
        const bool branch_taken_0x2335d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335D8u;
        // 0x2335dc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335d8) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x2335E0u;
    // 0x2335e0: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x2335e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x2335e4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2335e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2335e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2335E8u;
    {
        const bool branch_taken_0x2335e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335E8u;
        // 0x2335ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335e8) {
            ctx->pc = 0x233628u;
            goto label_233628;
        }
    }
    ctx->pc = 0x2335F0u;
    // 0x2335f0: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x2335F0u;
    SET_GPR_U32(ctx, 31, 0x2335F8u);
    ctx->pc = 0x2335F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335F0u;
    // 0x2335f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2335F0u, 0x2335F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335F8u;
label_2335f8:
    // 0x2335f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2335F8u;
    {
        const bool branch_taken_0x2335f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2335f8) {
            ctx->pc = 0x2335FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2335F8u;
            // 0x2335fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233620u;
            goto label_233620;
        }
    }
    ctx->pc = 0x233600u;
    // 0x233600: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x233600u;
    SET_GPR_U32(ctx, 31, 0x233608u);
    ctx->pc = 0x233604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233600u;
    // 0x233604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x233600u, 0x233608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233608u;
label_233608:
    // 0x233608: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x233608u;
    {
        const bool branch_taken_0x233608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233608) {
            ctx->pc = 0x23360Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233608u;
            // 0x23360c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233620u;
            goto label_233620;
        }
    }
    ctx->pc = 0x233610u;
    // 0x233610: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x233610u;
    SET_GPR_U32(ctx, 31, 0x233618u);
    ctx->pc = 0x233614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233610u;
    // 0x233614: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x233610u, 0x233618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233618u;
label_233618:
    // 0x233618: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x233618u;
    {
        const bool branch_taken_0x233618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233618) {
            ctx->pc = 0x23361Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233618u;
            // 0x23361c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233620u;
            goto label_233620;
        }
    }
    ctx->pc = 0x233620u;
label_233620:
    // 0x233620: 0x16000168  bnez        $s0, . + 4 + (0x168 << 2)
    ctx->pc = 0x233620u;
    {
        const bool branch_taken_0x233620 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x233624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233620u;
        // 0x233624: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233620) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x233628u;
label_233628:
    // 0x233628: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x233628u;
    SET_GPR_U32(ctx, 31, 0x233630u);
    ctx->pc = 0x23362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233628u;
    // 0x23362c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x233628u, 0x233630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233630u;
label_233630:
    // 0x233630: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x233630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x233634: 0x8e82036c  lw          $v0, 0x36C($s4)
    ctx->pc = 0x233634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
    // 0x233638: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x233638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23363c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x23363Cu;
    {
        const bool branch_taken_0x23363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23363c) {
            ctx->pc = 0x233640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23363Cu;
            // 0x233640: 0x24630600  addiu       $v1, $v1, 0x600 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233648u;
            goto label_233648;
        }
    }
    ctx->pc = 0x233644u;
    // 0x233644: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x233644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
label_233648:
    // 0x233648: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x233648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x23364c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23364cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233650: 0xf8414690  sqc2        $vf1, 0x4690($v0)
    ctx->pc = 0x233650u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4A4690u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4A4690u, _value); } while (0);
    // 0x233654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x233654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233658: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x233658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23365c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23365cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x233660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233664: 0xc68c0398  lwc1        $f12, 0x398($s4)
    ctx->pc = 0x233664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233668: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x233668u;
    SET_GPR_U32(ctx, 31, 0x233670u);
    ctx->pc = 0x23366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233668u;
    // 0x23366c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x233668u, 0x233670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233670u;
label_233670:
    // 0x233670: 0xc68c0398  lwc1        $f12, 0x398($s4)
    ctx->pc = 0x233670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233674: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x233674u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x233678: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x233678u;
    SET_GPR_U32(ctx, 31, 0x233680u);
    ctx->pc = 0x23367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233678u;
    // 0x23367c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x233678u, 0x233680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233680u;
label_233680:
    // 0x233680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233684: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x233684u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x233688: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x233688u;
    SET_GPR_U32(ctx, 31, 0x233690u);
    ctx->pc = 0x23368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233688u;
    // 0x23368c: 0x24050447  addiu       $a1, $zero, 0x447 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x233688u, 0x233690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233690u;
label_233690:
    // 0x233690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233694: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x233694u;
    SET_GPR_U32(ctx, 31, 0x23369Cu);
    ctx->pc = 0x233698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233694u;
    // 0x233698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x233694u, 0x23369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23369Cu;
label_23369c:
    // 0x23369c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23369Cu;
    {
        const bool branch_taken_0x23369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23369c) {
            ctx->pc = 0x2336A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23369Cu;
            // 0x2336a0: 0x8e850104  lw          $a1, 0x104($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336B0u;
            goto label_2336b0;
        }
    }
    ctx->pc = 0x2336A4u;
    // 0x2336a4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2336A4u;
    SET_GPR_U32(ctx, 31, 0x2336ACu);
    ctx->pc = 0x2336A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336A4u;
    // 0x2336a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2336A4u, 0x2336ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ACu;
label_2336ac:
    // 0x2336ac: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x2336acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2336b0:
    // 0x2336b0: 0x26264690  addiu       $a2, $s1, 0x4690
    ctx->pc = 0x2336b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
    // 0x2336b4: 0xc6234690  lwc1        $f3, 0x4690($s1)
    ctx->pc = 0x2336b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 18064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2336b8: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2336b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2336bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2336c0: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2336c4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2336c8: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2336cc: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2336ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2336d0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2336d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2336d4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2336d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2336d8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2336d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2336dc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2336dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2336e0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2336e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2336e4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2336e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2336e8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2336e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2336ec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2336ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2336f0: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2336f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2336f4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2336f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2336f8: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2336f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2336fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2336fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233700: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x233700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x233704: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x233704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x233708: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x233708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23370c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x23370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233710: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x233710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x233714: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x233714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233718: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x233718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23371c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x23371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233720: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x233720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233724: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x233724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x233728: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x233728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23372c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23372cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x233730: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x233730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x233734: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x233734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233738: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x233738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23373c: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x233740: 0xc4620050  lwc1        $f2, 0x50($v1)
    ctx->pc = 0x233740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233744: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x233744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233748: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x233748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23374c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x23374cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x233750: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x233750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233754: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x233754u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x233758: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x233758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x23375c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x23375cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x233760: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x233760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x233764: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x233764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x233768: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x233768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x23376c: 0x46002182  mul.s       $f6, $f4, $f0
    ctx->pc = 0x23376cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x233770: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x233770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x233774: 0x46012142  mul.s       $f5, $f4, $f1
    ctx->pc = 0x233774u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x233778: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x233778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23377c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x23377cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x233780: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x233780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x233784: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x233784u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x233788: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x233788u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23378c: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x23378cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x233790: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x233790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x233794: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x233794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x233798: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x233798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23379c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x23379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2337a0: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2337a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2337a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2337a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2337a8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2337a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2337ac: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2337acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2337b0: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x2337b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2337b4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2337b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2337b8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2337b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2337bc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2337bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2337c0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2337c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2337c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2337c8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2337cc: 0xc4630060  lwc1        $f3, 0x60($v1)
    ctx->pc = 0x2337ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2337d0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2337d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2337d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2337d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2337d8: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2337d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2337dc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2337dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2337e0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2337e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2337e4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2337e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2337e8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2337e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2337ec: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2337ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2337f0: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2337f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2337f4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2337f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2337f8: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x2337f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2337fc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2337fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x233800: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x233800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x233804: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x233804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x233808: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x233808u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x23380c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x23380cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x233810: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x233810u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x233814: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x233814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x233818: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x233818u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23381c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x23381cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233820: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x233820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233824: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x233824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x233828: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x233828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23382c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x23382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233830: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x233830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x233834: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x233834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233838: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x233838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23383c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x23383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233840: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x233840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x233844: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x233844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x233848: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x233848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23384c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x23384cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x233850: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x233850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233854: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x233854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x233858: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x233858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x23385c: 0xc4620050  lwc1        $f2, 0x50($v1)
    ctx->pc = 0x23385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233860: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x233860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233864: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x233864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233868: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x233868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x23386c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233870: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x233870u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x233874: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x233874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x233878: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x233878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x23387c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x23387cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x233880: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x233880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x233884: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x233884u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x233888: 0x46002182  mul.s       $f6, $f4, $f0
    ctx->pc = 0x233888u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x23388c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23388cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x233890: 0x46012142  mul.s       $f5, $f4, $f1
    ctx->pc = 0x233890u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x233894: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x233894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x233898: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x233898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x23389c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x23389cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2338a0: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x2338a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2338a4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2338a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2338a8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2338a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2338ac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2338acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2338b0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2338b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2338b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2338b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2338b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2338b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2338bc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2338bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2338c0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2338c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2338c4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2338c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2338c8: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2338c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2338cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2338ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2338d0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2338d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2338d4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2338d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2338d8: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2338d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2338dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2338e0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2338e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2338e4: 0xc4630060  lwc1        $f3, 0x60($v1)
    ctx->pc = 0x2338e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2338e8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2338e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2338ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2338ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2338f0: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x2338f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x2338f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2338f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2338f8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2338f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2338fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2338fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x233900: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x233900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x233904: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x233904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x233908: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x233908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23390c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x23390cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x233910: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x233910u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x233914: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x233914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x233918: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x233918u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x23391c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x23391cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x233920: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x233920u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x233924: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x233924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x233928: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x233928u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23392c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x23392cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x233930: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x233930u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x233934: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x233934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x233938: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x233938u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23393c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23393cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x233940: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x233940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x233944: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x233944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233948: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x233948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23394c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x23394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233950: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233954: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x233954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23395c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x23395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233960: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x233960u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x233964: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x233964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x233968: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x233968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23396c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x23396Cu;
    SET_GPR_U32(ctx, 31, 0x233974u);
    ctx->pc = 0x233970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23396Cu;
    // 0x233970: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23396Cu, 0x233974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233974u;
label_233974:
    // 0x233974: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x233974u;
    SET_GPR_U32(ctx, 31, 0x23397Cu);
    ctx->pc = 0x233978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233974u;
    // 0x233978: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x233974u, 0x23397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23397Cu;
label_23397c:
    // 0x23397c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23397Cu;
    SET_GPR_U32(ctx, 31, 0x233984u);
    ctx->pc = 0x233980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23397Cu;
    // 0x233980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23397Cu, 0x233984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233984u;
label_233984:
    // 0x233984: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x233984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233988: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x233988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23398c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x233990: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x233990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x233994: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x233994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x233998: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x233998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23399c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23399cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2339a0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2339a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2339a4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2339a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2339a8: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x2339a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2339ac: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x2339acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2339b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2339b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2339b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2339b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2339b8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2339b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2339bc: 0x0  nop
    ctx->pc = 0x2339bcu;
    // NOP
    // 0x2339c0: 0x0  nop
    ctx->pc = 0x2339c0u;
    // NOP
    // 0x2339c4: 0x46010084  c1          0x10084
    ctx->pc = 0x2339c4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2339c8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2339c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2339cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2339ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2339d0: 0x0  nop
    ctx->pc = 0x2339d0u;
    // NOP
    // 0x2339d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2339d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2339d8: 0x0  nop
    ctx->pc = 0x2339d8u;
    // NOP
    // 0x2339dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2339DCu;
    {
        const bool branch_taken_0x2339dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2339E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339DCu;
        // 0x2339e0: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339dc) {
            ctx->pc = 0x233A08u;
            goto label_233a08;
        }
    }
    ctx->pc = 0x2339E4u;
    // 0x2339e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2339e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2339e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2339e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2339ec: 0x0  nop
    ctx->pc = 0x2339ecu;
    // NOP
    // 0x2339f0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2339f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2339f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2339f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2339f8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2339f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2339fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2339fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x233a00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x233a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x233a04: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x233a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_233a08:
    // 0x233a08: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x233A08u;
    SET_GPR_U32(ctx, 31, 0x233A10u);
    ctx->pc = 0x233A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A08u;
    // 0x233a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x233A08u, 0x233A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A10u;
label_233a10:
    // 0x233a10: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x233A10u;
    {
        const bool branch_taken_0x233a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A10u;
        // 0x233a14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a10) {
            ctx->pc = 0x233B84u;
            goto label_233b84;
        }
    }
    ctx->pc = 0x233A18u;
    // 0x233a18: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x233a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x233a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a28: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x233A28u;
    SET_GPR_U32(ctx, 31, 0x233A30u);
    ctx->pc = 0x233A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A28u;
    // 0x233a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x233A28u, 0x233A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A30u;
label_233a30:
    // 0x233a30: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x233A30u;
    SET_GPR_U32(ctx, 31, 0x233A38u);
    ctx->pc = 0x233A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A30u;
    // 0x233a34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x233A30u, 0x233A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x233a3c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x233a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x233a40: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x233A40u;
    {
        const bool branch_taken_0x233a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A40u;
        // 0x233a44: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a40) {
            ctx->pc = 0x233A78u;
            goto label_233a78;
        }
    }
    ctx->pc = 0x233A48u;
    // 0x233a48: 0x8e8211c0  lw          $v0, 0x11C0($s4)
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4544)));
    // 0x233a4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x233a50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233A50u;
    {
        const bool branch_taken_0x233a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A50u;
        // 0x233a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a50) {
            ctx->pc = 0x233A68u;
            goto label_233a68;
        }
    }
    ctx->pc = 0x233A58u;
    // 0x233a58: 0x8e82036c  lw          $v0, 0x36C($s4)
    ctx->pc = 0x233a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
    // 0x233a5c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x233a60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233A7Cu;
            goto label_233a7c;
        }
    }
    ctx->pc = 0x233A68u;
label_233a68:
    // 0x233a68: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x233a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x233a6c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x233A6Cu;
    SET_GPR_U32(ctx, 31, 0x233A74u);
    ctx->pc = 0x233A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A6Cu;
    // 0x233a70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x233A6Cu, 0x233A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A74u;
label_233a74:
    // 0x233a74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x233a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_233a78:
    // 0x233a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233a7c:
    // 0x233a7c: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x233a80: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x233A80u;
    {
        const bool branch_taken_0x233a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A80u;
        // 0x233a84: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a80) {
            ctx->pc = 0x233BA4u;
            goto label_233ba4;
        }
    }
    ctx->pc = 0x233A88u;
    // 0x233a88: 0x3c070006  lui         $a3, 0x6
    ctx->pc = 0x233a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6 << 16));
    // 0x233a8c: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x233a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x233a90: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x233a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x233a94: 0x0  nop
    ctx->pc = 0x233a94u;
    // NOP
label_233a98:
    // 0x233a98: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x233a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x233a9c: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x233a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x233aa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233aa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233aa8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x233aac: 0x38640008  xori        $a0, $v1, 0x8
    ctx->pc = 0x233aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x233ab0: 0x5480003c  bnel        $a0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x233AB0u;
    {
        const bool branch_taken_0x233ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x233ab0) {
            ctx->pc = 0x233AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233AB0u;
            // 0x233ab4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233BA4u;
            goto label_233ba4;
        }
    }
    ctx->pc = 0x233AB8u;
    // 0x233ab8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x233ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x233abc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x233abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x233ac0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x233ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x233ac4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x233ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x233ac8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x233AC8u;
    {
        const bool branch_taken_0x233ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AC8u;
        // 0x233acc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac8) {
            ctx->pc = 0x233B30u;
            goto label_233b30;
        }
    }
    ctx->pc = 0x233AD0u;
    // 0x233ad0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x233ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ad4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x233ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233ad8: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x233ad8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x233adc: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x233adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233ae0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x233ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233ae4: 0x0  nop
    ctx->pc = 0x233ae4u;
    // NOP
    // 0x233ae8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x233AE8u;
    {
        const bool branch_taken_0x233ae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x233AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AE8u;
        // 0x233aec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ae8) {
            ctx->pc = 0x233B68u;
            goto label_233b68;
        }
    }
    ctx->pc = 0x233AF0u;
    // 0x233af0: 0x8c630334  lw          $v1, 0x334($v1)
    ctx->pc = 0x233af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x233af4: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x233af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x233af8: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x233af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x233afc: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x233afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x233b00: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x233B00u;
    {
        const bool branch_taken_0x233b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b00) {
            ctx->pc = 0x233B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233B00u;
            // 0x233b04: 0x8e820370  lw          $v0, 0x370($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233B10u;
            goto label_233b10;
        }
    }
    ctx->pc = 0x233B08u;
    // 0x233b08: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x233B08u;
    {
        const bool branch_taken_0x233b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B08u;
        // 0x233b0c: 0x8d022b1c  lw          $v0, 0x2B1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b08) {
            ctx->pc = 0x233B6Cu;
            goto label_233b6c;
        }
    }
    ctx->pc = 0x233B10u;
label_233b10:
    // 0x233b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b14: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x233b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b1c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x233b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x233b20: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x233B20u;
    SET_GPR_U32(ctx, 31, 0x233B28u);
    ctx->pc = 0x233B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B20u;
    // 0x233b24: 0xae820370  sw          $v0, 0x370($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x233B20u, 0x233B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B28u;
label_233b28:
    // 0x233b28: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x233B28u;
    {
        const bool branch_taken_0x233b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B28u;
        // 0x233b2c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b28) {
            ctx->pc = 0x233BA4u;
            goto label_233ba4;
        }
    }
    ctx->pc = 0x233B30u;
label_233b30:
    // 0x233b30: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x233b30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x233b34: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x233b38: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x233b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x233b3c: 0x14470019  bne         $v0, $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x233B3Cu;
    {
        const bool branch_taken_0x233b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x233B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B3Cu;
        // 0x233b40: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b3c) {
            ctx->pc = 0x233BA4u;
            goto label_233ba4;
        }
    }
    ctx->pc = 0x233B44u;
    // 0x233b44: 0x8e820370  lw          $v0, 0x370($s4)
    ctx->pc = 0x233b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x233b48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b4c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x233b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x233b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b54: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x233b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x233b58: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x233B58u;
    SET_GPR_U32(ctx, 31, 0x233B60u);
    ctx->pc = 0x233B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B58u;
    // 0x233b5c: 0xae820370  sw          $v0, 0x370($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x233B58u, 0x233B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B60u;
label_233b60:
    // 0x233b60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x233B60u;
    {
        const bool branch_taken_0x233b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B60u;
        // 0x233b64: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b60) {
            ctx->pc = 0x233BA4u;
            goto label_233ba4;
        }
    }
    ctx->pc = 0x233B68u;
label_233b68:
    // 0x233b68: 0x8d022b1c  lw          $v0, 0x2B1C($t0)
    ctx->pc = 0x233b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11036)));
label_233b6c:
    // 0x233b6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x233b70: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x233b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233b74: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x233B74u;
    {
        const bool branch_taken_0x233b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b74) {
            ctx->pc = 0x233A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a98;
        }
    }
    ctx->pc = 0x233B7Cu;
    // 0x233b7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x233B7Cu;
    {
        const bool branch_taken_0x233b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B7Cu;
        // 0x233b80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b7c) {
            ctx->pc = 0x233BA8u;
            goto label_233ba8;
        }
    }
    ctx->pc = 0x233B84u;
label_233b84:
    // 0x233b84: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x233b88: 0x34a53210  ori         $a1, $a1, 0x3210
    ctx->pc = 0x233b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12816);
    // 0x233b8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233b90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b98: 0xc0778e6  jal         func_1DE398
    ctx->pc = 0x233B98u;
    SET_GPR_U32(ctx, 31, 0x233BA0u);
    ctx->pc = 0x233B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B98u;
    // 0x233b9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x233B98u, 0x233BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BA0u;
label_233ba0:
    // 0x233ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233ba4:
    // 0x233ba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_233ba8:
    // 0x233ba8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x233ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x233bac: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x233BACu;
    SET_GPR_U32(ctx, 31, 0x233BB4u);
    ctx->pc = 0x233BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BACu;
    // 0x233bb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x233BACu, 0x233BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BB4u;
label_233bb4:
    // 0x233bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bb8: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x233BB8u;
    SET_GPR_U32(ctx, 31, 0x233BC0u);
    ctx->pc = 0x233BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BB8u;
    // 0x233bbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x233BB8u, 0x233BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BC0u;
label_233bc0:
    // 0x233bc0: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x233bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_233bc4:
    // 0x233bc4: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x233bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x233bc8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x233bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x233bcc: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x233bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x233bd0: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x233bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x233bd4: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x233bd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x233bd8: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x233bd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x233bdc: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x233bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x233be0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x233be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x233be4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x233be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233be8: 0x3e00008  jr          $ra
    ctx->pc = 0x233BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BE8u;
        // 0x233bec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233BF0u;
}

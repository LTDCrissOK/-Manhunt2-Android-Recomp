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

// Function: sub_00237238
// Address: 0x237238 - 0x237ba8
void sub_00237238_0x237238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237238_0x237238");
#endif

    switch (ctx->pc) {
        case 0x2372bcu: goto label_2372bc;
        case 0x2372d8u: goto label_2372d8;
        case 0x2372ecu: goto label_2372ec;
        case 0x237358u: goto label_237358;
        case 0x237378u: goto label_237378;
        case 0x237394u: goto label_237394;
        case 0x2373b8u: goto label_2373b8;
        case 0x23740cu: goto label_23740c;
        case 0x237424u: goto label_237424;
        case 0x237434u: goto label_237434;
        case 0x2374bcu: goto label_2374bc;
        case 0x2374f0u: goto label_2374f0;
        case 0x23750cu: goto label_23750c;
        case 0x23754cu: goto label_23754c;
        case 0x237570u: goto label_237570;
        case 0x237580u: goto label_237580;
        case 0x237598u: goto label_237598;
        case 0x2375dcu: goto label_2375dc;
        case 0x2375ecu: goto label_2375ec;
        case 0x237610u: goto label_237610;
        case 0x23766cu: goto label_23766c;
        case 0x237688u: goto label_237688;
        case 0x2376a8u: goto label_2376a8;
        case 0x237704u: goto label_237704;
        case 0x237714u: goto label_237714;
        case 0x23776cu: goto label_23776c;
        case 0x237788u: goto label_237788;
        case 0x237798u: goto label_237798;
        case 0x2377e8u: goto label_2377e8;
        case 0x237804u: goto label_237804;
        case 0x237830u: goto label_237830;
        case 0x237858u: goto label_237858;
        case 0x237884u: goto label_237884;
        case 0x2378a0u: goto label_2378a0;
        case 0x2378bcu: goto label_2378bc;
        case 0x2378ccu: goto label_2378cc;
        case 0x237910u: goto label_237910;
        case 0x237920u: goto label_237920;
        case 0x237958u: goto label_237958;
        case 0x237974u: goto label_237974;
        case 0x237984u: goto label_237984;
        case 0x2379c4u: goto label_2379c4;
        case 0x2379d4u: goto label_2379d4;
        case 0x237a08u: goto label_237a08;
        case 0x237a74u: goto label_237a74;
        case 0x237a84u: goto label_237a84;
        case 0x237accu: goto label_237acc;
        case 0x237adcu: goto label_237adc;
        case 0x237af4u: goto label_237af4;
        case 0x237b58u: goto label_237b58;
        case 0x237b68u: goto label_237b68;
        case 0x237b78u: goto label_237b78;
        case 0x237b98u: goto label_237b98;
        default: break;
    }

    ctx->pc = 0x237238u;

    // 0x237238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23723c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23723cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x237240: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x237240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x237244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x237244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x237248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23724c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237250: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x237250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x237254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x237254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x237258: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x237258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23725c: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x23725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237260: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x237260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237264: 0x0  nop
    ctx->pc = 0x237264u;
    // NOP
    // 0x237268: 0x4501024f  bc1t        . + 4 + (0x24F << 2)
    ctx->pc = 0x237268u;
    {
        const bool branch_taken_0x237268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237268u;
        // 0x23726c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237268) {
            ctx->pc = 0x237BA8u;
            return;
        }
    }
    ctx->pc = 0x237270u;
    // 0x237270: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x237270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237274: 0x8c640084  lw          $a0, 0x84($v1)
    ctx->pc = 0x237274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x237278: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x237278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x23727c: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23727Cu;
    {
        const bool branch_taken_0x23727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x23727c) {
            ctx->pc = 0x237280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23727Cu;
            // 0x237280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2372A8u;
            goto label_2372a8;
        }
    }
    ctx->pc = 0x237284u;
    // 0x237284: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237284u;
    {
        const bool branch_taken_0x237284 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x237288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237284u;
        // 0x237288: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237284) {
            ctx->pc = 0x2372A8u;
            goto label_2372a8;
        }
    }
    ctx->pc = 0x23728Cu;
    // 0x23728c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23728Cu;
    {
        const bool branch_taken_0x23728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23728c) {
            ctx->pc = 0x237290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23728Cu;
            // 0x237290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2372A8u;
            goto label_2372a8;
        }
    }
    ctx->pc = 0x237294u;
    // 0x237294: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x237294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x237298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237298u;
    {
        const bool branch_taken_0x237298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237298u;
        // 0x23729c: 0x2882000c  slti        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237298) {
            ctx->pc = 0x2372A8u;
            goto label_2372a8;
        }
    }
    ctx->pc = 0x2372A0u;
    // 0x2372a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2372A0u;
    {
        const bool branch_taken_0x2372a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2372a0) {
            ctx->pc = 0x2372A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2372A0u;
            // 0x2372a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2372A8u;
            goto label_2372a8;
        }
    }
    ctx->pc = 0x2372A8u;
label_2372a8:
    // 0x2372a8: 0x10a00240  beqz        $a1, . + 4 + (0x240 << 2)
    ctx->pc = 0x2372A8u;
    {
        const bool branch_taken_0x2372a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372A8u;
        // 0x2372ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372a8) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2372B0u;
    // 0x2372b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2372b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372b4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2372B4u;
    SET_GPR_U32(ctx, 31, 0x2372BCu);
    ctx->pc = 0x2372B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372B4u;
    // 0x2372b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2372B4u, 0x2372BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372BCu;
label_2372bc:
    // 0x2372bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2372bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372c0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2372c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2372c4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2372c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2372c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2372C8u;
    {
        const bool branch_taken_0x2372c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2372c8) {
            ctx->pc = 0x2372DCu;
            goto label_2372dc;
        }
    }
    ctx->pc = 0x2372D0u;
    // 0x2372d0: 0xc0bf1ee  jal         func_2FC7B8
    ctx->pc = 0x2372D0u;
    SET_GPR_U32(ctx, 31, 0x2372D8u);
    ctx->pc = 0x2372D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372D0u;
    // 0x2372d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7B8u, 0x2372D0u, 0x2372D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372D8u;
label_2372d8:
    // 0x2372d8: 0x2c530001  sltiu       $s3, $v0, 0x1
    ctx->pc = 0x2372d8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2372dc:
    // 0x2372dc: 0x52000233  beql        $s0, $zero, . + 4 + (0x233 << 2)
    ctx->pc = 0x2372DCu;
    {
        const bool branch_taken_0x2372dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2372dc) {
            ctx->pc = 0x2372E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2372DCu;
            // 0x2372e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2372E4u;
    // 0x2372e4: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2372E4u;
    SET_GPR_U32(ctx, 31, 0x2372ECu);
    ctx->pc = 0x2372E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372E4u;
    // 0x2372e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2372E4u, 0x2372ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372ECu;
label_2372ec:
    // 0x2372ec: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2372f0: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x2372f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
    // 0x2372f4: 0x30637001  andi        $v1, $v1, 0x7001
    ctx->pc = 0x2372f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28673);
    // 0x2372f8: 0x38637001  xori        $v1, $v1, 0x7001
    ctx->pc = 0x2372f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)28673);
    // 0x2372fc: 0x1060022a  beqz        $v1, . + 4 + (0x22A << 2)
    ctx->pc = 0x2372FCu;
    {
        const bool branch_taken_0x2372fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372FCu;
        // 0x237300: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372fc) {
            ctx->pc = 0x237BA8u;
            return;
        }
    }
    ctx->pc = 0x237304u;
    // 0x237304: 0x8e2304f4  lw          $v1, 0x4F4($s1)
    ctx->pc = 0x237304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1268)));
    // 0x237308: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x237308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23730c: 0x10400226  beqz        $v0, . + 4 + (0x226 << 2)
    ctx->pc = 0x23730Cu;
    {
        const bool branch_taken_0x23730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23730Cu;
        // 0x237310: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23730c) {
            ctx->pc = 0x237BA8u;
            return;
        }
    }
    ctx->pc = 0x237314u;
    // 0x237314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237318: 0x24424fb0  addiu       $v0, $v0, 0x4FB0
    ctx->pc = 0x237318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20400));
    // 0x23731c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x237320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237324: 0x800008  jr          $a0
    ctx->pc = 0x237324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23732Cu: goto label_23732c;
            case 0x237A8Cu: goto label_237a8c;
            case 0x237AE4u: goto label_237ae4;
            case 0x237B80u: goto label_237b80;
            case 0x237BA0u: goto label_237ba0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23732Cu;
label_23732c:
    // 0x23732c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x237330: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x237330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x237334: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x237334u;
    {
        const bool branch_taken_0x237334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237334) {
            ctx->pc = 0x237338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237334u;
            // 0x237338: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237360u;
            goto label_237360;
        }
    }
    ctx->pc = 0x23733Cu;
    // 0x23733c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x237340: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x237340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x237344: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x237348: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237348u;
    {
        const bool branch_taken_0x237348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237348) {
            ctx->pc = 0x23734Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237348u;
            // 0x23734c: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237360u;
            goto label_237360;
        }
    }
    ctx->pc = 0x237350u;
    // 0x237350: 0xc06bd9c  jal         func_1AF670
    ctx->pc = 0x237350u;
    SET_GPR_U32(ctx, 31, 0x237358u);
    ctx->pc = 0x237354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237350u;
    // 0x237354: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x237350u, 0x237358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237358u;
label_237358:
    // 0x237358: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x237358u;
    {
        const bool branch_taken_0x237358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237358u;
        // 0x23735c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237358) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237360u;
label_237360:
    // 0x237360: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x237360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x237364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x237368: 0x54430016  bnel        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x237368u;
    {
        const bool branch_taken_0x237368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237368) {
            ctx->pc = 0x23736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237368u;
            // 0x23736c: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373C4u;
            goto label_2373c4;
        }
    }
    ctx->pc = 0x237370u;
    // 0x237370: 0xc089490  jal         func_225240
    ctx->pc = 0x237370u;
    SET_GPR_U32(ctx, 31, 0x237378u);
    ctx->pc = 0x237374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237370u;
    // 0x237374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x237370u, 0x237378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237378u;
label_237378:
    // 0x237378: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237378u;
    {
        const bool branch_taken_0x237378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237378u;
        // 0x23737c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237378) {
            ctx->pc = 0x23738Cu;
            goto label_23738c;
        }
    }
    ctx->pc = 0x237380u;
    // 0x237380: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x237384: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x237384u;
    {
        const bool branch_taken_0x237384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x237384) {
            ctx->pc = 0x237388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237384u;
            // 0x237388: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373C4u;
            goto label_2373c4;
        }
    }
    ctx->pc = 0x23738Cu;
label_23738c:
    // 0x23738c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x23738Cu;
    SET_GPR_U32(ctx, 31, 0x237394u);
    ctx->pc = 0x237390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23738Cu;
    // 0x237390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23738Cu, 0x237394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237394u;
label_237394:
    // 0x237394: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x237394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237398: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x237398u;
    {
        const bool branch_taken_0x237398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237398u;
        // 0x23739c: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237398) {
            ctx->pc = 0x2373C0u;
            goto label_2373c0;
        }
    }
    ctx->pc = 0x2373A0u;
    // 0x2373a0: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2373a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2373a4: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2373a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2373a8: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2373A8u;
    {
        const bool branch_taken_0x2373a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2373a8) {
            ctx->pc = 0x2373ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373A8u;
            // 0x2373ac: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373C4u;
            goto label_2373c4;
        }
    }
    ctx->pc = 0x2373B0u;
    // 0x2373b0: 0xc06bd66  jal         func_1AF598
    ctx->pc = 0x2373B0u;
    SET_GPR_U32(ctx, 31, 0x2373B8u);
    ctx->pc = 0x2373B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373B0u;
    // 0x2373b4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF598u, 0x2373B0u, 0x2373B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373B8u;
label_2373b8:
    // 0x2373b8: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x2373B8u;
    {
        const bool branch_taken_0x2373b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373B8u;
        // 0x2373bc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373b8) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2373C0u;
label_2373c0:
    // 0x2373c0: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2373c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2373c4:
    // 0x2373c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2373c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2373c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2373cc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2373CCu;
    {
        const bool branch_taken_0x2373cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373CCu;
        // 0x2373d0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373cc) {
            ctx->pc = 0x2374FCu;
            goto label_2374fc;
        }
    }
    ctx->pc = 0x2373D4u;
    // 0x2373d4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2373d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2373d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2373d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2373dc: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2373DCu;
    {
        const bool branch_taken_0x2373dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373dc) {
            ctx->pc = 0x2374FCu;
            goto label_2374fc;
        }
    }
    ctx->pc = 0x2373E4u;
    // 0x2373e4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2373e8: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2373ec: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2373ECu;
    {
        const bool branch_taken_0x2373ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2373F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373ECu;
        // 0x2373f0: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373ec) {
            ctx->pc = 0x2374F8u;
            goto label_2374f8;
        }
    }
    ctx->pc = 0x2373F4u;
    // 0x2373f4: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2373f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2373f8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2373fc: 0x5064019b  beql        $v1, $a0, . + 4 + (0x19B << 2)
    ctx->pc = 0x2373FCu;
    {
        const bool branch_taken_0x2373fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2373fc) {
            ctx->pc = 0x237400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373FCu;
            // 0x237400: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A6Cu;
            goto label_237a6c;
        }
    }
    ctx->pc = 0x237404u;
    // 0x237404: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x237404u;
    SET_GPR_U32(ctx, 31, 0x23740Cu);
    ctx->pc = 0x237408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237404u;
    // 0x237408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x237404u, 0x23740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23740Cu;
label_23740c:
    // 0x23740c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23740Cu;
    {
        const bool branch_taken_0x23740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23740Cu;
        // 0x237410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23740c) {
            ctx->pc = 0x23741Cu;
            goto label_23741c;
        }
    }
    ctx->pc = 0x237414u;
    // 0x237414: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x237414u;
    {
        const bool branch_taken_0x237414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237414u;
        // 0x237418: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237414) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x23741Cu;
label_23741c:
    // 0x23741c: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x23741Cu;
    SET_GPR_U32(ctx, 31, 0x237424u);
    ctx->pc = 0x237420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23741Cu;
    // 0x237420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x23741Cu, 0x237424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237424u;
label_237424:
    // 0x237424: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x237424u;
    {
        const bool branch_taken_0x237424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237424) {
            ctx->pc = 0x237428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237424u;
            // 0x237428: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237448u;
            goto label_237448;
        }
    }
    ctx->pc = 0x23742Cu;
    // 0x23742c: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x23742Cu;
    SET_GPR_U32(ctx, 31, 0x237434u);
    ctx->pc = 0x237430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23742Cu;
    // 0x237430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x23742Cu, 0x237434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237434u;
label_237434:
    // 0x237434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237434u;
    {
        const bool branch_taken_0x237434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237434u;
        // 0x237438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237434) {
            ctx->pc = 0x237444u;
            goto label_237444;
        }
    }
    ctx->pc = 0x23743Cu;
    // 0x23743c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x23743Cu;
    {
        const bool branch_taken_0x23743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23743Cu;
        // 0x237440: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23743c) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x237444u;
label_237444:
    // 0x237444: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_237448:
    // 0x237448: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x237448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23744c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x237450: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237450u;
    {
        const bool branch_taken_0x237450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237450u;
        // 0x237454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237450) {
            ctx->pc = 0x237474u;
            goto label_237474;
        }
    }
    ctx->pc = 0x237458u;
    // 0x237458: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23745c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23745Cu;
    {
        const bool branch_taken_0x23745c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23745Cu;
        // 0x237460: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23745c) {
            ctx->pc = 0x237474u;
            goto label_237474;
        }
    }
    ctx->pc = 0x237464u;
    // 0x237464: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237464u;
    {
        const bool branch_taken_0x237464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237464u;
        // 0x237468: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237464) {
            ctx->pc = 0x237474u;
            goto label_237474;
        }
    }
    ctx->pc = 0x23746Cu;
    // 0x23746c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23746Cu;
    {
        const bool branch_taken_0x23746c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23746c) {
            ctx->pc = 0x237478u;
            goto label_237478;
        }
    }
    ctx->pc = 0x237474u;
label_237474:
    // 0x237474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237478:
    // 0x237478: 0x148001cc  bnez        $a0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x237478u;
    {
        const bool branch_taken_0x237478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237478u;
        // 0x23747c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237478) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237480u;
    // 0x237480: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x237480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x237484: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x237484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x237488: 0x1462014c  bne         $v1, $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x237488u;
    {
        const bool branch_taken_0x237488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237488) {
            ctx->pc = 0x2379BCu;
            goto label_2379bc;
        }
    }
    ctx->pc = 0x237490u;
    // 0x237490: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x237490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x237494: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x237494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x237498: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x237498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x23749c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23749cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2374a0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2374A0u;
    {
        const bool branch_taken_0x2374a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2374A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A0u;
        // 0x2374a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374a0) {
            ctx->pc = 0x2374DCu;
            goto label_2374dc;
        }
    }
    ctx->pc = 0x2374A8u;
    // 0x2374a8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2374a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2374ac: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2374ACu;
    {
        const bool branch_taken_0x2374ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2374ac) {
            ctx->pc = 0x2374B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2374ACu;
            // 0x2374b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x2374B4u;
    // 0x2374b4: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2374B4u;
    SET_GPR_U32(ctx, 31, 0x2374BCu);
    ctx->pc = 0x2374B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374B4u;
    // 0x2374b8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2374B4u, 0x2374BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374BCu;
label_2374bc:
    // 0x2374bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2374BCu;
    {
        const bool branch_taken_0x2374bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2374bc) {
            ctx->pc = 0x2374C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2374BCu;
            // 0x2374c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x2374C4u;
    // 0x2374c4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2374c8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2374c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2374cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2374CCu;
    {
        const bool branch_taken_0x2374cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2374D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374CCu;
        // 0x2374d0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374cc) {
            ctx->pc = 0x2374DCu;
            goto label_2374dc;
        }
    }
    ctx->pc = 0x2374D4u;
    // 0x2374d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2374D4u;
    {
        const bool branch_taken_0x2374d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2374d4) {
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x2374DCu;
label_2374dc:
    // 0x2374dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2374dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2374e0:
    // 0x2374e0: 0x12400136  beqz        $s2, . + 4 + (0x136 << 2)
    ctx->pc = 0x2374E0u;
    {
        const bool branch_taken_0x2374e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2374e0) {
            ctx->pc = 0x2379BCu;
            goto label_2379bc;
        }
    }
    ctx->pc = 0x2374E8u;
    // 0x2374e8: 0xc06b8bc  jal         func_1AE2F0
    ctx->pc = 0x2374E8u;
    SET_GPR_U32(ctx, 31, 0x2374F0u);
    ctx->pc = 0x2374ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374E8u;
    // 0x2374ec: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE2F0u, 0x2374E8u, 0x2374F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374F0u;
label_2374f0:
    // 0x2374f0: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x2374F0u;
    {
        const bool branch_taken_0x2374f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374F0u;
        // 0x2374f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374f0) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2374F8u;
label_2374f8:
    // 0x2374f8: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x2374f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_2374fc:
    // 0x2374fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2374FCu;
    {
        const bool branch_taken_0x2374fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374FCu;
        // 0x237500: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374fc) {
            ctx->pc = 0x23755Cu;
            goto label_23755c;
        }
    }
    ctx->pc = 0x237504u;
    // 0x237504: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x237504u;
    SET_GPR_U32(ctx, 31, 0x23750Cu);
    ctx->pc = 0x237508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237504u;
    // 0x237508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x237504u, 0x23750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23750Cu;
label_23750c:
    // 0x23750c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x23750cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x237510: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x237510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x237514: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x237514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x237518: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237518u;
    {
        const bool branch_taken_0x237518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237518u;
        // 0x23751c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237518) {
            ctx->pc = 0x237534u;
            goto label_237534;
        }
    }
    ctx->pc = 0x237520u;
    // 0x237520: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x237524: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x237528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23752c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x23752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x237530: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x237530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_237534:
    // 0x237534: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x237534u;
    {
        const bool branch_taken_0x237534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237534u;
        // 0x237538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237534) {
            ctx->pc = 0x237554u;
            goto label_237554;
        }
    }
    ctx->pc = 0x23753Cu;
    // 0x23753c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23753Cu;
    {
        const bool branch_taken_0x23753c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23753Cu;
        // 0x237540: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23753c) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x237544u;
    // 0x237544: 0xc06b866  jal         func_1AE198
    ctx->pc = 0x237544u;
    SET_GPR_U32(ctx, 31, 0x23754Cu);
    ctx->pc = 0x237548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237544u;
    // 0x237548: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE198u, 0x237544u, 0x23754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23754Cu;
label_23754c:
    // 0x23754c: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x23754Cu;
    {
        const bool branch_taken_0x23754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23754Cu;
        // 0x237550: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23754c) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237554u;
label_237554:
    // 0x237554: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x237554u;
    {
        const bool branch_taken_0x237554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237554u;
        // 0x237558: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237554) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x23755Cu;
label_23755c:
    // 0x23755c: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x23755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x237560: 0x54430044  bnel        $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x237560u;
    {
        const bool branch_taken_0x237560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237560) {
            ctx->pc = 0x237564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237560u;
            // 0x237564: 0x8e220370  lw          $v0, 0x370($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237674u;
            goto label_237674;
        }
    }
    ctx->pc = 0x237568u;
    // 0x237568: 0xc08da92  jal         func_236A48
    ctx->pc = 0x237568u;
    SET_GPR_U32(ctx, 31, 0x237570u);
    ctx->pc = 0x23756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237568u;
    // 0x23756c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x237568u, 0x237570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237570u;
label_237570:
    // 0x237570: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x237570u;
    {
        const bool branch_taken_0x237570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237570) {
            ctx->pc = 0x237574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237570u;
            // 0x237574: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375A0u;
            goto label_2375a0;
        }
    }
    ctx->pc = 0x237578u;
    // 0x237578: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x237578u;
    SET_GPR_U32(ctx, 31, 0x237580u);
    ctx->pc = 0x23757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237578u;
    // 0x23757c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x237578u, 0x237580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237580u;
label_237580:
    // 0x237580: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237580u;
    {
        const bool branch_taken_0x237580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237580) {
            ctx->pc = 0x237584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237580u;
            // 0x237584: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375A0u;
            goto label_2375a0;
        }
    }
    ctx->pc = 0x237588u;
    // 0x237588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23758c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x23758cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_237590:
    // 0x237590: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x237590u;
    SET_GPR_U32(ctx, 31, 0x237598u);
    ctx->pc = 0x237594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237590u;
    // 0x237594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x237590u, 0x237598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237598u;
label_237598:
    // 0x237598: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x237598u;
    {
        const bool branch_taken_0x237598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237598u;
        // 0x23759c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237598) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2375A0u;
label_2375a0:
    // 0x2375a0: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2375a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2375a4: 0x2462ffeb  addiu       $v0, $v1, -0x15
    ctx->pc = 0x2375a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
    // 0x2375a8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2375a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2375ac: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x2375ACu;
    {
        const bool branch_taken_0x2375ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375ACu;
        // 0x2375b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375ac) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2375B4u;
    // 0x2375b4: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2375b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2375bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2375bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2375c0: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x2375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x2375c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2375c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2375cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2375ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2375d0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2375d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2375d4: 0xc096ab6  jal         func_25AAD8
    ctx->pc = 0x2375D4u;
    SET_GPR_U32(ctx, 31, 0x2375DCu);
    ctx->pc = 0x2375D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375D4u;
    // 0x2375d8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AAD8u, 0x2375D4u, 0x2375DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375DCu;
label_2375dc:
    // 0x2375dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2375dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2375e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2375e4: 0xc096b2a  jal         func_25ACA8
    ctx->pc = 0x2375E4u;
    SET_GPR_U32(ctx, 31, 0x2375ECu);
    ctx->pc = 0x2375E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375E4u;
    // 0x2375e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACA8u, 0x2375E4u, 0x2375ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375ECu;
label_2375ec:
    // 0x2375ec: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x2375ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2375f0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2375f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2375f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2375F4u;
    {
        const bool branch_taken_0x2375f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375F4u;
        // 0x2375f8: 0x8e260338  lw          $a2, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375f4) {
            ctx->pc = 0x237604u;
            goto label_237604;
        }
    }
    ctx->pc = 0x2375FCu;
    // 0x2375fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2375FCu;
    {
        const bool branch_taken_0x2375fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375FCu;
        // 0x237600: 0x8cc300a0  lw          $v1, 0xA0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375fc) {
            ctx->pc = 0x237634u;
            goto label_237634;
        }
    }
    ctx->pc = 0x237604u;
label_237604:
    // 0x237604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237608: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x23760c: 0x0  nop
    ctx->pc = 0x23760cu;
    // NOP
label_237610:
    // 0x237610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237614: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237614u;
    {
        const bool branch_taken_0x237614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237614) {
            ctx->pc = 0x237618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237614u;
            // 0x237618: 0x8cc300a0  lw          $v1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237634u;
            goto label_237634;
        }
    }
    ctx->pc = 0x23761Cu;
    // 0x23761c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x237620: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x237620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x237624: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x237624u;
    {
        const bool branch_taken_0x237624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237624u;
        // 0x237628: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237624) {
            ctx->pc = 0x237610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237610;
        }
    }
    ctx->pc = 0x23762Cu;
    // 0x23762c: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x23762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x237630: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x237630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
label_237634:
    // 0x237634: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x237634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x237638: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x237638u;
    {
        const bool branch_taken_0x237638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237638u;
        // 0x23763c: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237638) {
            ctx->pc = 0x237644u;
            goto label_237644;
        }
    }
    ctx->pc = 0x237640u;
    // 0x237640: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x237640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237644:
    // 0x237644: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x237644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237648: 0x0  nop
    ctx->pc = 0x237648u;
    // NOP
    // 0x23764c: 0x45000157  bc1f        . + 4 + (0x157 << 2)
    ctx->pc = 0x23764Cu;
    {
        const bool branch_taken_0x23764c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23764Cu;
        // 0x237650: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23764c) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237654u;
    // 0x237654: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x237654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237658: 0x0  nop
    ctx->pc = 0x237658u;
    // NOP
    // 0x23765c: 0x45020154  bc1fl       . + 4 + (0x154 << 2)
    ctx->pc = 0x23765Cu;
    {
        const bool branch_taken_0x23765c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23765c) {
            ctx->pc = 0x237660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23765Cu;
            // 0x237660: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BB0u;
            return;
        }
    }
    ctx->pc = 0x237664u;
    // 0x237664: 0xc06bef0  jal         func_1AFBC0
    ctx->pc = 0x237664u;
    SET_GPR_U32(ctx, 31, 0x23766Cu);
    ctx->pc = 0x237668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237664u;
    // 0x237668: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFBC0u, 0x237664u, 0x23766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23766Cu;
label_23766c:
    // 0x23766c: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x23766Cu;
    {
        const bool branch_taken_0x23766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23766Cu;
        // 0x237670: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23766c) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237674u;
label_237674:
    // 0x237674: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x237674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x237678: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x237678u;
    {
        const bool branch_taken_0x237678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237678) {
            ctx->pc = 0x23767Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237678u;
            // 0x23767c: 0x8e240418  lw          $a0, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376B0u;
            goto label_2376b0;
        }
    }
    ctx->pc = 0x237680u;
    // 0x237680: 0xc08da92  jal         func_236A48
    ctx->pc = 0x237680u;
    SET_GPR_U32(ctx, 31, 0x237688u);
    ctx->pc = 0x237684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237680u;
    // 0x237684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x237680u, 0x237688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237688u;
label_237688:
    // 0x237688: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237688u;
    {
        const bool branch_taken_0x237688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237688u;
        // 0x23768c: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237688) {
            ctx->pc = 0x2376A0u;
            goto label_2376a0;
        }
    }
    ctx->pc = 0x237690u;
    // 0x237690: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x237690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x237694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x237698: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x237698u;
    {
        const bool branch_taken_0x237698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237698u;
        // 0x23769c: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237698) {
            ctx->pc = 0x237BA8u;
            return;
        }
    }
    ctx->pc = 0x2376A0u;
label_2376a0:
    // 0x2376a0: 0xc06bf34  jal         func_1AFCD0
    ctx->pc = 0x2376A0u;
    SET_GPR_U32(ctx, 31, 0x2376A8u);
    ctx->pc = 0x2376A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376A0u;
    // 0x2376a4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFCD0u, 0x2376A0u, 0x2376A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376A8u;
label_2376a8:
    // 0x2376a8: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x2376A8u;
    {
        const bool branch_taken_0x2376a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376A8u;
        // 0x2376ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376a8) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2376B0u;
label_2376b0:
    // 0x2376b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2376b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2376b4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2376B4u;
    {
        const bool branch_taken_0x2376b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2376B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376B4u;
        // 0x2376b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376b4) {
            ctx->pc = 0x2376C4u;
            goto label_2376c4;
        }
    }
    ctx->pc = 0x2376BCu;
    // 0x2376bc: 0x54820038  bnel        $a0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2376BCu;
    {
        const bool branch_taken_0x2376bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2376bc) {
            ctx->pc = 0x2376C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2376BCu;
            // 0x2376c0: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2377A0u;
            goto label_2377a0;
        }
    }
    ctx->pc = 0x2376C4u;
label_2376c4:
    // 0x2376c4: 0x8e23041c  lw          $v1, 0x41C($s1)
    ctx->pc = 0x2376c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
    // 0x2376c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2376c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2376cc: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2376CCu;
    {
        const bool branch_taken_0x2376cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2376D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376CCu;
        // 0x2376d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376cc) {
            ctx->pc = 0x237780u;
            goto label_237780;
        }
    }
    ctx->pc = 0x2376D4u;
    // 0x2376d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2376D4u;
    {
        const bool branch_taken_0x2376d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2376d4) {
            ctx->pc = 0x2376D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2376D4u;
            // 0x2376d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376ECu;
            goto label_2376ec;
        }
    }
    ctx->pc = 0x2376DCu;
    // 0x2376dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2376DCu;
    {
        const bool branch_taken_0x2376dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376DCu;
        // 0x2376e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376dc) {
            ctx->pc = 0x2376FCu;
            goto label_2376fc;
        }
    }
    ctx->pc = 0x2376E4u;
    // 0x2376e4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2376E4u;
    {
        const bool branch_taken_0x2376e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376E4u;
        // 0x2376e8: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376e4) {
            ctx->pc = 0x237BB0u;
            return;
        }
    }
    ctx->pc = 0x2376ECu;
label_2376ec:
    // 0x2376ec: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2376ECu;
    {
        const bool branch_taken_0x2376ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2376F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376ECu;
        // 0x2376f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376ec) {
            ctx->pc = 0x237790u;
            goto label_237790;
        }
    }
    ctx->pc = 0x2376F4u;
    // 0x2376f4: 0x1462012d  bne         $v1, $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x2376F4u;
    {
        const bool branch_taken_0x2376f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2376F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376F4u;
        // 0x2376f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376f4) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2376FCu;
label_2376fc:
    // 0x2376fc: 0xc089490  jal         func_225240
    ctx->pc = 0x2376FCu;
    SET_GPR_U32(ctx, 31, 0x237704u);
    ctx->pc = 0x237700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376FCu;
    // 0x237700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x2376FCu, 0x237704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237704u;
label_237704:
    // 0x237704: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x237704u;
    {
        const bool branch_taken_0x237704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237704) {
            ctx->pc = 0x23775Cu;
            goto label_23775c;
        }
    }
    ctx->pc = 0x23770Cu;
    // 0x23770c: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x23770Cu;
    SET_GPR_U32(ctx, 31, 0x237714u);
    ctx->pc = 0x237710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23770Cu;
    // 0x237710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x23770Cu, 0x237714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237714u;
label_237714:
    // 0x237714: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237714u;
    {
        const bool branch_taken_0x237714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237714) {
            ctx->pc = 0x237724u;
            goto label_237724;
        }
    }
    ctx->pc = 0x23771Cu;
    // 0x23771c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x23771Cu;
    {
        const bool branch_taken_0x23771c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23771c) {
            ctx->pc = 0x23775Cu;
            goto label_23775c;
        }
    }
    ctx->pc = 0x237724u;
label_237724:
    // 0x237724: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x237724u;
    {
        const bool branch_taken_0x237724 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237724u;
        // 0x237728: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237724) {
            ctx->pc = 0x237738u;
            goto label_237738;
        }
    }
    ctx->pc = 0x23772Cu;
    // 0x23772c: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237730: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x237730u;
    {
        const bool branch_taken_0x237730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237730u;
        // 0x237734: 0x240600b5  addiu       $a2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237730) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x237738u;
label_237738:
    // 0x237738: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x237738u;
    {
        const bool branch_taken_0x237738 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237738u;
        // 0x23773c: 0x240600bb  addiu       $a2, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237738) {
            ctx->pc = 0x23774Cu;
            goto label_23774c;
        }
    }
    ctx->pc = 0x237740u;
    // 0x237740: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237744: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x237744u;
    {
        const bool branch_taken_0x237744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237744) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x23774Cu;
label_23774c:
    // 0x23774c: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237750: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x237750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x237754: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x237754u;
    {
        const bool branch_taken_0x237754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237754u;
        // 0x237758: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237754) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x23775Cu;
label_23775c:
    // 0x23775c: 0x126000e3  beqz        $s3, . + 4 + (0xE3 << 2)
    ctx->pc = 0x23775Cu;
    {
        const bool branch_taken_0x23775c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23775c) {
            ctx->pc = 0x237AECu;
            goto label_237aec;
        }
    }
    ctx->pc = 0x237764u;
    // 0x237764: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x237764u;
    SET_GPR_U32(ctx, 31, 0x23776Cu);
    ctx->pc = 0x237768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237764u;
    // 0x237768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x237764u, 0x23776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23776Cu;
label_23776c:
    // 0x23776c: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x23776Cu;
    {
        const bool branch_taken_0x23776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23776Cu;
        // 0x237770: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23776c) {
            ctx->pc = 0x237AECu;
            goto label_237aec;
        }
    }
    ctx->pc = 0x237774u;
    // 0x237774: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237778: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x237778u;
    {
        const bool branch_taken_0x237778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237778u;
        // 0x23777c: 0x240600dd  addiu       $a2, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237778) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x237780u;
label_237780:
    // 0x237780: 0xc06bad4  jal         func_1AEB50
    ctx->pc = 0x237780u;
    SET_GPR_U32(ctx, 31, 0x237788u);
    ctx->pc = 0x237784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237780u;
    // 0x237784: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB50u, 0x237780u, 0x237788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237788u;
label_237788:
    // 0x237788: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x237788u;
    {
        const bool branch_taken_0x237788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237788u;
        // 0x23778c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237788) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237790u;
label_237790:
    // 0x237790: 0xc06bb10  jal         func_1AEC40
    ctx->pc = 0x237790u;
    SET_GPR_U32(ctx, 31, 0x237798u);
    ctx->pc = 0x237794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237790u;
    // 0x237794: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC40u, 0x237790u, 0x237798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237798u;
label_237798:
    // 0x237798: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x237798u;
    {
        const bool branch_taken_0x237798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237798u;
        // 0x23779c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237798) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2377A0u;
label_2377a0:
    // 0x2377a0: 0x8c660150  lw          $a2, 0x150($v1)
    ctx->pc = 0x2377a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2377a4: 0x24c2ffcf  addiu       $v0, $a2, -0x31
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967247));
    // 0x2377a8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2377a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2377ac: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2377ACu;
    {
        const bool branch_taken_0x2377ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377ACu;
        // 0x2377b0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377ac) {
            ctx->pc = 0x2378D4u;
            goto label_2378d4;
        }
    }
    ctx->pc = 0x2377B4u;
    // 0x2377b4: 0x3882000e  xori        $v0, $a0, 0xE
    ctx->pc = 0x2377b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)14);
    // 0x2377b8: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2377b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2377bc: 0x10c300aa  beq         $a2, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2377BCu;
    {
        const bool branch_taken_0x2377bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2377C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377BCu;
        // 0x2377c0: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377bc) {
            ctx->pc = 0x237A68u;
            goto label_237a68;
        }
    }
    ctx->pc = 0x2377C4u;
    // 0x2377c4: 0x24c2ffcc  addiu       $v0, $a2, -0x34
    ctx->pc = 0x2377c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967244));
    // 0x2377c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2377c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2377cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2377CCu;
    {
        const bool branch_taken_0x2377cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377CCu;
        // 0x2377d0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377cc) {
            ctx->pc = 0x23780Cu;
            goto label_23780c;
        }
    }
    ctx->pc = 0x2377D4u;
    // 0x2377d4: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x2377d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2377d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2377D8u;
    {
        const bool branch_taken_0x2377d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2377DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D8u;
        // 0x2377dc: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d8) {
            ctx->pc = 0x2377F0u;
            goto label_2377f0;
        }
    }
    ctx->pc = 0x2377E0u;
    // 0x2377e0: 0xc06bbe4  jal         func_1AEF90
    ctx->pc = 0x2377E0u;
    SET_GPR_U32(ctx, 31, 0x2377E8u);
    ctx->pc = 0x2377E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377E0u;
    // 0x2377e4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF90u, 0x2377E0u, 0x2377E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E8u;
label_2377e8:
    // 0x2377e8: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2377E8u;
    {
        const bool branch_taken_0x2377e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E8u;
        // 0x2377ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377e8) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2377F0u;
label_2377f0:
    // 0x2377f0: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x2377f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2377f4: 0x144300ed  bne         $v0, $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x2377F4u;
    {
        const bool branch_taken_0x2377f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2377F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377F4u;
        // 0x2377f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377f4) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2377FCu;
    // 0x2377fc: 0xc06bc12  jal         func_1AF048
    ctx->pc = 0x2377FCu;
    SET_GPR_U32(ctx, 31, 0x237804u);
    ctx->pc = 0x237800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377FCu;
    // 0x237800: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF048u, 0x2377FCu, 0x237804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237804u;
label_237804:
    // 0x237804: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x237804u;
    {
        const bool branch_taken_0x237804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237804u;
        // 0x237808: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237804) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x23780Cu;
label_23780c:
    // 0x23780c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x237810: 0x240407a1  addiu       $a0, $zero, 0x7A1
    ctx->pc = 0x237810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    // 0x237814: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x237818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x237818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23781c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23781Cu;
    {
        const bool branch_taken_0x23781c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x237820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23781Cu;
        // 0x237820: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23781c) {
            ctx->pc = 0x237838u;
            goto label_237838;
        }
    }
    ctx->pc = 0x237824u;
    // 0x237824: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237828: 0xc06bb4e  jal         func_1AED38
    ctx->pc = 0x237828u;
    SET_GPR_U32(ctx, 31, 0x237830u);
    ctx->pc = 0x23782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237828u;
    // 0x23782c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED38u, 0x237828u, 0x237830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237830u;
label_237830:
    // 0x237830: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x237830u;
    {
        const bool branch_taken_0x237830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237830u;
        // 0x237834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237830) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237838u;
label_237838:
    // 0x237838: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x237838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x23783c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23783Cu;
    {
        const bool branch_taken_0x23783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23783Cu;
        // 0x237840: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23783c) {
            ctx->pc = 0x237860u;
            goto label_237860;
        }
    }
    ctx->pc = 0x237844u;
    // 0x237844: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x237844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x237848: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237848u;
    {
        const bool branch_taken_0x237848 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237848u;
        // 0x23784c: 0xe31024  and         $v0, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237848) {
            ctx->pc = 0x237864u;
            goto label_237864;
        }
    }
    ctx->pc = 0x237850u;
    // 0x237850: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x237850u;
    SET_GPR_U32(ctx, 31, 0x237858u);
    ctx->pc = 0x237854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237850u;
    // 0x237854: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF100u, 0x237850u, 0x237858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237858u;
label_237858:
    // 0x237858: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x237858u;
    {
        const bool branch_taken_0x237858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237858u;
        // 0x23785c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237858) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237860u;
label_237860:
    // 0x237860: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x237860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_237864:
    // 0x237864: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x237864u;
    {
        const bool branch_taken_0x237864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237864u;
        // 0x237868: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237864) {
            ctx->pc = 0x23788Cu;
            goto label_23788c;
        }
    }
    ctx->pc = 0x23786Cu;
    // 0x23786c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x237870: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x237874: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237874u;
    {
        const bool branch_taken_0x237874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237874u;
        // 0x237878: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237874) {
            ctx->pc = 0x23788Cu;
            goto label_23788c;
        }
    }
    ctx->pc = 0x23787Cu;
    // 0x23787c: 0xc06bc7a  jal         func_1AF1E8
    ctx->pc = 0x23787Cu;
    SET_GPR_U32(ctx, 31, 0x237884u);
    ctx->pc = 0x237880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23787Cu;
    // 0x237880: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1E8u, 0x23787Cu, 0x237884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237884u;
label_237884:
    // 0x237884: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x237884u;
    {
        const bool branch_taken_0x237884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237884u;
        // 0x237888: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237884) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x23788Cu;
label_23788c:
    // 0x23788c: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x23788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x237890: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237890u;
    {
        const bool branch_taken_0x237890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237890u;
        // 0x237894: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237890) {
            ctx->pc = 0x2378A8u;
            goto label_2378a8;
        }
    }
    ctx->pc = 0x237898u;
    // 0x237898: 0xc06bb88  jal         func_1AEE20
    ctx->pc = 0x237898u;
    SET_GPR_U32(ctx, 31, 0x2378A0u);
    ctx->pc = 0x23789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237898u;
    // 0x23789c: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE20u, 0x237898u, 0x2378A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378A0u;
label_2378a0:
    // 0x2378a0: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2378A0u;
    {
        const bool branch_taken_0x2378a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A0u;
        // 0x2378a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a0) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2378A8u;
label_2378a8:
    // 0x2378a8: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x2378a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2378ac: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2378ACu;
    {
        const bool branch_taken_0x2378ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2378ac) {
            ctx->pc = 0x2378B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2378ACu;
            // 0x2378b0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378C4u;
            goto label_2378c4;
        }
    }
    ctx->pc = 0x2378B4u;
    // 0x2378b4: 0xc06bbb6  jal         func_1AEED8
    ctx->pc = 0x2378B4u;
    SET_GPR_U32(ctx, 31, 0x2378BCu);
    ctx->pc = 0x2378B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378B4u;
    // 0x2378b8: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEED8u, 0x2378B4u, 0x2378BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378BCu;
label_2378bc:
    // 0x2378bc: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2378BCu;
    {
        const bool branch_taken_0x2378bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378BCu;
        // 0x2378c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378bc) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2378C4u;
label_2378c4:
    // 0x2378c4: 0xc06bb4e  jal         func_1AED38
    ctx->pc = 0x2378C4u;
    SET_GPR_U32(ctx, 31, 0x2378CCu);
    ctx->pc = 0x2378C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378C4u;
    // 0x2378c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED38u, 0x2378C4u, 0x2378CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378CCu;
label_2378cc:
    // 0x2378cc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2378CCu;
    {
        const bool branch_taken_0x2378cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378CCu;
        // 0x2378d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378cc) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2378D4u;
label_2378d4:
    // 0x2378d4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2378d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2378d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2378d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2378dc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2378DCu;
    {
        const bool branch_taken_0x2378dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2378E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378DCu;
        // 0x2378e0: 0x8e23041c  lw          $v1, 0x41C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378dc) {
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x2378E4u;
    // 0x2378e4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2378e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2378e8: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2378E8u;
    {
        const bool branch_taken_0x2378e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378E8u;
        // 0x2378ec: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378e8) {
            ctx->pc = 0x237BA8u;
            return;
        }
    }
    ctx->pc = 0x2378F0u;
    // 0x2378f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2378f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2378f4: 0x24424fd0  addiu       $v0, $v0, 0x4FD0
    ctx->pc = 0x2378f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20432));
    // 0x2378f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2378f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2378fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2378fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237900: 0x800008  jr          $a0
    ctx->pc = 0x237900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237908u: goto label_237908;
            case 0x23796Cu: goto label_23796c;
            case 0x23797Cu: goto label_23797c;
            case 0x237A7Cu: goto label_237a7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x237908u;
label_237908:
    // 0x237908: 0xc089490  jal         func_225240
    ctx->pc = 0x237908u;
    SET_GPR_U32(ctx, 31, 0x237910u);
    ctx->pc = 0x23790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237908u;
    // 0x23790c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x237908u, 0x237910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237910u;
label_237910:
    // 0x237910: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x237910u;
    {
        const bool branch_taken_0x237910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237910) {
            ctx->pc = 0x237948u;
            goto label_237948;
        }
    }
    ctx->pc = 0x237918u;
    // 0x237918: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x237918u;
    SET_GPR_U32(ctx, 31, 0x237920u);
    ctx->pc = 0x23791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237918u;
    // 0x23791c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x237918u, 0x237920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237920u;
label_237920:
    // 0x237920: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237920u;
    {
        const bool branch_taken_0x237920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237920) {
            ctx->pc = 0x237948u;
            goto label_237948;
        }
    }
    ctx->pc = 0x237928u;
    // 0x237928: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x237928u;
    {
        const bool branch_taken_0x237928 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237928u;
        // 0x23792c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237928) {
            ctx->pc = 0x23793Cu;
            goto label_23793c;
        }
    }
    ctx->pc = 0x237930u;
    // 0x237930: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237934: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x237934u;
    {
        const bool branch_taken_0x237934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237934u;
        // 0x237938: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237934) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x23793Cu;
label_23793c:
    // 0x23793c: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x23793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237940: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x237940u;
    {
        const bool branch_taken_0x237940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237940u;
        // 0x237944: 0x240600bb  addiu       $a2, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237940) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x237948u;
label_237948:
    // 0x237948: 0x12600068  beqz        $s3, . + 4 + (0x68 << 2)
    ctx->pc = 0x237948u;
    {
        const bool branch_taken_0x237948 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x237948) {
            ctx->pc = 0x237AECu;
            goto label_237aec;
        }
    }
    ctx->pc = 0x237950u;
    // 0x237950: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x237950u;
    SET_GPR_U32(ctx, 31, 0x237958u);
    ctx->pc = 0x237954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237950u;
    // 0x237954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x237950u, 0x237958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237958u;
label_237958:
    // 0x237958: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x237958u;
    {
        const bool branch_taken_0x237958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237958u;
        // 0x23795c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237958) {
            ctx->pc = 0x237AECu;
            goto label_237aec;
        }
    }
    ctx->pc = 0x237960u;
    // 0x237960: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237964: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x237964u;
    {
        const bool branch_taken_0x237964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237964u;
        // 0x237968: 0x240600dd  addiu       $a2, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237964) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x23796Cu;
label_23796c:
    // 0x23796c: 0xc06b9fc  jal         func_1AE7F0
    ctx->pc = 0x23796Cu;
    SET_GPR_U32(ctx, 31, 0x237974u);
    ctx->pc = 0x237970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23796Cu;
    // 0x237970: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE7F0u, 0x23796Cu, 0x237974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237974u;
label_237974:
    // 0x237974: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x237974u;
    {
        const bool branch_taken_0x237974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237974u;
        // 0x237978: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237974) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x23797Cu;
label_23797c:
    // 0x23797c: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x23797Cu;
    SET_GPR_U32(ctx, 31, 0x237984u);
    ctx->pc = 0x237980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23797Cu;
    // 0x237980: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE9B0u, 0x23797Cu, 0x237984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237984u;
label_237984:
    // 0x237984: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x237984u;
    {
        const bool branch_taken_0x237984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237984u;
        // 0x237988: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237984) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x23798Cu;
label_23798c:
    // 0x23798c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x23798cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x237990: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x237990u;
    {
        const bool branch_taken_0x237990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237990u;
        // 0x237994: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237990) {
            ctx->pc = 0x237BA8u;
            return;
        }
    }
    ctx->pc = 0x237998u;
    // 0x237998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23799c: 0x24424ff0  addiu       $v0, $v0, 0x4FF0
    ctx->pc = 0x23799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20464));
    // 0x2379a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2379a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2379a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2379a8: 0x800008  jr          $a0
    ctx->pc = 0x2379A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2379B0u: goto label_2379b0;
            case 0x2379DCu: goto label_2379dc;
            case 0x237A7Cu: goto label_237a7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2379A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2379B0u;
label_2379b0:
    // 0x2379b0: 0x30e20200  andi        $v0, $a3, 0x200
    ctx->pc = 0x2379b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
    // 0x2379b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2379B4u;
    {
        const bool branch_taken_0x2379b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379b4) {
            ctx->pc = 0x2379CCu;
            goto label_2379cc;
        }
    }
    ctx->pc = 0x2379BCu;
label_2379bc:
    // 0x2379bc: 0xc06b88a  jal         func_1AE228
    ctx->pc = 0x2379BCu;
    SET_GPR_U32(ctx, 31, 0x2379C4u);
    ctx->pc = 0x2379C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379BCu;
    // 0x2379c0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE228u, 0x2379BCu, 0x2379C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379C4u;
label_2379c4:
    // 0x2379c4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2379C4u;
    {
        const bool branch_taken_0x2379c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379C4u;
        // 0x2379c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379c4) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2379CCu;
label_2379cc:
    // 0x2379cc: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x2379CCu;
    SET_GPR_U32(ctx, 31, 0x2379D4u);
    ctx->pc = 0x2379D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379CCu;
    // 0x2379d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x2379CCu, 0x2379D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379D4u;
label_2379d4:
    // 0x2379d4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2379D4u;
    {
        const bool branch_taken_0x2379d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379D4u;
        // 0x2379d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379d4) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x2379DCu;
label_2379dc:
    // 0x2379dc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2379dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2379e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2379e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379e4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2379e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2379e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2379e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2379ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2379ECu;
    {
        const bool branch_taken_0x2379ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2379F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379ECu;
        // 0x2379f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379ec) {
            ctx->pc = 0x237A28u;
            goto label_237a28;
        }
    }
    ctx->pc = 0x2379F4u;
    // 0x2379f4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2379f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2379f8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2379F8u;
    {
        const bool branch_taken_0x2379f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2379f8) {
            ctx->pc = 0x2379FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379F8u;
            // 0x2379fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A2Cu;
            goto label_237a2c;
        }
    }
    ctx->pc = 0x237A00u;
    // 0x237a00: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x237A00u;
    SET_GPR_U32(ctx, 31, 0x237A08u);
    ctx->pc = 0x237A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A00u;
    // 0x237a04: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x237A00u, 0x237A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A08u;
label_237a08:
    // 0x237a08: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x237A08u;
    {
        const bool branch_taken_0x237a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237a08) {
            ctx->pc = 0x237A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A08u;
            // 0x237a0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A2Cu;
            goto label_237a2c;
        }
    }
    ctx->pc = 0x237A10u;
    // 0x237a10: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x237a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x237a14: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x237a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x237a18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237A18u;
    {
        const bool branch_taken_0x237a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A18u;
        // 0x237a1c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a18) {
            ctx->pc = 0x237A28u;
            goto label_237a28;
        }
    }
    ctx->pc = 0x237A20u;
    // 0x237a20: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237A20u;
    {
        const bool branch_taken_0x237a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237a20) {
            ctx->pc = 0x237A2Cu;
            goto label_237a2c;
        }
    }
    ctx->pc = 0x237A28u;
label_237a28:
    // 0x237a28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x237a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237a2c:
    // 0x237a2c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x237A2Cu;
    {
        const bool branch_taken_0x237a2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a2c) {
            ctx->pc = 0x237A50u;
            goto label_237a50;
        }
    }
    ctx->pc = 0x237A34u;
    // 0x237a34: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x237a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x237a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237a3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x237a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x237a40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x237a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237a44: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x237a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x237a48: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x237A48u;
    {
        const bool branch_taken_0x237a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a48) {
            ctx->pc = 0x237A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A48u;
            // 0x237a4c: 0x2853003d  slti        $s3, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A50u;
            goto label_237a50;
        }
    }
    ctx->pc = 0x237A50u;
label_237a50:
    // 0x237a50: 0x12600056  beqz        $s3, . + 4 + (0x56 << 2)
    ctx->pc = 0x237A50u;
    {
        const bool branch_taken_0x237a50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A50u;
        // 0x237a54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a50) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237A58u;
    // 0x237a58: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x237a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x237a5c: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x237a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x237a60: 0x50600053  beql        $v1, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x237A60u;
    {
        const bool branch_taken_0x237a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a60) {
            ctx->pc = 0x237A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A60u;
            // 0x237a64: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BB0u;
            return;
        }
    }
    ctx->pc = 0x237A68u;
label_237a68:
    // 0x237a68: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_237a6c:
    // 0x237a6c: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x237A6Cu;
    SET_GPR_U32(ctx, 31, 0x237A74u);
    ctx->pc = 0x237A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A6Cu;
    // 0x237a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x237A6Cu, 0x237A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A74u;
label_237a74:
    // 0x237a74: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x237A74u;
    {
        const bool branch_taken_0x237a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A74u;
        // 0x237a78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a74) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237A7Cu;
label_237a7c:
    // 0x237a7c: 0xc06ba34  jal         func_1AE8D0
    ctx->pc = 0x237A7Cu;
    SET_GPR_U32(ctx, 31, 0x237A84u);
    ctx->pc = 0x237A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A7Cu;
    // 0x237a80: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D0u, 0x237A7Cu, 0x237A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A84u;
label_237a84:
    // 0x237a84: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x237A84u;
    {
        const bool branch_taken_0x237a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A84u;
        // 0x237a88: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a84) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237A8Cu;
label_237a8c:
    // 0x237a8c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x237a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x237a90: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x237a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x237a94: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x237A94u;
    {
        const bool branch_taken_0x237a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237a94) {
            ctx->pc = 0x237AD4u;
            goto label_237ad4;
        }
    }
    ctx->pc = 0x237A9Cu;
    // 0x237a9c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x237A9Cu;
    {
        const bool branch_taken_0x237a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A9Cu;
        // 0x237aa0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a9c) {
            ctx->pc = 0x237AD4u;
            goto label_237ad4;
        }
    }
    ctx->pc = 0x237AA4u;
    // 0x237aa4: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x237aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x237aa8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237AA8u;
    {
        const bool branch_taken_0x237aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AA8u;
        // 0x237aac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237aa8) {
            ctx->pc = 0x237AB4u;
            goto label_237ab4;
        }
    }
    ctx->pc = 0x237AB0u;
    // 0x237ab0: 0x8e2411e4  lw          $a0, 0x11E4($s1)
    ctx->pc = 0x237ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_237ab4:
    // 0x237ab4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x237AB4u;
    {
        const bool branch_taken_0x237ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AB4u;
        // 0x237ab8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ab4) {
            ctx->pc = 0x237AD4u;
            goto label_237ad4;
        }
    }
    ctx->pc = 0x237ABCu;
    // 0x237abc: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x237abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x237ac0: 0x2406012e  addiu       $a2, $zero, 0x12E
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_237ac4:
    // 0x237ac4: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x237AC4u;
    SET_GPR_U32(ctx, 31, 0x237ACCu);
    ctx->pc = 0x237AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AC4u;
    // 0x237ac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x237AC4u, 0x237ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ACCu;
label_237acc:
    // 0x237acc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x237ACCu;
    {
        const bool branch_taken_0x237acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ACCu;
        // 0x237ad0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237acc) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237AD4u;
label_237ad4:
    // 0x237ad4: 0xc06bd5c  jal         func_1AF570
    ctx->pc = 0x237AD4u;
    SET_GPR_U32(ctx, 31, 0x237ADCu);
    ctx->pc = 0x237AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AD4u;
    // 0x237ad8: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF570u, 0x237AD4u, 0x237ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ADCu;
label_237adc:
    // 0x237adc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x237ADCu;
    {
        const bool branch_taken_0x237adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ADCu;
        // 0x237ae0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237adc) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237AE4u;
label_237ae4:
    // 0x237ae4: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x237AE4u;
    {
        const bool branch_taken_0x237ae4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ae4) {
            ctx->pc = 0x237AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237AE4u;
            // 0x237ae8: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237AFCu;
            goto label_237afc;
        }
    }
    ctx->pc = 0x237AECu;
label_237aec:
    // 0x237aec: 0xc06ba9c  jal         func_1AEA70
    ctx->pc = 0x237AECu;
    SET_GPR_U32(ctx, 31, 0x237AF4u);
    ctx->pc = 0x237AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AECu;
    // 0x237af0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA70u, 0x237AECu, 0x237AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AF4u;
label_237af4:
    // 0x237af4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x237AF4u;
    {
        const bool branch_taken_0x237af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AF4u;
        // 0x237af8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237af4) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237AFCu;
label_237afc:
    // 0x237afc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x237afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237b00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237B00u;
    {
        const bool branch_taken_0x237b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B00u;
        // 0x237b04: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b00) {
            ctx->pc = 0x237B10u;
            goto label_237b10;
        }
    }
    ctx->pc = 0x237B08u;
    // 0x237b08: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x237B08u;
    {
        const bool branch_taken_0x237b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237b08) {
            ctx->pc = 0x237B70u;
            goto label_237b70;
        }
    }
    ctx->pc = 0x237B10u;
label_237b10:
    // 0x237b10: 0x8e23041c  lw          $v1, 0x41C($s1)
    ctx->pc = 0x237b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
    // 0x237b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237b18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x237B18u;
    {
        const bool branch_taken_0x237b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B18u;
        // 0x237b1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b18) {
            ctx->pc = 0x237B50u;
            goto label_237b50;
        }
    }
    ctx->pc = 0x237B20u;
    // 0x237b20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x237B20u;
    {
        const bool branch_taken_0x237b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b20) {
            ctx->pc = 0x237B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B20u;
            // 0x237b24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B38u;
            goto label_237b38;
        }
    }
    ctx->pc = 0x237B28u;
    // 0x237b28: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x237B28u;
    {
        const bool branch_taken_0x237b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B28u;
        // 0x237b2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b28) {
            ctx->pc = 0x237B70u;
            goto label_237b70;
        }
    }
    ctx->pc = 0x237B30u;
    // 0x237b30: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x237B30u;
    {
        const bool branch_taken_0x237b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B30u;
        // 0x237b34: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b30) {
            ctx->pc = 0x237BB0u;
            return;
        }
    }
    ctx->pc = 0x237B38u;
label_237b38:
    // 0x237b38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237B38u;
    {
        const bool branch_taken_0x237b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B38u;
        // 0x237b3c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b38) {
            ctx->pc = 0x237B60u;
            goto label_237b60;
        }
    }
    ctx->pc = 0x237B40u;
    // 0x237b40: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x237B40u;
    {
        const bool branch_taken_0x237b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B40u;
        // 0x237b44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b40) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237B48u;
    // 0x237b48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x237B48u;
    {
        const bool branch_taken_0x237b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b48) {
            ctx->pc = 0x237B70u;
            goto label_237b70;
        }
    }
    ctx->pc = 0x237B50u;
label_237b50:
    // 0x237b50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x237B50u;
    SET_GPR_U32(ctx, 31, 0x237B58u);
    ctx->pc = 0x237B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B50u;
    // 0x237b54: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x237B50u, 0x237B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B58u;
label_237b58:
    // 0x237b58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x237B58u;
    {
        const bool branch_taken_0x237b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B58u;
        // 0x237b5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b58) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237B60u;
label_237b60:
    // 0x237b60: 0xc06bd42  jal         func_1AF508
    ctx->pc = 0x237B60u;
    SET_GPR_U32(ctx, 31, 0x237B68u);
    ctx->pc = 0x237B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B60u;
    // 0x237b64: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF508u, 0x237B60u, 0x237B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B68u;
label_237b68:
    // 0x237b68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x237B68u;
    {
        const bool branch_taken_0x237b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B68u;
        // 0x237b6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b68) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237B70u;
label_237b70:
    // 0x237b70: 0xc06bcb4  jal         func_1AF2D0
    ctx->pc = 0x237B70u;
    SET_GPR_U32(ctx, 31, 0x237B78u);
    ctx->pc = 0x237B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B70u;
    // 0x237b74: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2D0u, 0x237B70u, 0x237B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B78u;
label_237b78:
    // 0x237b78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x237B78u;
    {
        const bool branch_taken_0x237b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B78u;
        // 0x237b7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b78) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237B80u;
label_237b80:
    // 0x237b80: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x237b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x237b84: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x237b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x237b88: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237B88u;
    {
        const bool branch_taken_0x237b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B88u;
        // 0x237b8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b88) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237B90u;
    // 0x237b90: 0xc06bcd0  jal         func_1AF340
    ctx->pc = 0x237B90u;
    SET_GPR_U32(ctx, 31, 0x237B98u);
    ctx->pc = 0x237B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B90u;
    // 0x237b94: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF340u, 0x237B90u, 0x237B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B98u;
label_237b98:
    // 0x237b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237B98u;
    {
        const bool branch_taken_0x237b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B98u;
        // 0x237b9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b98) {
            ctx->pc = 0x237BACu;
            return;
        }
    }
    ctx->pc = 0x237BA0u;
label_237ba0:
    // 0x237ba0: 0xc06bcee  jal         func_1AF3B8
    ctx->pc = 0x237BA0u;
    SET_GPR_U32(ctx, 31, 0x237BA8u);
    ctx->pc = 0x237BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BA0u;
    // 0x237ba4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3B8u, 0x237BA0u, 0x237BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BA8u;
}

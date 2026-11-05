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

// Function: sub_00255188
// Address: 0x255188 - 0x255318
void sub_00255188_0x255188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255188_0x255188");
#endif

    switch (ctx->pc) {
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        default: break;
    }

    ctx->pc = 0x255188u;

label_255188:
    // 0x255188: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x255188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_25518c:
    // 0x25518c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x25518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_255190:
    // 0x255190: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x255190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_255194:
    // 0x255194: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x255194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
label_255198:
    // 0x255198: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x255198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_25519c:
    // 0x25519c: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x25519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
label_2551a0:
    // 0x2551a0: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2551a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_2551a4:
    // 0x2551a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2551a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2551a8:
    // 0x2551a8: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2551a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
label_2551ac:
    // 0x2551ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2551acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2551b0:
    // 0x2551b0: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2551b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
label_2551b4:
    // 0x2551b4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2551b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2551b8:
    // 0x2551b8: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2551b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2551bc:
    // 0x2551bc: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x2551bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2551c0:
    // 0x2551c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2551c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2551c4:
    // 0x2551c4: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x2551c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_2551c8:
    // 0x2551c8: 0xc08d76c  jal         func_235DB0
label_2551cc:
    if (ctx->pc == 0x2551CCu) {
        ctx->pc = 0x2551CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C8u;
        // 0x2551cc: 0xacd10040  sw          $s1, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551D0u;
        goto label_2551d0;
    }
    ctx->pc = 0x2551C8u;
    SET_GPR_U32(ctx, 31, 0x2551D0u);
    ctx->pc = 0x2551CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551C8u;
    // 0x2551cc: 0xacd10040  sw          $s1, 0x40($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235DB0u, 0x2551C8u, 0x2551D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551D0u;
label_2551d0:
    // 0x2551d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2551d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2551d4:
    // 0x2551d4: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_2551d8:
    // 0x2551d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2551d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2551dc:
    // 0x2551dc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_2551e0:
    if (ctx->pc == 0x2551E0u) {
        ctx->pc = 0x2551E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551DCu;
        // 0x2551e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551E4u;
        goto label_2551e4;
    }
    ctx->pc = 0x2551DCu;
    {
        const bool branch_taken_0x2551dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2551E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551DCu;
        // 0x2551e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551dc) {
            ctx->pc = 0x2552B8u;
            goto label_2552b8;
        }
    }
    ctx->pc = 0x2551E4u;
label_2551e4:
    // 0x2551e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2551e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2551e8:
    // 0x2551e8: 0xc06fc04  jal         func_1BF010
label_2551ec:
    if (ctx->pc == 0x2551ECu) {
        ctx->pc = 0x2551ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551E8u;
        // 0x2551ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551F0u;
        goto label_2551f0;
    }
    ctx->pc = 0x2551E8u;
    SET_GPR_U32(ctx, 31, 0x2551F0u);
    ctx->pc = 0x2551ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551E8u;
    // 0x2551ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF010u, 0x2551E8u, 0x2551F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551F0u;
label_2551f0:
    // 0x2551f0: 0x8e300fe8  lw          $s0, 0xFE8($s1)
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
label_2551f4:
    // 0x2551f4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2551f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2551f8:
    // 0x2551f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2551f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2551fc:
    // 0x2551fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2551fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_255200:
    // 0x255200: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_255204:
    // 0x255204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255208:
    // 0x255208: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x255208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_25520c:
    // 0x25520c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x25520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_255210:
    // 0x255210: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x255210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_255214:
    // 0x255214: 0xc06f894  jal         func_1BE250
label_255218:
    if (ctx->pc == 0x255218u) {
        ctx->pc = 0x255218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255214u;
        // 0x255218: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25521Cu;
        goto label_25521c;
    }
    ctx->pc = 0x255214u;
    SET_GPR_U32(ctx, 31, 0x25521Cu);
    ctx->pc = 0x255218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255214u;
    // 0x255218: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x255214u, 0x25521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25521Cu;
label_25521c:
    // 0x25521c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25521cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255220:
    // 0x255220: 0xc0701da  jal         func_1C0768
label_255224:
    if (ctx->pc == 0x255224u) {
        ctx->pc = 0x255224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255220u;
        // 0x255224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255228u;
        goto label_255228;
    }
    ctx->pc = 0x255220u;
    SET_GPR_U32(ctx, 31, 0x255228u);
    ctx->pc = 0x255224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255220u;
    // 0x255224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x255220u, 0x255228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255228u;
label_255228:
    // 0x255228: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25522c:
    if (ctx->pc == 0x25522Cu) {
        ctx->pc = 0x25522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255228u;
        // 0x25522c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255230u;
        goto label_255230;
    }
    ctx->pc = 0x255228u;
    {
        const bool branch_taken_0x255228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255228u;
        // 0x25522c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255228) {
            ctx->pc = 0x255264u;
            goto label_255264;
        }
    }
    ctx->pc = 0x255230u;
label_255230:
    // 0x255230: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x255230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_255234:
    // 0x255234: 0x3842003f  xori        $v0, $v0, 0x3F
    ctx->pc = 0x255234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)63);
label_255238:
    // 0x255238: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25523c:
    if (ctx->pc == 0x25523Cu) {
        ctx->pc = 0x25523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255238u;
        // 0x25523c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255240u;
        goto label_255240;
    }
    ctx->pc = 0x255238u;
    {
        const bool branch_taken_0x255238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255238u;
        // 0x25523c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255238) {
            ctx->pc = 0x255260u;
            goto label_255260;
        }
    }
    ctx->pc = 0x255240u;
label_255240:
    // 0x255240: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x255240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255244:
    // 0x255244: 0x24a553f8  addiu       $a1, $a1, 0x53F8
    ctx->pc = 0x255244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21496));
label_255248:
    // 0x255248: 0x6a2200ff  ldl         $v0, 0xFF($s1)
    ctx->pc = 0x255248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_25524c:
    // 0x25524c: 0x6e2200f8  ldr         $v0, 0xF8($s1)
    ctx->pc = 0x25524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_255250:
    // 0x255250: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x255250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_255254:
    // 0x255254: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x255254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_255258:
    // 0x255258: 0xc0efefa  jal         func_3BFBE8
label_25525c:
    if (ctx->pc == 0x25525Cu) {
        ctx->pc = 0x25525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255258u;
        // 0x25525c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255260u;
        goto label_255260;
    }
    ctx->pc = 0x255258u;
    SET_GPR_U32(ctx, 31, 0x255260u);
    ctx->pc = 0x25525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255258u;
    // 0x25525c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x255258u, 0x255260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255260u;
label_255260:
    // 0x255260: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x255260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_255264:
    // 0x255264: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x255264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_255268:
    // 0x255268: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_25526c:
    if (ctx->pc == 0x25526Cu) {
        ctx->pc = 0x25526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255268u;
        // 0x25526c: 0xae201020  sw          $zero, 0x1020($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255270u;
        goto label_255270;
    }
    ctx->pc = 0x255268u;
    {
        const bool branch_taken_0x255268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255268u;
        // 0x25526c: 0xae201020  sw          $zero, 0x1020($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255268) {
            ctx->pc = 0x255294u;
            goto label_255294;
        }
    }
    ctx->pc = 0x255270u;
label_255270:
    // 0x255270: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x255270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_255274:
    // 0x255274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255278:
    // 0x255278: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x255278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_25527c:
    // 0x25527c: 0x40f809  jalr        $v0
label_255280:
    if (ctx->pc == 0x255280u) {
        ctx->pc = 0x255280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25527Cu;
        // 0x255280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255284u;
        goto label_255284;
    }
    ctx->pc = 0x25527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255284u);
        ctx->pc = 0x255280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25527Cu;
        // 0x255280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25527Cu, 0x255284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255284u;
label_255284:
    // 0x255284: 0xc0953a6  jal         func_254E98
label_255288:
    if (ctx->pc == 0x255288u) {
        ctx->pc = 0x255288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255284u;
        // 0x255288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25528Cu;
        goto label_25528c;
    }
    ctx->pc = 0x255284u;
    SET_GPR_U32(ctx, 31, 0x25528Cu);
    ctx->pc = 0x255288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255284u;
    // 0x255288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E98u, 0x255284u, 0x25528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25528Cu;
label_25528c:
    // 0x25528c: 0x10000007  b           . + 4 + (0x7 << 2)
label_255290:
    if (ctx->pc == 0x255290u) {
        ctx->pc = 0x255290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25528Cu;
        // 0x255290: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255294u;
        goto label_255294;
    }
    ctx->pc = 0x25528Cu;
    {
        const bool branch_taken_0x25528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25528Cu;
        // 0x255290: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25528c) {
            ctx->pc = 0x2552ACu;
            goto label_2552ac;
        }
    }
    ctx->pc = 0x255294u;
label_255294:
    // 0x255294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255298:
    // 0x255298: 0xc094ec2  jal         func_253B08
label_25529c:
    if (ctx->pc == 0x25529Cu) {
        ctx->pc = 0x25529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255298u;
        // 0x25529c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552A0u;
        goto label_2552a0;
    }
    ctx->pc = 0x255298u;
    SET_GPR_U32(ctx, 31, 0x2552A0u);
    ctx->pc = 0x25529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255298u;
    // 0x25529c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B08u, 0x255298u, 0x2552A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552A0u;
label_2552a0:
    // 0x2552a0: 0xc09538c  jal         func_254E30
label_2552a4:
    if (ctx->pc == 0x2552A4u) {
        ctx->pc = 0x2552A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552A0u;
        // 0x2552a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552A8u;
        goto label_2552a8;
    }
    ctx->pc = 0x2552A0u;
    SET_GPR_U32(ctx, 31, 0x2552A8u);
    ctx->pc = 0x2552A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552A0u;
    // 0x2552a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E30u, 0x2552A0u, 0x2552A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552A8u;
label_2552a8:
    // 0x2552a8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2552a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2552ac:
    // 0x2552ac: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x2552acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_2552b0:
    // 0x2552b0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2552b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2552b4:
    // 0x2552b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2552b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2552b8:
    // 0x2552b8: 0xc08bdc6  jal         func_22F718
label_2552bc:
    if (ctx->pc == 0x2552BCu) {
        ctx->pc = 0x2552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B8u;
        // 0x2552bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552C0u;
        goto label_2552c0;
    }
    ctx->pc = 0x2552B8u;
    SET_GPR_U32(ctx, 31, 0x2552C0u);
    ctx->pc = 0x2552BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552B8u;
    // 0x2552bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x2552B8u, 0x2552C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552C0u;
label_2552c0:
    // 0x2552c0: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x2552c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2552c4:
    // 0x2552c4: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x2552c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2552c8:
    // 0x2552c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2552c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2552cc:
    // 0x2552cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2552ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2552d0:
    // 0x2552d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2552d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2552d4:
    // 0x2552d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2552d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2552d8:
    // 0x2552d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2552d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2552dc:
    // 0x2552dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2552dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2552e0:
    // 0x2552e0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2552e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2552e4:
    // 0x2552e4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2552e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2552e8:
    // 0x2552e8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2552e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2552ec:
    // 0x2552ec: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x2552ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2552f0:
    // 0x2552f0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2552f4:
    // 0x2552f4: 0x60f809  jalr        $v1
label_2552f8:
    if (ctx->pc == 0x2552F8u) {
        ctx->pc = 0x2552F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552F4u;
        // 0x2552f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552FCu;
        goto label_2552fc;
    }
    ctx->pc = 0x2552F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2552FCu);
        ctx->pc = 0x2552F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552F4u;
        // 0x2552f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2552F4u, 0x2552FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2552FCu;
label_2552fc:
    // 0x2552fc: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2552fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_255300:
    // 0x255300: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x255300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_255304:
    // 0x255304: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x255304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_255308:
    // 0x255308: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x255308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_25530c:
    // 0x25530c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x25530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_255310:
    // 0x255310: 0x3e00008  jr          $ra
label_255314:
    if (ctx->pc == 0x255314u) {
        ctx->pc = 0x255314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255310u;
        // 0x255314: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255318u;
        goto label_fallthrough_0x255310;
    }
    ctx->pc = 0x255310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255310u;
        // 0x255314: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x255310:
    ctx->pc = 0x255318u;
}

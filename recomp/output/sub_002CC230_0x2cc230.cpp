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

// Function: sub_002CC230
// Address: 0x2cc230 - 0x2cc4f8
void sub_002CC230_0x2cc230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC230_0x2cc230");
#endif

    switch (ctx->pc) {
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc2b4u: goto label_2cc2b4;
        case 0x2cc2c0u: goto label_2cc2c0;
        case 0x2cc2e0u: goto label_2cc2e0;
        case 0x2cc2fcu: goto label_2cc2fc;
        case 0x2cc320u: goto label_2cc320;
        case 0x2cc330u: goto label_2cc330;
        case 0x2cc354u: goto label_2cc354;
        case 0x2cc364u: goto label_2cc364;
        case 0x2cc36cu: goto label_2cc36c;
        case 0x2cc378u: goto label_2cc378;
        case 0x2cc3ecu: goto label_2cc3ec;
        case 0x2cc3f4u: goto label_2cc3f4;
        case 0x2cc404u: goto label_2cc404;
        case 0x2cc40cu: goto label_2cc40c;
        case 0x2cc418u: goto label_2cc418;
        case 0x2cc438u: goto label_2cc438;
        case 0x2cc448u: goto label_2cc448;
        case 0x2cc460u: goto label_2cc460;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc484u: goto label_2cc484;
        case 0x2cc4b4u: goto label_2cc4b4;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4ccu: goto label_2cc4cc;
        case 0x2cc4d4u: goto label_2cc4d4;
        default: break;
    }

    ctx->pc = 0x2cc230u;

    // 0x2cc230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc234: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cc238: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cc23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc240: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cc240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cc244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cc248: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cc248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc24c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cc24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cc250: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cc250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cc254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cc258: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2cc258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc25c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cc25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cc260: 0x1680000c  bnez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC260u;
    {
        const bool branch_taken_0x2cc260 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC260u;
        // 0x2cc264: 0xac53a628  sw          $s3, -0x59D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294944296), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc260) {
            ctx->pc = 0x2CC294u;
            goto label_2cc294;
        }
    }
    ctx->pc = 0x2CC268u;
    // 0x2cc268: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2cc268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x2cc26c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc270: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2cc270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2cc274: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2cc274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2cc278: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2cc278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x2cc27c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2cc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x2cc280: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2cc280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2cc284: 0xc0b31b2  jal         func_2CC6C8
    ctx->pc = 0x2CC284u;
    SET_GPR_U32(ctx, 31, 0x2CC28Cu);
    ctx->pc = 0x2CC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC284u;
    // 0x2cc288: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC6C8u, 0x2CC284u, 0x2CC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC28Cu;
label_2cc28c:
    // 0x2cc28c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2CC28Cu;
    {
        const bool branch_taken_0x2cc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC28Cu;
        // 0x2cc290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc28c) {
            ctx->pc = 0x2CC4D8u;
            goto label_2cc4d8;
        }
    }
    ctx->pc = 0x2CC294u;
label_2cc294:
    // 0x2cc294: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x2cc294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x2cc298: 0x3c120fff  lui         $s2, 0xFFF
    ctx->pc = 0x2cc298u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4095 << 16));
    // 0x2cc29c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2cc29cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2cc2a0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2cc2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2cc2a4: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x2cc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2cc2a8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2cc2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2cc2ac: 0xc0b3080  jal         func_2CC200
    ctx->pc = 0x2CC2ACu;
    SET_GPR_U32(ctx, 31, 0x2CC2B4u);
    ctx->pc = 0x2CC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2ACu;
    // 0x2cc2b0: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC200u, 0x2CC2ACu, 0x2CC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2B4u;
label_2cc2b4:
    // 0x2cc2b4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2cc2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2cc2b8: 0xc0b3080  jal         func_2CC200
    ctx->pc = 0x2CC2B8u;
    SET_GPR_U32(ctx, 31, 0x2CC2C0u);
    ctx->pc = 0x2CC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2B8u;
    // 0x2cc2bc: 0x8e84004c  lw          $a0, 0x4C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC200u, 0x2CC2B8u, 0x2CC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2C0u;
label_2cc2c0:
    // 0x2cc2c0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2cc2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2cc2c4: 0x101982  srl         $v1, $s0, 6
    ctx->pc = 0x2cc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x2cc2c8: 0x112182  srl         $a0, $s1, 6
    ctx->pc = 0x2cc2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x2cc2cc: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x2cc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x2cc2d0: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x2cc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
    // 0x2cc2d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cc2d8: 0xc0b2ff6  jal         func_2CBFD8
    ctx->pc = 0x2CC2D8u;
    SET_GPR_U32(ctx, 31, 0x2CC2E0u);
    ctx->pc = 0x2CC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2D8u;
    // 0x2cc2dc: 0xae640018  sw          $a0, 0x18($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFD8u, 0x2CC2D8u, 0x2CC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2E0u;
label_2cc2e0:
    // 0x2cc2e0: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2cc2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2cc2e4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2cc2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2cc2e8: 0x263109f0  addiu       $s1, $s1, 0x9F0
    ctx->pc = 0x2cc2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2544));
    // 0x2cc2ec: 0x2610a608  addiu       $s0, $s0, -0x59F8
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944264));
    // 0x2cc2f0: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x2cc2f0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x4709F0u));
    // 0x2cc2f4: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CC2F4u;
    SET_GPR_U32(ctx, 31, 0x2CC2FCu);
    ctx->pc = 0x2CC2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2F4u;
    // 0x2cc2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CC2F4u, 0x2CC2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2FCu;
label_2cc2fc:
    // 0x2cc2fc: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2cc2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2cc300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc304: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2cc304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2cc308: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2cc308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cc30c: 0x631fb  dsra        $a2, $a2, 7
    ctx->pc = 0x2cc30cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 7);
    // 0x2cc310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cc310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cc314: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2cc314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2cc318: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC318u;
    SET_GPR_U32(ctx, 31, 0x2CC320u);
    ctx->pc = 0x2CC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC318u;
    // 0x2cc31c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC318u, 0x2CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC320u;
label_2cc320:
    // 0x2cc320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc328: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC328u;
    SET_GPR_U32(ctx, 31, 0x2CC330u);
    ctx->pc = 0x2CC32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC328u;
    // 0x2cc32c: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC328u, 0x2CC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC330u;
label_2cc330:
    // 0x2cc330: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2cc330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2cc334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc338: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2cc338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2cc33c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x2cc33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2cc340: 0x6307b  dsra        $a2, $a2, 1
    ctx->pc = 0x2cc340u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 1);
    // 0x2cc344: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2cc344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x2cc348: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2cc348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2cc34c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC34Cu;
    SET_GPR_U32(ctx, 31, 0x2CC354u);
    ctx->pc = 0x2CC350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC34Cu;
    // 0x2cc350: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC34Cu, 0x2CC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC354u;
label_2cc354:
    // 0x2cc354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc358: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x2cc358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2cc35c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC35Cu;
    SET_GPR_U32(ctx, 31, 0x2CC364u);
    ctx->pc = 0x2CC360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC35Cu;
    // 0x2cc360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC35Cu, 0x2CC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC364u;
label_2cc364:
    // 0x2cc364: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CC364u;
    SET_GPR_U32(ctx, 31, 0x2CC36Cu);
    ctx->pc = 0x2CC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC364u;
    // 0x2cc368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CC364u, 0x2CC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC36Cu;
label_2cc36c:
    // 0x2cc36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc370: 0xc0e3d12  jal         func_38F448
    ctx->pc = 0x2CC370u;
    SET_GPR_U32(ctx, 31, 0x2CC378u);
    ctx->pc = 0x2CC374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC370u;
    // 0x2cc374: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F448u, 0x2CC370u, 0x2CC378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC378u;
label_2cc378:
    // 0x2cc378: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2cc378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2cc37c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cc37cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc380: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2cc380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2cc384: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x2cc384u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc388: 0xa533c  dsll32      $t2, $t2, 12
    ctx->pc = 0x2cc388u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 12));
    // 0x2cc38c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x2cc38cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x2cc390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cc390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc394: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2cc394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cc398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cc398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3a0: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x2cc3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2cc3a4: 0x125202a  slt         $a0, $t1, $a1
    ctx->pc = 0x2cc3a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2cc3a8: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x2cc3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2cc3ac: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x2cc3acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2cc3b0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2cc3b4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x2cc3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x2cc3b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2cc3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2cc3bc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2cc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2cc3c0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2cc3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2cc3c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2cc3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cc3c8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2cc3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2cc3cc: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x2cc3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x2cc3d0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x2cc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2cc3d4: 0x122482a  slt         $t1, $t1, $v0
    ctx->pc = 0x2cc3d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cc3d8: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x2cc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x2cc3dc: 0x49280b  movn        $a1, $v0, $t1
    ctx->pc = 0x2cc3dcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x2cc3e0: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2cc3e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2cc3e4: 0xc0b302a  jal         func_2CC0A8
    ctx->pc = 0x2CC3E4u;
    SET_GPR_U32(ctx, 31, 0x2CC3ECu);
    ctx->pc = 0x2CC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3E4u;
    // 0x2cc3e8: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC0A8u, 0x2CC3E4u, 0x2CC3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3ECu;
label_2cc3ec:
    // 0x2cc3ec: 0xc0b2ffa  jal         func_2CBFE8
    ctx->pc = 0x2CC3ECu;
    SET_GPR_U32(ctx, 31, 0x2CC3F4u);
    ctx->pc = 0x2CBFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFE8u, 0x2CC3ECu, 0x2CC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3F4u;
label_2cc3f4:
    // 0x2cc3f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cc3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3fc: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x2CC3FCu;
    SET_GPR_U32(ctx, 31, 0x2CC404u);
    ctx->pc = 0x2CC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3FCu;
    // 0x2cc400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x2CC3FCu, 0x2CC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC404u;
label_2cc404:
    // 0x2cc404: 0xc0b2ff6  jal         func_2CBFD8
    ctx->pc = 0x2CC404u;
    SET_GPR_U32(ctx, 31, 0x2CC40Cu);
    ctx->pc = 0x2CBFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFD8u, 0x2CC404u, 0x2CC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC40Cu;
label_2cc40c:
    // 0x2cc40c: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x2cc40cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc410: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CC410u;
    SET_GPR_U32(ctx, 31, 0x2CC418u);
    ctx->pc = 0x2CC414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC410u;
    // 0x2cc414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CC410u, 0x2CC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC418u;
label_2cc418:
    // 0x2cc418: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x2cc418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2cc41c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2cc41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc420: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x2cc420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x2cc424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc428: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2cc428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cc42c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2cc42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2cc430: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC430u;
    SET_GPR_U32(ctx, 31, 0x2CC438u);
    ctx->pc = 0x2CC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC430u;
    // 0x2cc434: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC430u, 0x2CC438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC438u;
label_2cc438:
    // 0x2cc438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc43c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x2cc43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2cc440: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC440u;
    SET_GPR_U32(ctx, 31, 0x2CC448u);
    ctx->pc = 0x2CC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC440u;
    // 0x2cc444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC440u, 0x2CC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC448u;
label_2cc448:
    // 0x2cc448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc44c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2cc44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc450: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x2cc450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x2cc454: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x2cc454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x2cc458: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC458u;
    SET_GPR_U32(ctx, 31, 0x2CC460u);
    ctx->pc = 0x2CC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC458u;
    // 0x2cc45c: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC458u, 0x2CC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC460u;
label_2cc460:
    // 0x2cc460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc464: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x2cc464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2cc468: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC468u;
    SET_GPR_U32(ctx, 31, 0x2CC470u);
    ctx->pc = 0x2CC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC468u;
    // 0x2cc46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC468u, 0x2CC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC470u;
label_2cc470:
    // 0x2cc470: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CC470u;
    SET_GPR_U32(ctx, 31, 0x2CC478u);
    ctx->pc = 0x2CC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC470u;
    // 0x2cc474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CC470u, 0x2CC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC478u;
label_2cc478:
    // 0x2cc478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc47c: 0xc0e3d12  jal         func_38F448
    ctx->pc = 0x2CC47Cu;
    SET_GPR_U32(ctx, 31, 0x2CC484u);
    ctx->pc = 0x2CC480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC47Cu;
    // 0x2cc480: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F448u, 0x2CC47Cu, 0x2CC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC484u;
label_2cc484:
    // 0x2cc484: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2cc484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc488: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x2cc488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2cc48c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cc48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cc490: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x2cc490u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x2cc494: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2cc494u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2cc498: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cc498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cc49c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cc4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4a4: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x2cc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x2cc4a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cc4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4ac: 0xc0b302a  jal         func_2CC0A8
    ctx->pc = 0x2CC4ACu;
    SET_GPR_U32(ctx, 31, 0x2CC4B4u);
    ctx->pc = 0x2CC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4ACu;
    // 0x2cc4b0: 0x922024  and         $a0, $a0, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC0A8u, 0x2CC4ACu, 0x2CC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4B4u;
label_2cc4b4:
    // 0x2cc4b4: 0xc0b2ffa  jal         func_2CBFE8
    ctx->pc = 0x2CC4B4u;
    SET_GPR_U32(ctx, 31, 0x2CC4BCu);
    ctx->pc = 0x2CBFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFE8u, 0x2CC4B4u, 0x2CC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4BCu;
label_2cc4bc:
    // 0x2cc4bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cc4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4c4: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x2CC4C4u;
    SET_GPR_U32(ctx, 31, 0x2CC4CCu);
    ctx->pc = 0x2CC4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4C4u;
    // 0x2cc4c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x2CC4C4u, 0x2CC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4CCu;
label_2cc4cc:
    // 0x2cc4cc: 0xc0b31b2  jal         func_2CC6C8
    ctx->pc = 0x2CC4CCu;
    SET_GPR_U32(ctx, 31, 0x2CC4D4u);
    ctx->pc = 0x2CC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4CCu;
    // 0x2cc4d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC6C8u, 0x2CC4CCu, 0x2CC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4D4u;
label_2cc4d4:
    // 0x2cc4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc4d8:
    // 0x2cc4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cc4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc4dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cc4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc4e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cc4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cc4e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cc4e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc4e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cc4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cc4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4ECu;
        // 0x2cc4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC4F4u;
    // 0x2cc4f4: 0x0  nop
    ctx->pc = 0x2cc4f4u;
    // NOP
    ctx->pc = 0x2cc4f8u;
}

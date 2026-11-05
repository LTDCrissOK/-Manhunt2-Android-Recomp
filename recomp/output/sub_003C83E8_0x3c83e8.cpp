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

// Function: sub_003C83E8
// Address: 0x3c83e8 - 0x3c8650
void sub_003C83E8_0x3c83e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C83E8_0x3c83e8");
#endif

    switch (ctx->pc) {
        case 0x3c8494u: goto label_3c8494;
        case 0x3c8540u: goto label_3c8540;
        case 0x3c85e4u: goto label_3c85e4;
        default: break;
    }

    ctx->pc = 0x3c83e8u;

    // 0x3c83e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c83e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3c83ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c83f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c83f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3c83f4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x3c83f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x3c83f8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c83f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3c83fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3c83fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3c8400: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c8400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3c8404: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3c8404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3c8408: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3c8408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3c840c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x3c840cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8410: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3c8410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3c8414: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x3c8414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x3c8418: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3c8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3c841c: 0x3c160043  lui         $s6, 0x43
    ctx->pc = 0x3c841cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
    // 0x3c8420: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3c8420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3c8424: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3c8424u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8428: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c8428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3c842c: 0x245ed180  addiu       $fp, $v0, -0x2E80
    ctx->pc = 0x3c842cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
    // 0x3c8430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c8434: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c8434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8438: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3c843c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3c843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3c8440: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x3c8440u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3c8444: 0xdcc3d590  ld          $v1, -0x2A70($a2)
    ctx->pc = 0x3c8444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4294956432)));
    // 0x3c8448: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x3c8448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3c844c: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x3c844cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3c8450: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x3c8450u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3c8454: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x3c8454u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x3c8458: 0x8ec2d598  lw          $v0, -0x2A68($s6)
    ctx->pc = 0x3c8458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956440)));
    // 0x3c845c: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x3c845cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3c8460: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3c8460u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3c8464: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8464u;
    {
        const bool branch_taken_0x3c8464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3C8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8464u;
        // 0x3c8468: 0x293a821  addu        $s5, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8464) {
            ctx->pc = 0x3C8488u;
            goto label_3c8488;
        }
    }
    ctx->pc = 0x3C846Cu;
    // 0x3c846c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3c846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3c8470: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x3c8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x3c8474: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c8474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c8478: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x3c8478u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x3c847c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c8480: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3c8480u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8484: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3c8484u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_3c8488:
    // 0x3c8488: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c8488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c848c: 0xc0f2508  jal         func_3C9420
    ctx->pc = 0x3C848Cu;
    SET_GPR_U32(ctx, 31, 0x3C8494u);
    ctx->pc = 0x3C8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C848Cu;
    // 0x3c8490: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9420u, 0x3C848Cu, 0x3C8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8494u;
label_3c8494:
    // 0x3c8494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c8494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8498: 0x12300060  beq         $s1, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3C8498u;
    {
        const bool branch_taken_0x3c8498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3C849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8498u;
        // 0x3c849c: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8498) {
            ctx->pc = 0x3C861Cu;
            goto label_3c861c;
        }
    }
    ctx->pc = 0x3C84A0u;
    // 0x3c84a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C84A0u;
    {
        const bool branch_taken_0x3c84a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84A0u;
        // 0x3c84a4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84a0) {
            ctx->pc = 0x3C84B4u;
            goto label_3c84b4;
        }
    }
    ctx->pc = 0x3C84A8u;
    // 0x3c84a8: 0x569e005d  bnel        $s4, $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x3C84A8u;
    {
        const bool branch_taken_0x3c84a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        if (branch_taken_0x3c84a8) {
            ctx->pc = 0x3C84ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C84A8u;
            // 0x3c84ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8620u;
            goto label_3c8620;
        }
    }
    ctx->pc = 0x3C84B0u;
    // 0x3c84b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3c84b4:
    // 0x3c84b4: 0x8c43d5b0  lw          $v1, -0x2A50($v0)
    ctx->pc = 0x3c84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956464)));
    // 0x3c84b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3c84bc: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C84BCu;
    {
        const bool branch_taken_0x3c84bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x3C84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84BCu;
        // 0x3c84c0: 0xac43d5b0  sw          $v1, -0x2A50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84bc) {
            ctx->pc = 0x3C84D8u;
            goto label_3c84d8;
        }
    }
    ctx->pc = 0x3C84C4u;
    // 0x3c84c4: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x3c84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3c84c8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3c84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3c84cc: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x3c84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3c84d0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3C84D0u;
    {
        const bool branch_taken_0x3c84d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84D0u;
        // 0x3c84d4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84d0) {
            ctx->pc = 0x3C85E4u;
            goto label_3c85e4;
        }
    }
    ctx->pc = 0x3C84D8u;
label_3c84d8:
    // 0x3c84d8: 0x8ec2d598  lw          $v0, -0x2A68($s6)
    ctx->pc = 0x3c84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956440)));
    // 0x3c84dc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C84DCu;
    {
        const bool branch_taken_0x3c84dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3C84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84DCu;
        // 0x3c84e0: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84dc) {
            ctx->pc = 0x3C84ECu;
            goto label_3c84ec;
        }
    }
    ctx->pc = 0x3C84E4u;
    // 0x3c84e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C84E4u;
    {
        const bool branch_taken_0x3c84e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84E4u;
        // 0x3c84e8: 0xaed1d598  sw          $s1, -0x2A68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294956440), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84e4) {
            ctx->pc = 0x3C84F8u;
            goto label_3c84f8;
        }
    }
    ctx->pc = 0x3C84ECu;
label_3c84ec:
    // 0x3c84ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c84f0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c84f4: 0xac62d5b0  sw          $v0, -0x2A50($v1)
    ctx->pc = 0x3c84f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42D5B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42D5B0u, _value); } while (0);
label_3c84f8:
    // 0x3c84f8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3c84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3c84fc: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x3c84fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3c8500: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8500u;
    {
        const bool branch_taken_0x3c8500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8500u;
        // 0x3c8504: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8500) {
            ctx->pc = 0x3C8514u;
            goto label_3c8514;
        }
    }
    ctx->pc = 0x3C8508u;
    // 0x3c8508: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x3c8508u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c850c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C850Cu;
    {
        const bool branch_taken_0x3c850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C850Cu;
        // 0x3c8510: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c850c) {
            ctx->pc = 0x3C8518u;
            goto label_3c8518;
        }
    }
    ctx->pc = 0x3C8514u;
label_3c8514:
    // 0x3c8514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c8514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8518:
    // 0x3c8518: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x3c8518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3c851c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x3c851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3c8520: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c8520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c8524: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c8524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8528: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x3c8528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x3c852c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c8530: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c8530u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c8534: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3c8534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3c8538: 0xc0f2508  jal         func_3C9420
    ctx->pc = 0x3C8538u;
    SET_GPR_U32(ctx, 31, 0x3C8540u);
    ctx->pc = 0x3C853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8538u;
    // 0x3c853c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9420u, 0x3C8538u, 0x3C8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8540u;
label_3c8540:
    // 0x3c8540: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c8540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8544: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c8544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8548: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c8548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c854c: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C854Cu;
    {
        const bool branch_taken_0x3c854c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c854c) {
            ctx->pc = 0x3C8550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C854Cu;
            // 0x3c8550: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8620u;
            goto label_3c8620;
        }
    }
    ctx->pc = 0x3C8554u;
    // 0x3c8554: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3c8554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3c8558: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3c8558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3c855c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x3c855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c8560: 0x8c82d5b0  lw          $v0, -0x2A50($a0)
    ctx->pc = 0x3c8560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D5B0u));
    // 0x3c8564: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c8564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c8568: 0x2464d180  addiu       $a0, $v1, -0x2E80
    ctx->pc = 0x3c8568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955392));
    // 0x3c856c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c8570: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x3c8570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3c8574: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3c8574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3c8578: 0xaca2d5b0  sw          $v0, -0x2A50($a1)
    ctx->pc = 0x3c8578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42D5B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42D5B0u, _value); } while (0);
    // 0x3c857c: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x3c857cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x42D188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42D188u, _value); } while (0);
    // 0x3c8580: 0x12840018  beq         $s4, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C8580u;
    {
        const bool branch_taken_0x3c8580 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8580u;
        // 0x3c8584: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8580) {
            ctx->pc = 0x3C85E4u;
            goto label_3c85e4;
        }
    }
    ctx->pc = 0x3C8588u;
    // 0x3c8588: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x3c8588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c858c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C858Cu;
    {
        const bool branch_taken_0x3c858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C858Cu;
        // 0x3c8590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c858c) {
            ctx->pc = 0x3C85A0u;
            goto label_3c85a0;
        }
    }
    ctx->pc = 0x3C8594u;
    // 0x3c8594: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3c8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c8598: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3C8598u;
    {
        const bool branch_taken_0x3c8598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8598u;
        // 0x3c859c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8598) {
            ctx->pc = 0x3C861Cu;
            goto label_3c861c;
        }
    }
    ctx->pc = 0x3C85A0u;
label_3c85a0:
    // 0x3c85a0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3c85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3c85a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c85a8: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x3c85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x3c85ac: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3c85acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3c85b0: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x3c85b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3c85b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c85b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3c85b8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x3c85b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x3c85bc: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x3c85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x3c85c0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3c85c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3c85c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c85c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3c85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3c85cc: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x3c85ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c85d0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C85D0u;
    {
        const bool branch_taken_0x3c85d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85D0u;
        // 0x3c85d4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85d0) {
            ctx->pc = 0x3C85E4u;
            goto label_3c85e4;
        }
    }
    ctx->pc = 0x3C85D8u;
    // 0x3c85d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c85d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c85dc: 0xc0f2360  jal         func_3C8D80
    ctx->pc = 0x3C85DCu;
    SET_GPR_U32(ctx, 31, 0x3C85E4u);
    ctx->pc = 0x3C85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C85DCu;
    // 0x3c85e0: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8D80u, 0x3C85DCu, 0x3C85E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C85E4u;
label_3c85e4:
    // 0x3c85e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c85e8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3c85e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3c85ec: 0x8c43d5b0  lw          $v1, -0x2A50($v0)
    ctx->pc = 0x3c85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D5B0u));
    // 0x3c85f0: 0xdc82d5a0  ld          $v0, -0x2A60($a0)
    ctx->pc = 0x3c85f0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x42D5A0u));
    // 0x3c85f4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c85f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c85f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C85F8u;
    {
        const bool branch_taken_0x3c85f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c85f8) {
            ctx->pc = 0x3C85FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C85F8u;
            // 0x3c85fc: 0xfc83d5a0  sd          $v1, -0x2A60($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 4294956448), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8600u;
            goto label_3c8600;
        }
    }
    ctx->pc = 0x3C8600u;
label_3c8600:
    // 0x3c8600: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3c8600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3c8604: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3c8604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3c8608: 0x8ca3d5b0  lw          $v1, -0x2A50($a1)
    ctx->pc = 0x3c8608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D5B0u));
    // 0x3c860c: 0xdc82d5a8  ld          $v0, -0x2A58($a0)
    ctx->pc = 0x3c860cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x42D5A8u));
    // 0x3c8610: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c8610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c8614: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C8614u;
    {
        const bool branch_taken_0x3c8614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8614) {
            ctx->pc = 0x3C8618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8614u;
            // 0x3c8618: 0xfc83d5a8  sd          $v1, -0x2A58($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 4294956456), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C861Cu;
            goto label_3c861c;
        }
    }
    ctx->pc = 0x3C861Cu;
label_3c861c:
    // 0x3c861c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c861cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c8620:
    // 0x3c8620: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c8620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c8624: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c8624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c8628: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c8628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c862c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c862cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c8630: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3c8630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c8634: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3c8634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c8638: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3c8638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c863c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3c863cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8644: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8644u;
        // 0x3c8648: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C864Cu;
    // 0x3c864c: 0x0  nop
    ctx->pc = 0x3c864cu;
    // NOP
    ctx->pc = 0x3c8650u;
}

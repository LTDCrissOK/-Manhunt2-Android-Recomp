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

// Function: sub_003C8320
// Address: 0x3c8320 - 0x3c83e8
void sub_003C8320_0x3c8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8320_0x3c8320");
#endif

    switch (ctx->pc) {
        case 0x3c8344u: goto label_3c8344;
        case 0x3c8354u: goto label_3c8354;
        case 0x3c83c8u: goto label_3c83c8;
        default: break;
    }

    ctx->pc = 0x3c8320u;

    // 0x3c8320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c8324: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c8324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c8328: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c8328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c832c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c832cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c8330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8334: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c8334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c8338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c833c: 0xc0f2002  jal         func_3C8008
    ctx->pc = 0x3C833Cu;
    SET_GPR_U32(ctx, 31, 0x3C8344u);
    ctx->pc = 0x3C8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C833Cu;
    // 0x3c8340: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8008u, 0x3C833Cu, 0x3C8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8344u;
label_3c8344:
    // 0x3c8344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8348: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3c8348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3c834c: 0xc0f2002  jal         func_3C8008
    ctx->pc = 0x3C834Cu;
    SET_GPR_U32(ctx, 31, 0x3C8354u);
    ctx->pc = 0x3C8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C834Cu;
    // 0x3c8350: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8008u, 0x3C834Cu, 0x3C8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8354u;
label_3c8354:
    // 0x3c8354: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c8354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c8358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c8358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c835c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3c835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c8360: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8364: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3c8364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c8368: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3c8368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c836c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c836cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c8370: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3c8370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c8374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c8378: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C8378u;
    {
        const bool branch_taken_0x3c8378 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8378u;
        // 0x3c837c: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8378) {
            ctx->pc = 0x3C83A0u;
            goto label_3c83a0;
        }
    }
    ctx->pc = 0x3C8380u;
    // 0x3c8380: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x3c8380u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3c8384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c8384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c8388: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c8388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c838c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c838cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3c8390: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c8390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c8394: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x3c8394u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3c8398: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8398u;
    {
        const bool branch_taken_0x3c8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8398u;
        // 0x3c839c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8398) {
            ctx->pc = 0x3C83BCu;
            goto label_3c83bc;
        }
    }
    ctx->pc = 0x3C83A0u;
label_3c83a0:
    // 0x3c83a0: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x3c83a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3c83a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3c83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c83a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c83ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c83acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3c83b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c83b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c83b4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3c83b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3c83b8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c83b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c83bc:
    // 0x3c83bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c83bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c83c0: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x3C83C0u;
    SET_GPR_U32(ctx, 31, 0x3C83C8u);
    ctx->pc = 0x3C83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83C0u;
    // 0x3c83c4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x3C83C0u, 0x3C83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C83C8u;
label_3c83c8:
    // 0x3c83c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c83c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c83cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c83ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c83d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c83d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c83d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c83d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c83d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C83D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83D8u;
        // 0x3c83dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C83D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C83E0u;
    // 0x3c83e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3c83e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c83e4: 0x0  nop
    ctx->pc = 0x3c83e4u;
    // NOP
    ctx->pc = 0x3c83e8u;
}

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

// Function: sub_003BEE54
// Address: 0x3bee54 - 0x3befa0
void sub_003BEE54_0x3bee54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEE54_0x3bee54");
#endif

    switch (ctx->pc) {
        case 0x3beed4u: goto label_3beed4;
        case 0x3bef34u: goto label_3bef34;
        case 0x3bef6cu: goto label_3bef6c;
        default: break;
    }

    ctx->pc = 0x3bee54u;

    // 0x3bee54: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x3bee54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3bee58: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3bee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3bee5c: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x3BEE5Cu;
    {
        const bool branch_taken_0x3bee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bee5c) {
            ctx->pc = 0x3BEE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEE5Cu;
            // 0x3bee60: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEF8Cu;
            goto label_3bef8c;
        }
    }
    ctx->pc = 0x3BEE64u;
    // 0x3bee64: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x3bee64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3bee68: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3bee68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bee6c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bee6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bee70: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bee70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bee74: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bee74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bee78: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bee78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bee7c: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3bee7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3bee80: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3bee80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3bee84: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3bee84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bee88: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bee88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bee8c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bee8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3bee90: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bee90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bee94: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bee94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3bee98: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bee98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bee9c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bee9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3beea0: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BEEA0u;
    {
        const bool branch_taken_0x3beea0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEEA0u;
        // 0x3beea4: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beea0) {
            ctx->pc = 0x3BEF20u;
            goto label_3bef20;
        }
    }
    ctx->pc = 0x3BEEA8u;
    // 0x3beea8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3beea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3beeac: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x3beeacu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3beeb0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3beeb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3beeb4: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x3beeb4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x3beeb8: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x3beeb8u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3beebc: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x3beebcu;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x3beec0: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x3beec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3beec4: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x3BEEC4u;
    {
        const bool branch_taken_0x3beec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3beec4) {
            ctx->pc = 0x3BEEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEEC4u;
            // 0x3beec8: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEF8Cu;
            goto label_3bef8c;
        }
    }
    ctx->pc = 0x3BEECCu;
    // 0x3beecc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3beeccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3beed0: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3beed0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3beed4:
    // 0x3beed4: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x3beed4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3beed8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3beed8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3beedc: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3beedcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3beee0: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3beee0u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3beee4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3beee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3beee8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BEEE8u;
    {
        const bool branch_taken_0x3beee8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEEE8u;
        // 0x3beeec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beee8) {
            ctx->pc = 0x3BEEF8u;
            goto label_3beef8;
        }
    }
    ctx->pc = 0x3BEEF0u;
    // 0x3beef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEEF0u;
        // 0x3beef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEEF8u;
label_3beef8:
    // 0x3beef8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3beef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3beefc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3beefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bef00: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bef00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bef04: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x3bef04u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bef08: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x3bef08u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x3bef0c: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x3bef0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3bef10: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3BEF10u;
    {
        const bool branch_taken_0x3bef10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bef10) {
            ctx->pc = 0x3BEF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEF10u;
            // 0x3bef14: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3beed4;
        }
    }
    ctx->pc = 0x3BEF18u;
    // 0x3bef18: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3BEF18u;
    {
        const bool branch_taken_0x3bef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF18u;
        // 0x3bef1c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef18) {
            ctx->pc = 0x3BEF8Cu;
            goto label_3bef8c;
        }
    }
    ctx->pc = 0x3BEF20u;
label_3bef20:
    // 0x3bef20: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3bef20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bef24: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BEF24u;
    {
        const bool branch_taken_0x3bef24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bef24) {
            ctx->pc = 0x3BEF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEF24u;
            // 0x3bef28: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEF8Cu;
            goto label_3bef8c;
        }
    }
    ctx->pc = 0x3BEF2Cu;
    // 0x3bef2c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3bef2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bef30: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x3bef30u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3bef34:
    // 0x3bef34: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x3bef34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x3bef38: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3bef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3bef3c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3bef3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3bef40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BEF40u;
    {
        const bool branch_taken_0x3bef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF40u;
        // 0x3bef44: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef40) {
            ctx->pc = 0x3BEF50u;
            goto label_3bef50;
        }
    }
    ctx->pc = 0x3BEF48u;
    // 0x3bef48: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF48u;
        // 0x3bef4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEF50u;
label_3bef50:
    // 0x3bef50: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3bef50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3bef54: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3bef54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bef58: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3bef58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bef5c: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BEF5Cu;
    {
        const bool branch_taken_0x3bef5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bef5c) {
            ctx->pc = 0x3BEF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEF5Cu;
            // 0x3bef60: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEF34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bef34;
        }
    }
    ctx->pc = 0x3BEF64u;
    // 0x3bef64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BEF64u;
    {
        const bool branch_taken_0x3bef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF64u;
        // 0x3bef68: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef64) {
            ctx->pc = 0x3BEF8Cu;
            goto label_3bef8c;
        }
    }
    ctx->pc = 0x3BEF6Cu;
label_3bef6c:
    // 0x3bef6c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3bef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3bef70: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3bef70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bef74: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3bef74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3bef78: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BEF78u;
    {
        const bool branch_taken_0x3bef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bef78) {
            ctx->pc = 0x3BEF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEF78u;
            // 0x3bef7c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEF94u;
            goto label_3bef94;
        }
    }
    ctx->pc = 0x3BEF80u;
    // 0x3bef80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3bef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3bef84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bef88: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3bef88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3bef8c:
    // 0x3bef8c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3BEF8Cu;
    {
        const bool branch_taken_0x3bef8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF8Cu;
        // 0x3bef90: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef8c) {
            ctx->pc = 0x3BEF6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bef6c;
        }
    }
    ctx->pc = 0x3BEF94u;
label_3bef94:
    // 0x3bef94: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bef94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bef98: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF98u;
        // 0x3bef9c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEFA0u;
}

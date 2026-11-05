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

// Function: sub_003BEB84
// Address: 0x3beb84 - 0x3becb4
void sub_003BEB84_0x3beb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEB84_0x3beb84");
#endif

    switch (ctx->pc) {
        case 0x3bec10u: goto label_3bec10;
        case 0x3bec60u: goto label_3bec60;
        case 0x3bec80u: goto label_3bec80;
        case 0x3beca0u: goto label_3beca0;
        default: break;
    }

    ctx->pc = 0x3beb84u;

    // 0x3beb84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3beb84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3beb88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3beb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3beb8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3beb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beb90: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3beb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3beb94: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BEB94u;
    {
        const bool branch_taken_0x3beb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB94u;
        // 0x3beb98: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beb94) {
            ctx->pc = 0x3BEC80u;
            goto label_3bec80;
        }
    }
    ctx->pc = 0x3BEB9Cu;
    // 0x3beb9c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3beb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3beba0: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3beba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3beba4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3beba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3beba8: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3beba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3bebac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3bebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3bebb0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3bebb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3bebb4: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x3bebb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x3bebb8: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x3bebb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x3bebbc: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3bebbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bebc0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bebc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bebc4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bebc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bebc8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bebc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bebcc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bebccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bebd0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bebd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bebd4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bebd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bebd8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3BEBD8u;
    {
        const bool branch_taken_0x3bebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEBD8u;
        // 0x3bebdc: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bebd8) {
            ctx->pc = 0x3BEC3Cu;
            goto label_3bec3c;
        }
    }
    ctx->pc = 0x3BEBE0u;
    // 0x3bebe0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3bebe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bebe4: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x3bebe4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x3bebe8: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x3bebe8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3bebec: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x3bebecu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3bebf0: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x3bebf0u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bebf4: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x3bebf4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3bebf8: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x3bebf8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x3bebfc: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x3bebfcu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x3bec00: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3bec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bec04: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3BEC04u;
    {
        const bool branch_taken_0x3bec04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC04u;
        // 0x3bec08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bec04) {
            ctx->pc = 0x3BEC80u;
            goto label_3bec80;
        }
    }
    ctx->pc = 0x3BEC0Cu;
    // 0x3bec0c: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x3bec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3bec10:
    // 0x3bec10: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3bec10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bec14: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3bec14u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bec18: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x3bec18u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3bec1c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bec1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bec20: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3bec20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3bec24: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x3bec24u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3bec28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bec28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bec2c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BEC2Cu;
    {
        const bool branch_taken_0x3bec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bec2c) {
            ctx->pc = 0x3BEC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEC2Cu;
            // 0x3bec30: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bec10;
        }
    }
    ctx->pc = 0x3BEC34u;
    // 0x3bec34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3BEC34u;
    {
        const bool branch_taken_0x3bec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC34u;
        // 0x3bec38: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bec34) {
            ctx->pc = 0x3BEC80u;
            goto label_3bec80;
        }
    }
    ctx->pc = 0x3BEC3Cu;
label_3bec3c:
    // 0x3bec3c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3bec3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec40: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3bec40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec44: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x3bec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x3bec48: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x3bec48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x3bec4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bec4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bec50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3bec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3bec54: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BEC54u;
    {
        const bool branch_taken_0x3bec54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC54u;
        // 0x3bec58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bec54) {
            ctx->pc = 0x3BEC80u;
            goto label_3bec80;
        }
    }
    ctx->pc = 0x3BEC5Cu;
    // 0x3bec5c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x3bec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3bec60:
    // 0x3bec60: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3bec60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bec64: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3bec64u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bec68: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x3bec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x3bec6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bec70: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3bec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3bec74: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BEC74u;
    {
        const bool branch_taken_0x3bec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bec74) {
            ctx->pc = 0x3BEC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEC74u;
            // 0x3bec78: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bec60;
        }
    }
    ctx->pc = 0x3BEC7Cu;
    // 0x3bec7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3bec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bec80:
    // 0x3bec80: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3bec80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bec84: 0x0  nop
    ctx->pc = 0x3bec84u;
    // NOP
    // 0x3bec88: 0x0  nop
    ctx->pc = 0x3bec88u;
    // NOP
    // 0x3bec8c: 0x0  nop
    ctx->pc = 0x3bec8cu;
    // NOP
    // 0x3bec90: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BEC90u;
    {
        const bool branch_taken_0x3bec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bec90) {
            ctx->pc = 0x3BEC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEC90u;
            // 0x3bec94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bec80;
        }
    }
    ctx->pc = 0x3BEC98u;
    // 0x3bec98: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3BEC98u;
    SET_GPR_U32(ctx, 31, 0x3BECA0u);
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3BEC98u, 0x3BECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BECA0u;
label_3beca0:
    // 0x3beca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3beca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beca4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3beca4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3beca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3beca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3becac: 0x3e00008  jr          $ra
    ctx->pc = 0x3BECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BECACu;
        // 0x3becb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BECB4u;
}

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

// Function: sub_003D2E78
// Address: 0x3d2e78 - 0x3d3448
void sub_003D2E78_0x3d2e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2E78_0x3d2e78");
#endif

    ctx->pc = 0x3d2e78u;

    // 0x3d2e78: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x3d2e78u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3d2e7c: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x3d2e7cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d2e80: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x3d2e80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d2e84: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x3d2e84u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3d2e88: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x3d2e88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d2e8c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3d2e8cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3d2e90: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3D2E90u;
    {
        const bool branch_taken_0x3d2e90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E90u;
        // 0x3d2e94: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e90) {
            ctx->pc = 0x3D325Cu;
            goto label_3d325c;
        }
    }
    ctx->pc = 0x3D2E98u;
    // 0x3d2e98: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x3d2e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2e9c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3D2E9Cu;
    {
        const bool branch_taken_0x3d2e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E9Cu;
        // 0x3d2ea0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e9c) {
            ctx->pc = 0x3D2FECu;
            goto label_3d2fec;
        }
    }
    ctx->pc = 0x3D2EA4u;
    // 0x3d2ea4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d2ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2ea8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2EA8u;
    {
        const bool branch_taken_0x3d2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EA8u;
        // 0x3d2eac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ea8) {
            ctx->pc = 0x3D2EC0u;
            goto label_3d2ec0;
        }
    }
    ctx->pc = 0x3D2EB0u;
    // 0x3d2eb0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3d2eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d2eb4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d2eb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2EB8u;
    {
        const bool branch_taken_0x3d2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EB8u;
        // 0x3d2ebc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2eb8) {
            ctx->pc = 0x3D2ED8u;
            goto label_3d2ed8;
        }
    }
    ctx->pc = 0x3D2EC0u;
label_3d2ec0:
    // 0x3d2ec0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d2ec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d2ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d2ec8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d2ecc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d2eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2ed0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d2ed0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d2ed4: 0x0  nop
    ctx->pc = 0x3d2ed4u;
    // NOP
label_3d2ed8:
    // 0x3d2ed8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d2edc: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x3d2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d2ee0: 0x24422218  addiu       $v0, $v0, 0x2218
    ctx->pc = 0x3d2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8728));
    // 0x3d2ee4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3d2ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d2ee8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d2ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d2eec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d2eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d2ef0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d2ef4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3d2ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3d2ef8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2EF8u;
    {
        const bool branch_taken_0x3d2ef8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EF8u;
        // 0x3d2efc: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ef8) {
            ctx->pc = 0x3D2F14u;
            goto label_3d2f14;
        }
    }
    ctx->pc = 0x3D2F00u;
    // 0x3d2f00: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x3d2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d2f04: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3d2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3d2f08: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x3d2f08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d2f0c: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x3d2f0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d2f10: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3d2f10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_3d2f14:
    // 0x3d2f14: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x3d2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3d2f18: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x3d2f18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3d2f1c: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x3d2f1cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x3d2f20: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3d2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3d2f24: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2F24u;
    {
        const bool branch_taken_0x3d2f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2f24) {
            ctx->pc = 0x3D2F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2F24u;
            // 0x3d2f28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2F2Cu;
            goto label_3d2f2c;
        }
    }
    ctx->pc = 0x3D2F2Cu;
label_3d2f2c:
    // 0x3d2f2c: 0x1012  mflo        $v0
    ctx->pc = 0x3d2f2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2f30: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2f30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2f34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3d2f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2f3c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2f40: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2f40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2f44: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x3d2f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2f48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2f4c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2f50: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D2F50u;
    {
        const bool branch_taken_0x3d2f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2f50) {
            ctx->pc = 0x3D2F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2F50u;
            // 0x3d2f54: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2F84u;
            goto label_3d2f84;
        }
    }
    ctx->pc = 0x3D2F58u;
    // 0x3d2f58: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d2f5c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d2f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2f60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2F60u;
    {
        const bool branch_taken_0x3d2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F60u;
        // 0x3d2f64: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f60) {
            ctx->pc = 0x3D2F80u;
            goto label_3d2f80;
        }
    }
    ctx->pc = 0x3D2F68u;
    // 0x3d2f68: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2f6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2F6Cu;
    {
        const bool branch_taken_0x3d2f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2f6c) {
            ctx->pc = 0x3D2F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2F6Cu;
            // 0x3d2f70: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2F84u;
            goto label_3d2f84;
        }
    }
    ctx->pc = 0x3D2F74u;
    // 0x3d2f74: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d2f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d2f78: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d2f7c: 0x0  nop
    ctx->pc = 0x3d2f7cu;
    // NOP
label_3d2f80:
    // 0x3d2f80: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d2f84:
    // 0x3d2f84: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2F84u;
    {
        const bool branch_taken_0x3d2f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2f84) {
            ctx->pc = 0x3D2F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2F84u;
            // 0x3d2f88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2F8Cu;
            goto label_3d2f8c;
        }
    }
    ctx->pc = 0x3D2F8Cu;
label_3d2f8c:
    // 0x3d2f8c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3d2f8cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d2f90: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3d2f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3d2f94: 0x1012  mflo        $v0
    ctx->pc = 0x3d2f94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2f98: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2f98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2f9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d2f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fa0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2fa4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2fa8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2fa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2fac: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x3d2facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2fb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2fb4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2fb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2FB8u;
    {
        const bool branch_taken_0x3d2fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FB8u;
        // 0x3d2fbc: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fb8) {
            ctx->pc = 0x3D2FD8u;
            goto label_3d2fd8;
        }
    }
    ctx->pc = 0x3D2FC0u;
    // 0x3d2fc0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d2fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2fc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2FC4u;
    {
        const bool branch_taken_0x3d2fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FC4u;
        // 0x3d2fc8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fc4) {
            ctx->pc = 0x3D2FD8u;
            goto label_3d2fd8;
        }
    }
    ctx->pc = 0x3D2FCCu;
    // 0x3d2fcc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2fd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2FD0u;
    {
        const bool branch_taken_0x3d2fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2fd0) {
            ctx->pc = 0x3D2FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2FD0u;
            // 0x3d2fd4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2FD8u;
            goto label_3d2fd8;
        }
    }
    ctx->pc = 0x3D2FD8u;
label_3d2fd8:
    // 0x3d2fd8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3d2fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3d2fdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d2fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d2fe0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d2fe0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d2fe4: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x3D2FE4u;
    {
        const bool branch_taken_0x3d2fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FE4u;
        // 0x3d2fe8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fe4) {
            ctx->pc = 0x3D3428u;
            goto label_3d3428;
        }
    }
    ctx->pc = 0x3D2FECu;
label_3d2fec:
    // 0x3d2fec: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D2FECu;
    {
        const bool branch_taken_0x3d2fec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FECu;
        // 0x3d2ff0: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fec) {
            ctx->pc = 0x3D3018u;
            goto label_3d3018;
        }
    }
    ctx->pc = 0x3D2FF4u;
    // 0x3d2ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2ff8: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2FF8u;
    {
        const bool branch_taken_0x3d2ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ff8) {
            ctx->pc = 0x3D2FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2FF8u;
            // 0x3d2ffc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3000u;
            goto label_3d3000;
        }
    }
    ctx->pc = 0x3D3000u;
label_3d3000:
    // 0x3d3000: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x3d3000u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3d3004: 0x1012  mflo        $v0
    ctx->pc = 0x3d3004u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3008: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3d3008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d300c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3d300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d3010: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d3010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3014: 0x0  nop
    ctx->pc = 0x3d3014u;
    // NOP
label_3d3018:
    // 0x3d3018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3018u;
    {
        const bool branch_taken_0x3d3018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3018u;
        // 0x3d301c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3018) {
            ctx->pc = 0x3D3030u;
            goto label_3d3030;
        }
    }
    ctx->pc = 0x3D3020u;
    // 0x3d3020: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3d3020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d3024: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d3024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d3028: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3028u;
    {
        const bool branch_taken_0x3d3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3028u;
        // 0x3d302c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3028) {
            ctx->pc = 0x3D3048u;
            goto label_3d3048;
        }
    }
    ctx->pc = 0x3D3030u;
label_3d3030:
    // 0x3d3030: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d3030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d3034: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d3034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3038: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d3038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d303c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d303cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3040: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d3040u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d3044: 0x0  nop
    ctx->pc = 0x3d3044u;
    // NOP
label_3d3048:
    // 0x3d3048: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d3048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d304c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x3d304cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d3050: 0x24422218  addiu       $v0, $v0, 0x2218
    ctx->pc = 0x3d3050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8728));
    // 0x3d3054: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3d3054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d3058: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d305c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d305cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3060: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d3064: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3d3064u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3d3068: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3068u;
    {
        const bool branch_taken_0x3d3068 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3068u;
        // 0x3d306c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3068) {
            ctx->pc = 0x3D3084u;
            goto label_3d3084;
        }
    }
    ctx->pc = 0x3D3070u;
    // 0x3d3070: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x3d3070u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3d3074: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3d3074u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3078: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x3d3078u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3d307c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3D307Cu;
    {
        const bool branch_taken_0x3d307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D307Cu;
        // 0x3d3080: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d307c) {
            ctx->pc = 0x3D3188u;
            goto label_3d3188;
        }
    }
    ctx->pc = 0x3D3084u;
label_3d3084:
    // 0x3d3084: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x3d3084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d3088: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x3d3088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d308c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x3d308cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d3090: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x3d3090u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d3094: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3d3094u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d3098: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x3d3098u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d309c: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x3d309cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3d30a0: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x3d30a0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d30a4: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x3d30a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3d30a8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3d30a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d30ac: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x3d30acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x3d30b0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D30B0u;
    {
        const bool branch_taken_0x3d30b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30b0) {
            ctx->pc = 0x3D30B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D30B0u;
            // 0x3d30b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D30B8u;
            goto label_3d30b8;
        }
    }
    ctx->pc = 0x3D30B8u;
label_3d30b8:
    // 0x3d30b8: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x3d30b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d30bc: 0x1012  mflo        $v0
    ctx->pc = 0x3d30bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d30c0: 0x1810  mfhi        $v1
    ctx->pc = 0x3d30c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d30c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3d30c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d30c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d30c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d30cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d30ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d30d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d30d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d30d4: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x3d30d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d30d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d30dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d30dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d30e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D30E0u;
    {
        const bool branch_taken_0x3d30e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30e0) {
            ctx->pc = 0x3D30E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D30E0u;
            // 0x3d30e4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3114u;
            goto label_3d3114;
        }
    }
    ctx->pc = 0x3D30E8u;
    // 0x3d30e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d30ec: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d30ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d30f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D30F0u;
    {
        const bool branch_taken_0x3d30f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30F0u;
        // 0x3d30f4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d30f0) {
            ctx->pc = 0x3D3110u;
            goto label_3d3110;
        }
    }
    ctx->pc = 0x3D30F8u;
    // 0x3d30f8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d30f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d30fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D30FCu;
    {
        const bool branch_taken_0x3d30fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30fc) {
            ctx->pc = 0x3D3100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D30FCu;
            // 0x3d3100: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3114u;
            goto label_3d3114;
        }
    }
    ctx->pc = 0x3D3104u;
    // 0x3d3104: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d3104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d3108: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d3108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d310c: 0x0  nop
    ctx->pc = 0x3d310cu;
    // NOP
label_3d3110:
    // 0x3d3110: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d3110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d3114:
    // 0x3d3114: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3114u;
    {
        const bool branch_taken_0x3d3114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3114) {
            ctx->pc = 0x3D3118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3114u;
            // 0x3d3118: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D311Cu;
            goto label_3d311c;
        }
    }
    ctx->pc = 0x3D311Cu;
label_3d311c:
    // 0x3d311c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3d311cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d3120: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x3d3120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x3d3124: 0x1012  mflo        $v0
    ctx->pc = 0x3d3124u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3128: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3128u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d312c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d312cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3130: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d3130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d3134: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d3134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d3138: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d3138u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d313c: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x3d313cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d3140: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d3140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d3144: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d3144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3148: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D3148u;
    {
        const bool branch_taken_0x3d3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3148u;
        // 0x3d314c: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3148) {
            ctx->pc = 0x3D3178u;
            goto label_3d3178;
        }
    }
    ctx->pc = 0x3D3150u;
    // 0x3d3150: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d3150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d3154: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d3154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3158: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3158u;
    {
        const bool branch_taken_0x3d3158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3158u;
        // 0x3d315c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3158) {
            ctx->pc = 0x3D3174u;
            goto label_3d3174;
        }
    }
    ctx->pc = 0x3D3160u;
    // 0x3d3160: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d3160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3164u;
    {
        const bool branch_taken_0x3d3164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3164u;
        // 0x3d3168: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3164) {
            ctx->pc = 0x3D3178u;
            goto label_3d3178;
        }
    }
    ctx->pc = 0x3D316Cu;
    // 0x3d316c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3d316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3d3170: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d3170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3d3174:
    // 0x3d3174: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3d3174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_3d3178:
    // 0x3d3178: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x3d3178u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d317c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d3180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d3180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d3184: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x3d3184u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3d3188:
    // 0x3d3188: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3d3188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d318c: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3d318cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3d3190: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x3d3190u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x3d3194: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x3d3194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3198: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3198u;
    {
        const bool branch_taken_0x3d3198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3198) {
            ctx->pc = 0x3D319Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3198u;
            // 0x3d319c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D31A0u;
            goto label_3d31a0;
        }
    }
    ctx->pc = 0x3D31A0u;
label_3d31a0:
    // 0x3d31a0: 0x1012  mflo        $v0
    ctx->pc = 0x3d31a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d31a4: 0x1810  mfhi        $v1
    ctx->pc = 0x3d31a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d31a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3d31a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d31ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d31acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d31b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d31b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d31b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d31b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d31b8: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x3d31b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d31bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d31bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d31c0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d31c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d31c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3D31C4u;
    {
        const bool branch_taken_0x3d31c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d31c4) {
            ctx->pc = 0x3D31C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D31C4u;
            // 0x3d31c8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D31F4u;
            goto label_3d31f4;
        }
    }
    ctx->pc = 0x3D31CCu;
    // 0x3d31cc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d31d0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d31d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d31d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D31D4u;
    {
        const bool branch_taken_0x3d31d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31D4u;
        // 0x3d31d8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d31d4) {
            ctx->pc = 0x3D31F0u;
            goto label_3d31f0;
        }
    }
    ctx->pc = 0x3D31DCu;
    // 0x3d31dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d31dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d31e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D31E0u;
    {
        const bool branch_taken_0x3d31e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d31e0) {
            ctx->pc = 0x3D31E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D31E0u;
            // 0x3d31e4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D31F4u;
            goto label_3d31f4;
        }
    }
    ctx->pc = 0x3D31E8u;
    // 0x3d31e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d31e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d31ec: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d31ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3d31f0:
    // 0x3d31f0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d31f4:
    // 0x3d31f4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D31F4u;
    {
        const bool branch_taken_0x3d31f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d31f4) {
            ctx->pc = 0x3D31F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D31F4u;
            // 0x3d31f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D31FCu;
            goto label_3d31fc;
        }
    }
    ctx->pc = 0x3D31FCu;
label_3d31fc:
    // 0x3d31fc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3d31fcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d3200: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3d3200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3d3204: 0x1012  mflo        $v0
    ctx->pc = 0x3d3204u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3208: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3208u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d320c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d320cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3210: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d3210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d3214: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d3214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d3218: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d3218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d321c: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x3d321cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d3220: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d3220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d3224: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d3224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3228u;
    {
        const bool branch_taken_0x3d3228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3228u;
        // 0x3d322c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3228) {
            ctx->pc = 0x3D3248u;
            goto label_3d3248;
        }
    }
    ctx->pc = 0x3D3230u;
    // 0x3d3230: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d3230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d3234: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3234u;
    {
        const bool branch_taken_0x3d3234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3234u;
        // 0x3d3238: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3234) {
            ctx->pc = 0x3D3248u;
            goto label_3d3248;
        }
    }
    ctx->pc = 0x3D323Cu;
    // 0x3d323c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d323cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3240: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3240u;
    {
        const bool branch_taken_0x3d3240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3240) {
            ctx->pc = 0x3D3244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3240u;
            // 0x3d3244: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3248u;
            goto label_3d3248;
        }
    }
    ctx->pc = 0x3D3248u;
label_3d3248:
    // 0x3d3248: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3d3248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3d324c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d324cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d3250: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d3250u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d3254: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3D3254u;
    {
        const bool branch_taken_0x3d3254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3254u;
        // 0x3d3258: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3254) {
            ctx->pc = 0x3D3430u;
            goto label_3d3430;
        }
    }
    ctx->pc = 0x3D325Cu;
label_3d325c:
    // 0x3d325c: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x3d325cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d3260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3260u;
    {
        const bool branch_taken_0x3d3260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3260u;
        // 0x3d3264: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3260) {
            ctx->pc = 0x3D3270u;
            goto label_3d3270;
        }
    }
    ctx->pc = 0x3D3268u;
    // 0x3d3268: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3D3268u;
    {
        const bool branch_taken_0x3d3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3268u;
        // 0x3d326c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3268) {
            ctx->pc = 0x3D3428u;
            goto label_3d3428;
        }
    }
    ctx->pc = 0x3D3270u;
label_3d3270:
    // 0x3d3270: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d3270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d3274: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3274u;
    {
        const bool branch_taken_0x3d3274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3274u;
        // 0x3d3278: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3274) {
            ctx->pc = 0x3D3290u;
            goto label_3d3290;
        }
    }
    ctx->pc = 0x3D327Cu;
    // 0x3d327c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3d327cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d3280: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d3280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d3284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3284u;
    {
        const bool branch_taken_0x3d3284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3284u;
        // 0x3d3288: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3284) {
            ctx->pc = 0x3D32A8u;
            goto label_3d32a8;
        }
    }
    ctx->pc = 0x3D328Cu;
    // 0x3d328c: 0x0  nop
    ctx->pc = 0x3d328cu;
    // NOP
label_3d3290:
    // 0x3d3290: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d3290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d3294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d3294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3298: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d329c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d329cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d32a0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d32a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d32a4: 0x0  nop
    ctx->pc = 0x3d32a4u;
    // NOP
label_3d32a8:
    // 0x3d32a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d32ac: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3d32acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d32b0: 0x24422218  addiu       $v0, $v0, 0x2218
    ctx->pc = 0x3d32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8728));
    // 0x3d32b4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3d32b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d32b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d32bc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d32bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d32c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d32c4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3d32c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3d32c8: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D32C8u;
    {
        const bool branch_taken_0x3d32c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d32c8) {
            ctx->pc = 0x3D32CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D32C8u;
            // 0x3d32cc: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D32F0u;
            goto label_3d32f0;
        }
    }
    ctx->pc = 0x3D32D0u;
    // 0x3d32d0: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x3d32d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3d32d4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3D32D4u;
    {
        const bool branch_taken_0x3d32d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32D4u;
        // 0x3d32d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32d4) {
            ctx->pc = 0x3D3428u;
            goto label_3d3428;
        }
    }
    ctx->pc = 0x3D32DCu;
    // 0x3d32dc: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x3d32dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d32e0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3D32E0u;
    {
        const bool branch_taken_0x3d32e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32E0u;
        // 0x3d32e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32e0) {
            ctx->pc = 0x3D3428u;
            goto label_3d3428;
        }
    }
    ctx->pc = 0x3D32E8u;
    // 0x3d32e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3D32E8u;
    {
        const bool branch_taken_0x3d32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32E8u;
        // 0x3d32ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32e8) {
            ctx->pc = 0x3D3428u;
            goto label_3d3428;
        }
    }
    ctx->pc = 0x3D32F0u;
label_3d32f0:
    // 0x3d32f0: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x3d32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d32f4: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x3d32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d32f8: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x3d32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d32fc: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x3d32fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d3300: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x3d3300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d3304: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x3d3304u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3d3308: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x3d3308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3d330c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3d330cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d3310: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x3d3310u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d3314: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x3d3314u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d3318: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3d3318u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d331c: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x3d331cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3d3320: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x3d3320u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x3d3324: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3324u;
    {
        const bool branch_taken_0x3d3324 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3324) {
            ctx->pc = 0x3D3328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3324u;
            // 0x3d3328: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D332Cu;
            goto label_3d332c;
        }
    }
    ctx->pc = 0x3D332Cu;
label_3d332c:
    // 0x3d332c: 0x1012  mflo        $v0
    ctx->pc = 0x3d332cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3330: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3330u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d3334: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3d3334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3338: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d3338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d333c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d3340: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d3340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d3344: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x3d3344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3d3348: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d3348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d334c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d334cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d3350: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D3350u;
    {
        const bool branch_taken_0x3d3350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3350) {
            ctx->pc = 0x3D3354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3350u;
            // 0x3d3354: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3384u;
            goto label_3d3384;
        }
    }
    ctx->pc = 0x3D3358u;
    // 0x3d3358: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d335c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d335cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d3360: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3360u;
    {
        const bool branch_taken_0x3d3360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3360u;
        // 0x3d3364: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3360) {
            ctx->pc = 0x3D3380u;
            goto label_3d3380;
        }
    }
    ctx->pc = 0x3D3368u;
    // 0x3d3368: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d3368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d336c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D336Cu;
    {
        const bool branch_taken_0x3d336c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d336c) {
            ctx->pc = 0x3D3370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D336Cu;
            // 0x3d3370: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3384u;
            goto label_3d3384;
        }
    }
    ctx->pc = 0x3D3374u;
    // 0x3d3374: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3d3374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3d3378: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d3378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d337c: 0x0  nop
    ctx->pc = 0x3d337cu;
    // NOP
label_3d3380:
    // 0x3d3380: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3d3380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3d3384:
    // 0x3d3384: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D3384u;
    {
        const bool branch_taken_0x3d3384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3384) {
            ctx->pc = 0x3D3388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3384u;
            // 0x3d3388: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D338Cu;
            goto label_3d338c;
        }
    }
    ctx->pc = 0x3D338Cu;
label_3d338c:
    // 0x3d338c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3d338cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d3390: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x3d3390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x3d3394: 0x1012  mflo        $v0
    ctx->pc = 0x3d3394u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d3398: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3398u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d339c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d339cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d33a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d33a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d33a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d33a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d33a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d33a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d33ac: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3d33acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3d33b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d33b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d33b4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d33b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d33b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D33B8u;
    {
        const bool branch_taken_0x3d33b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33B8u;
        // 0x3d33bc: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d33b8) {
            ctx->pc = 0x3D33E8u;
            goto label_3d33e8;
        }
    }
    ctx->pc = 0x3D33C0u;
    // 0x3d33c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d33c4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d33c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d33c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D33C8u;
    {
        const bool branch_taken_0x3d33c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33C8u;
        // 0x3d33cc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d33c8) {
            ctx->pc = 0x3D33E4u;
            goto label_3d33e4;
        }
    }
    ctx->pc = 0x3D33D0u;
    // 0x3d33d0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d33d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d33d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D33D4u;
    {
        const bool branch_taken_0x3d33d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33D4u;
        // 0x3d33d8: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d33d4) {
            ctx->pc = 0x3D33E8u;
            goto label_3d33e8;
        }
    }
    ctx->pc = 0x3D33DCu;
    // 0x3d33dc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d33e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d33e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3d33e4:
    // 0x3d33e4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3d33e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_3d33e8:
    // 0x3d33e8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3d33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3d33ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d33ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d33f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d33f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d33f4: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x3d33f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3d33f8: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x3d33f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3d33fc: 0x3010  mfhi        $a2
    ctx->pc = 0x3d33fcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x3d3400: 0x2012  mflo        $a0
    ctx->pc = 0x3d3400u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3d3404: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d3404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d3408: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3408u;
    {
        const bool branch_taken_0x3d3408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3408) {
            ctx->pc = 0x3D340Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3408u;
            // 0x3d340c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3428u;
            goto label_3d3428;
        }
    }
    ctx->pc = 0x3D3410u;
    // 0x3d3410: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3410u;
    {
        const bool branch_taken_0x3d3410 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3410u;
        // 0x3d3414: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3410) {
            ctx->pc = 0x3D3430u;
            goto label_3d3430;
        }
    }
    ctx->pc = 0x3D3418u;
    // 0x3d3418: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3d3418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d341c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D341Cu;
    {
        const bool branch_taken_0x3d341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D341Cu;
        // 0x3d3420: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d341c) {
            ctx->pc = 0x3D3434u;
            goto label_3d3434;
        }
    }
    ctx->pc = 0x3D3424u;
    // 0x3d3424: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3d3424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3d3428:
    // 0x3d3428: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3d3428u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d342c: 0x0  nop
    ctx->pc = 0x3d342cu;
    // NOP
label_3d3430:
    // 0x3d3430: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3d3430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_3d3434:
    // 0x3d3434: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x3d3434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3d3438: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x3d3438u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3d343c: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x3d343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x3d3440: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3440u;
        // 0x3d3444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3448u;
}

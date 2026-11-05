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

// Function: sub_00101C20
// Address: 0x101c20 - 0x102380
void sub_00101C20_0x101c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101C20_0x101c20");
#endif

    switch (ctx->pc) {
        case 0x101ca0u: goto label_101ca0;
        case 0x101d1cu: goto label_101d1c;
        case 0x101d28u: goto label_101d28;
        case 0x101dc4u: goto label_101dc4;
        case 0x101de8u: goto label_101de8;
        case 0x101e68u: goto label_101e68;
        case 0x101eb8u: goto label_101eb8;
        case 0x101ee4u: goto label_101ee4;
        case 0x101f04u: goto label_101f04;
        case 0x101f10u: goto label_101f10;
        case 0x101f80u: goto label_101f80;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fc0u: goto label_101fc0;
        case 0x101ffcu: goto label_101ffc;
        case 0x102044u: goto label_102044;
        case 0x102050u: goto label_102050;
        case 0x1020f0u: goto label_1020f0;
        case 0x102118u: goto label_102118;
        case 0x102198u: goto label_102198;
        case 0x1021e8u: goto label_1021e8;
        case 0x102214u: goto label_102214;
        case 0x102234u: goto label_102234;
        case 0x102288u: goto label_102288;
        case 0x1022d8u: goto label_1022d8;
        case 0x102304u: goto label_102304;
        case 0x102320u: goto label_102320;
        case 0x10234cu: goto label_10234c;
        default: break;
    }

    ctx->pc = 0x101c20u;

    // 0x101c20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x101c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x101c24: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x101c24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x101c28: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x101c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x101c2c: 0x8d280700  lw          $t0, 0x700($t1)
    ctx->pc = 0x101c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3F0700u));
    // 0x101c30: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x101c30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c34: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x101c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x101c38: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x101c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x101c3c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x101c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x101c40: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x101c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x101c44: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x101c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x101c48: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x101c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x101c4c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x101c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x101c50: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x101c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x101c54: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x101c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x101c58: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x101c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x101c5c: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x101c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x101c60: 0x110001bb  beqz        $t0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x101C60u;
    {
        const bool branch_taken_0x101c60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C60u;
        // 0x101c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c60) {
            ctx->pc = 0x102350u;
            goto label_102350;
        }
    }
    ctx->pc = 0x101C68u;
    // 0x101c68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x101c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x101c6c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x101c70: 0xac440714  sw          $a0, 0x714($v0)
    ctx->pc = 0x101c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F0714u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0714u, _value); } while (0);
    // 0x101c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x101c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101c7c: 0x27aa0008  addiu       $t2, $sp, 0x8
    ctx->pc = 0x101c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x101c80: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x101C80u;
    {
        const bool branch_taken_0x101c80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C80u;
        // 0x101c84: 0xac620718  sw          $v0, 0x718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c80) {
            ctx->pc = 0x101CC4u;
            goto label_101cc4;
        }
    }
    ctx->pc = 0x101C88u;
    // 0x101c88: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x101c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x101c8c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x101c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c90: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x101c90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x101c94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x101c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x101c98: 0x8ce20708  lw          $v0, 0x708($a3)
    ctx->pc = 0x101c98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0708u));
    // 0x101c9c: 0x0  nop
    ctx->pc = 0x101c9cu;
    // NOP
label_101ca0:
    // 0x101ca0: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x101ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x101ca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x101ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x101ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101cac: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x101cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x101cb0: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x101cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x101cb4: 0x8d020700  lw          $v0, 0x700($t0)
    ctx->pc = 0x101cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1792)));
    // 0x101cb8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x101cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101cbc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x101CBCu;
    {
        const bool branch_taken_0x101cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CBCu;
        // 0x101cc0: 0x8ce20708  lw          $v0, 0x708($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cbc) {
            ctx->pc = 0x101CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101ca0;
        }
    }
    ctx->pc = 0x101CC4u;
label_101cc4:
    // 0x101cc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x101cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x101cc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x101cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x101ccc: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x101CCCu;
    {
        const bool branch_taken_0x101ccc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x101CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CCCu;
        // 0x101cd0: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ccc) {
            ctx->pc = 0x101CDCu;
            goto label_101cdc;
        }
    }
    ctx->pc = 0x101CD4u;
    // 0x101cd4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x101cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x101cd8: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x101cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_101cdc:
    // 0x101cdc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x101cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x101ce0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x101ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x101ce4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x101ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x101ce8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x101ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x101cec: 0x8ce20714  lw          $v0, 0x714($a3)
    ctx->pc = 0x101cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0714u));
    // 0x101cf0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x101cf4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x101cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x101cf8: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x101cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x101cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x101d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x101d04: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x101d04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x101d08: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x101d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x101d0c: 0x8c640718  lw          $a0, 0x718($v1)
    ctx->pc = 0x101d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F0718u));
    // 0x101d10: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x101d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x101d14: 0xc041a5c  jal         func_106970
    ctx->pc = 0x101D14u;
    SET_GPR_U32(ctx, 31, 0x101D1Cu);
    ctx->pc = 0x101D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D14u;
    // 0x101d18: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106970u, 0x101D14u, 0x101D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D1Cu;
label_101d1c:
    // 0x101d1c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x101d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x101d20: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x101D20u;
    SET_GPR_U32(ctx, 31, 0x101D28u);
    ctx->pc = 0x101D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D20u;
    // 0x101d24: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x101D20u, 0x101D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D28u;
label_101d28:
    // 0x101d28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x101d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101d2c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x101d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d30: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x101d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x101d34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x101d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101d38: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x101d3c: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x101D3Cu;
    {
        const bool branch_taken_0x101d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x101D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D3Cu;
        // 0x101d40: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d3c) {
            ctx->pc = 0x101D7Cu;
            goto label_101d7c;
        }
    }
    ctx->pc = 0x101D44u;
    // 0x101d44: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x101D44u;
    {
        const bool branch_taken_0x101d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D44u;
        // 0x101d48: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d44) {
            ctx->pc = 0x101D70u;
            goto label_101d70;
        }
    }
    ctx->pc = 0x101D4Cu;
    // 0x101d4c: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x101d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x101d50: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x101d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x101d54: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x101d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x101d58: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x101d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x101d5c: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x101d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101d60: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x101d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101d64: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x101d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101d68: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x101d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101d6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x101d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_101d70:
    // 0x101d70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x101d74: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x101D74u;
    {
        const bool branch_taken_0x101d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D74u;
        // 0x101d78: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d74) {
            ctx->pc = 0x101EF4u;
            goto label_101ef4;
        }
    }
    ctx->pc = 0x101D7Cu;
label_101d7c:
    // 0x101d7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x101d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101d80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x101d80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101d88: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x101d8c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x101d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x101d90: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x101d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x101d94: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x101d98: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x101d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x101d9c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x101d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x101da0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x101da0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x101da4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101da8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x101da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x101dac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x101DACu;
    {
        const bool branch_taken_0x101dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101dac) {
            ctx->pc = 0x101DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101DACu;
            // 0x101db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101DCCu;
            goto label_101dcc;
        }
    }
    ctx->pc = 0x101DB4u;
    // 0x101db4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dbc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x101DBCu;
    SET_GPR_U32(ctx, 31, 0x101DC4u);
    ctx->pc = 0x101DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DBCu;
    // 0x101dc0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x101DBCu, 0x101DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DC4u;
label_101dc4:
    // 0x101dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101DC4u;
    {
        const bool branch_taken_0x101dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DC4u;
        // 0x101dc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101dc4) {
            ctx->pc = 0x101DD4u;
            goto label_101dd4;
        }
    }
    ctx->pc = 0x101DCCu;
label_101dcc:
    // 0x101dcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101dd4:
    // 0x101dd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x101dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x101dd8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x101dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ddc: 0x1072000f  beq         $v1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x101DDCu;
    {
        const bool branch_taken_0x101ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x101DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DDCu;
        // 0x101de0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ddc) {
            ctx->pc = 0x101E1Cu;
            goto label_101e1c;
        }
    }
    ctx->pc = 0x101DE4u;
    // 0x101de4: 0x0  nop
    ctx->pc = 0x101de4u;
    // NOP
label_101de8:
    // 0x101de8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x101DE8u;
    {
        const bool branch_taken_0x101de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101de8) {
            ctx->pc = 0x101DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101DE8u;
            // 0x101dec: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101E14u;
            goto label_101e14;
        }
    }
    ctx->pc = 0x101DF0u;
    // 0x101df0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x101df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x101df4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x101df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x101df8: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x101df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x101dfc: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x101dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x101e00: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x101e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e04: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x101e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e08: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x101e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e0c: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x101e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e10: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x101e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_101e14:
    // 0x101e14: 0x1472fff4  bne         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x101E14u;
    {
        const bool branch_taken_0x101e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x101E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E14u;
        // 0x101e18: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e14) {
            ctx->pc = 0x101DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101de8;
        }
    }
    ctx->pc = 0x101E1Cu;
label_101e1c:
    // 0x101e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e20: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x101e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101e28: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x101E28u;
    {
        const bool branch_taken_0x101e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x101e28) {
            ctx->pc = 0x101E60u;
            goto label_101e60;
        }
    }
    ctx->pc = 0x101E30u;
    // 0x101e30: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x101E30u;
    {
        const bool branch_taken_0x101e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101e30) {
            ctx->pc = 0x101E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E30u;
            // 0x101e34: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101EA0u;
            goto label_101ea0;
        }
    }
    ctx->pc = 0x101E38u;
    // 0x101e38: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x101e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x101e3c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x101e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x101e40: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x101e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x101e44: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x101e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x101e48: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x101e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e4c: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x101e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e50: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x101e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e54: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x101e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x101E58u;
    {
        const bool branch_taken_0x101e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E58u;
        // 0x101e5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e58) {
            ctx->pc = 0x101EA0u;
            goto label_101ea0;
        }
    }
    ctx->pc = 0x101E60u;
label_101e60:
    // 0x101e60: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x101E60u;
    {
        const bool branch_taken_0x101e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E60u;
        // 0x101e64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e60) {
            ctx->pc = 0x101E98u;
            goto label_101e98;
        }
    }
    ctx->pc = 0x101E68u;
label_101e68:
    // 0x101e68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101E68u;
    {
        const bool branch_taken_0x101e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E68u;
        // 0x101e6c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e68) {
            ctx->pc = 0x101E90u;
            goto label_101e90;
        }
    }
    ctx->pc = 0x101E70u;
    // 0x101e70: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x101e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x101e74: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x101e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x101e78: 0x6ba7002f  ldl         $a3, 0x2F($sp)
    ctx->pc = 0x101e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x101e7c: 0x6fa70028  ldr         $a3, 0x28($sp)
    ctx->pc = 0x101e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x101e80: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x101e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e84: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x101e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e88: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x101e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e8c: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x101e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_101e90:
    // 0x101e90: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x101E90u;
    {
        const bool branch_taken_0x101e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E90u;
        // 0x101e94: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e90) {
            ctx->pc = 0x101E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101e68;
        }
    }
    ctx->pc = 0x101E98u;
label_101e98:
    // 0x101e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e9c: 0x0  nop
    ctx->pc = 0x101e9cu;
    // NOP
label_101ea0:
    // 0x101ea0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x101ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x101ea4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x101ea8: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x101EA8u;
    {
        const bool branch_taken_0x101ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101ea8) {
            ctx->pc = 0x101EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101EA8u;
            // 0x101eac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101ED4u;
            goto label_101ed4;
        }
    }
    ctx->pc = 0x101EB0u;
    // 0x101eb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x101eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x101eb4: 0x0  nop
    ctx->pc = 0x101eb4u;
    // NOP
label_101eb8:
    // 0x101eb8: 0x0  nop
    ctx->pc = 0x101eb8u;
    // NOP
    // 0x101ebc: 0x0  nop
    ctx->pc = 0x101ebcu;
    // NOP
    // 0x101ec0: 0x0  nop
    ctx->pc = 0x101ec0u;
    // NOP
    // 0x101ec4: 0x0  nop
    ctx->pc = 0x101ec4u;
    // NOP
    // 0x101ec8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x101EC8u;
    {
        const bool branch_taken_0x101ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x101ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EC8u;
        // 0x101ecc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ec8) {
            ctx->pc = 0x101EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101eb8;
        }
    }
    ctx->pc = 0x101ED0u;
    // 0x101ed0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x101ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_101ed4:
    // 0x101ed4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101ED4u;
    {
        const bool branch_taken_0x101ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED4u;
        // 0x101ed8: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ed4) {
            ctx->pc = 0x101EE8u;
            goto label_101ee8;
        }
    }
    ctx->pc = 0x101EDCu;
    // 0x101edc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x101EDCu;
    SET_GPR_U32(ctx, 31, 0x101EE4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x101EDCu, 0x101EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EE4u;
label_101ee4:
    // 0x101ee4: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_101ee8:
    // 0x101ee8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x101ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x101eec: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x101eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x101ef0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x101ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_101ef4:
    // 0x101ef4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x101ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x101ef8: 0x92260010  lbu         $a2, 0x10($s1)
    ctx->pc = 0x101ef8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x101efc: 0xc0f65b2  jal         func_3D96C8
    ctx->pc = 0x101EFCu;
    SET_GPR_U32(ctx, 31, 0x101F04u);
    ctx->pc = 0x101F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EFCu;
    // 0x101f00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D96C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D96C8u, 0x101EFCu, 0x101F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F04u;
label_101f04:
    // 0x101f04: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x101F04u;
    {
        const bool branch_taken_0x101f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F04u;
        // 0x101f08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f04) {
            ctx->pc = 0x10224Cu;
            goto label_10224c;
        }
    }
    ctx->pc = 0x101F0Cu;
    // 0x101f0c: 0x0  nop
    ctx->pc = 0x101f0cu;
    // NOP
label_101f10:
    // 0x101f10: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x101f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x101f14: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x101f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x101f18: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x101f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x101f1c: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x101f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x101f20: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x101f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101f24: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x101f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101f28: 0xb3a7002f  sdl         $a3, 0x2F($sp)
    ctx->pc = 0x101f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101f2c: 0xb7a70028  sdr         $a3, 0x28($sp)
    ctx->pc = 0x101f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101f30: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x101F30u;
    {
        const bool branch_taken_0x101f30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F30u;
        // 0x101f34: 0x8fb60020  lw          $s6, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f30) {
            ctx->pc = 0x101F60u;
            goto label_101f60;
        }
    }
    ctx->pc = 0x101F38u;
    // 0x101f38: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x101f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x101f3c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x101f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x101f40: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x101f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x101f44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101F44u;
    {
        const bool branch_taken_0x101f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F44u;
        // 0x101f48: 0xc7a0002c  lwc1        $f0, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f44) {
            ctx->pc = 0x101F60u;
            goto label_101f60;
        }
    }
    ctx->pc = 0x101F4Cu;
    // 0x101f4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x101f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101f50: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x101f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x101f54: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x101f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x101f58: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x101f58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x101f5c: 0xafd60008  sw          $s6, 0x8($fp)
    ctx->pc = 0x101f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 22));
label_101f60:
    // 0x101f60: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x101f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x101f64: 0x8cc20718  lw          $v0, 0x718($a2)
    ctx->pc = 0x101f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0718u));
    // 0x101f68: 0x12c200bb  beq         $s6, $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x101F68u;
    {
        const bool branch_taken_0x101f68 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x101F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F68u;
        // 0x101f6c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f68) {
            ctx->pc = 0x102258u;
            goto label_102258;
        }
    }
    ctx->pc = 0x101F70u;
    // 0x101f70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101f70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x101f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101f78: 0xc0f6656  jal         func_3D9958
    ctx->pc = 0x101F78u;
    SET_GPR_U32(ctx, 31, 0x101F80u);
    ctx->pc = 0x101F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F78u;
    // 0x101f7c: 0x93a60010  lbu         $a2, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9958u, 0x101F78u, 0x101F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F80u;
label_101f80:
    // 0x101f80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x101f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x101f84: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x101f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x101f88: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x101f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x101f8c: 0x8ec70028  lw          $a3, 0x28($s6)
    ctx->pc = 0x101f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x101f90: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x101f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x101f94: 0x92c20022  lbu         $v0, 0x22($s6)
    ctx->pc = 0x101f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 34)));
    // 0x101f98: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x101F98u;
    {
        const bool branch_taken_0x101f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F98u;
        // 0x101f9c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f98) {
            ctx->pc = 0x102248u;
            goto label_102248;
        }
    }
    ctx->pc = 0x101FA0u;
    // 0x101fa0: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x101fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x101fa4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x101fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x101fa8: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x101fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x101fac: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x101facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x101fb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x101fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fb4: 0x0  nop
    ctx->pc = 0x101fb4u;
    // NOP
label_101fb8:
    // 0x101fb8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x101FB8u;
    SET_GPR_U32(ctx, 31, 0x101FC0u);
    ctx->pc = 0x101FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FB8u;
    // 0x101fbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x101FB8u, 0x101FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FC0u;
label_101fc0:
    // 0x101fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fc4: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x101fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x101fc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101FC8u;
    {
        const bool branch_taken_0x101fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FC8u;
        // 0x101fcc: 0x8fa70054  lw          $a3, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fc8) {
            ctx->pc = 0x101FDCu;
            goto label_101fdc;
        }
    }
    ctx->pc = 0x101FD0u;
    // 0x101fd0: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x101fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x101fd4: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101FD4u;
    {
        const bool branch_taken_0x101fd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x101fd4) {
            ctx->pc = 0x101FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101FD4u;
            // 0x101fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101FE4u;
            goto label_101fe4;
        }
    }
    ctx->pc = 0x101FDCu;
label_101fdc:
    // 0x101fdc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x101fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x101fe0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101fe4:
    // 0x101fe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x101fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x101fe8: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x101FE8u;
    {
        const bool branch_taken_0x101fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FE8u;
        // 0x101fec: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fe8) {
            ctx->pc = 0x102234u;
            goto label_102234;
        }
    }
    ctx->pc = 0x101FF0u;
    // 0x101ff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x101ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ff4: 0xc04113c  jal         func_1044F0
    ctx->pc = 0x101FF4u;
    SET_GPR_U32(ctx, 31, 0x101FFCu);
    ctx->pc = 0x101FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FF4u;
    // 0x101ff8: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F0u, 0x101FF4u, 0x101FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FFCu;
label_101ffc:
    // 0x101ffc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x101ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102000: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x102000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x102004: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x102004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102008: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x102008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10200c: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x10200Cu;
    {
        const bool branch_taken_0x10200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10200Cu;
        // 0x102010: 0x8fa60064  lw          $a2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10200c) {
            ctx->pc = 0x102238u;
            goto label_102238;
        }
    }
    ctx->pc = 0x102014u;
    // 0x102014: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x102014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x102018: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x102018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10201c: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x10201Cu;
    {
        const bool branch_taken_0x10201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10201Cu;
        // 0x102020: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10201c) {
            ctx->pc = 0x102234u;
            goto label_102234;
        }
    }
    ctx->pc = 0x102024u;
    // 0x102024: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x102024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x102028: 0xae160014  sw          $s6, 0x14($s0)
    ctx->pc = 0x102028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 22));
    // 0x10202c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102030: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x102030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x102034: 0x8cc40718  lw          $a0, 0x718($a2)
    ctx->pc = 0x102034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x102038: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10203c: 0xc041a5c  jal         func_106970
    ctx->pc = 0x10203Cu;
    SET_GPR_U32(ctx, 31, 0x102044u);
    ctx->pc = 0x102040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10203Cu;
    // 0x102040: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106970u, 0x10203Cu, 0x102044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102044u;
label_102044:
    // 0x102044: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x102044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x102048: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x102048u;
    SET_GPR_U32(ctx, 31, 0x102050u);
    ctx->pc = 0x10204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102048u;
    // 0x10204c: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x102048u, 0x102050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102050u;
label_102050:
    // 0x102050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x102050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102054: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x102054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102058: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x102058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10205c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102060: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x102060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x102064: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x102064u;
    {
        const bool branch_taken_0x102064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x102068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102064u;
        // 0x102068: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102064) {
            ctx->pc = 0x1020A4u;
            goto label_1020a4;
        }
    }
    ctx->pc = 0x10206Cu;
    // 0x10206c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10206Cu;
    {
        const bool branch_taken_0x10206c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x102070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10206Cu;
        // 0x102070: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10206c) {
            ctx->pc = 0x102098u;
            goto label_102098;
        }
    }
    ctx->pc = 0x102074u;
    // 0x102074: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x102074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x102078: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x102078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x10207c: 0x6ba2003f  ldl         $v0, 0x3F($sp)
    ctx->pc = 0x10207cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x102080: 0x6fa20038  ldr         $v0, 0x38($sp)
    ctx->pc = 0x102080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x102084: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x102084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102088: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x102088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10208c: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x10208cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102090: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x102090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102094: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x102094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_102098:
    // 0x102098: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10209c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x10209Cu;
    {
        const bool branch_taken_0x10209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10209Cu;
        // 0x1020a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10209c) {
            ctx->pc = 0x102224u;
            goto label_102224;
        }
    }
    ctx->pc = 0x1020A4u;
label_1020a4:
    // 0x1020a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1020a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020a8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1020a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1020ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1020acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1020b0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1020b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1020b4: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x1020b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x1020b8: 0x2442023  subu        $a0, $s2, $a0
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1020bc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1020bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1020c0: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x1020c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1020c4: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x1020c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1020c8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1020c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1020cc: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x1020ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x1020d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1020d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1020d4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1020d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1020d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1020D8u;
    {
        const bool branch_taken_0x1020d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020d8) {
            ctx->pc = 0x1020DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1020D8u;
            // 0x1020dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1020F8u;
            goto label_1020f8;
        }
    }
    ctx->pc = 0x1020E0u;
    // 0x1020e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1020e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1020e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1020e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020e8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1020E8u;
    SET_GPR_U32(ctx, 31, 0x1020F0u);
    ctx->pc = 0x1020ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020E8u;
    // 0x1020ec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1020E8u, 0x1020F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020F0u;
label_1020f0:
    // 0x1020f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1020F0u;
    {
        const bool branch_taken_0x1020f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020F0u;
        // 0x1020f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020f0) {
            ctx->pc = 0x102100u;
            goto label_102100;
        }
    }
    ctx->pc = 0x1020F8u;
label_1020f8:
    // 0x1020f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1020f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1020fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102100:
    // 0x102100: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102104: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x102104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102108: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x102108u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x10210c: 0x1072000f  beq         $v1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x10210Cu;
    {
        const bool branch_taken_0x10210c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x102110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10210Cu;
        // 0x102110: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10210c) {
            ctx->pc = 0x10214Cu;
            goto label_10214c;
        }
    }
    ctx->pc = 0x102114u;
    // 0x102114: 0x0  nop
    ctx->pc = 0x102114u;
    // NOP
label_102118:
    // 0x102118: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x102118u;
    {
        const bool branch_taken_0x102118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102118) {
            ctx->pc = 0x10211Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102118u;
            // 0x10211c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102144u;
            goto label_102144;
        }
    }
    ctx->pc = 0x102120u;
    // 0x102120: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x102120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x102124: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x102124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x102128: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x102128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10212c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x10212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x102130: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x102130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102134: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x102134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102138: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x102138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10213c: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x10213cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102140: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x102140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_102144:
    // 0x102144: 0x1472fff4  bne         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x102144u;
    {
        const bool branch_taken_0x102144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x102148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102144u;
        // 0x102148: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102144) {
            ctx->pc = 0x102118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102118;
        }
    }
    ctx->pc = 0x10214Cu;
label_10214c:
    // 0x10214c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x10214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x102150: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x102150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102154: 0x1467000d  bne         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x102154u;
    {
        const bool branch_taken_0x102154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x102158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102154u;
        // 0x102158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102154) {
            ctx->pc = 0x10218Cu;
            goto label_10218c;
        }
    }
    ctx->pc = 0x10215Cu;
    // 0x10215c: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x10215Cu;
    {
        const bool branch_taken_0x10215c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10215c) {
            ctx->pc = 0x102160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10215Cu;
            // 0x102160: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1021D0u;
            goto label_1021d0;
        }
    }
    ctx->pc = 0x102164u;
    // 0x102164: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x102164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x102168: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x102168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10216c: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x10216cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x102170: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x102170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x102174: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x102174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102178: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x102178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10217c: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x10217cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102180: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x102180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102184: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x102184u;
    {
        const bool branch_taken_0x102184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102184u;
        // 0x102188: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102184) {
            ctx->pc = 0x1021D0u;
            goto label_1021d0;
        }
    }
    ctx->pc = 0x10218Cu;
label_10218c:
    // 0x10218c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10218Cu;
    {
        const bool branch_taken_0x10218c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10218Cu;
        // 0x102190: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10218c) {
            ctx->pc = 0x1021C8u;
            goto label_1021c8;
        }
    }
    ctx->pc = 0x102194u;
    // 0x102194: 0x0  nop
    ctx->pc = 0x102194u;
    // NOP
label_102198:
    // 0x102198: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102198u;
    {
        const bool branch_taken_0x102198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102198u;
        // 0x10219c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102198) {
            ctx->pc = 0x1021C0u;
            goto label_1021c0;
        }
    }
    ctx->pc = 0x1021A0u;
    // 0x1021a0: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1021a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1021a4: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1021a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1021a8: 0x6ba7003f  ldl         $a3, 0x3F($sp)
    ctx->pc = 0x1021a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1021ac: 0x6fa70038  ldr         $a3, 0x38($sp)
    ctx->pc = 0x1021acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1021b0: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x1021b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1021b4: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x1021b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1021b8: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x1021b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1021bc: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x1021bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1021c0:
    // 0x1021c0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1021C0u;
    {
        const bool branch_taken_0x1021c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1021C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021C0u;
        // 0x1021c4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021c0) {
            ctx->pc = 0x102198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102198;
        }
    }
    ctx->pc = 0x1021C8u;
label_1021c8:
    // 0x1021c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1021c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021cc: 0x0  nop
    ctx->pc = 0x1021ccu;
    // NOP
label_1021d0:
    // 0x1021d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1021d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1021d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1021d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1021d8: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1021D8u;
    {
        const bool branch_taken_0x1021d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1021d8) {
            ctx->pc = 0x1021DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1021D8u;
            // 0x1021dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102204u;
            goto label_102204;
        }
    }
    ctx->pc = 0x1021E0u;
    // 0x1021e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1021e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1021e4: 0x0  nop
    ctx->pc = 0x1021e4u;
    // NOP
label_1021e8:
    // 0x1021e8: 0x0  nop
    ctx->pc = 0x1021e8u;
    // NOP
    // 0x1021ec: 0x0  nop
    ctx->pc = 0x1021ecu;
    // NOP
    // 0x1021f0: 0x0  nop
    ctx->pc = 0x1021f0u;
    // NOP
    // 0x1021f4: 0x0  nop
    ctx->pc = 0x1021f4u;
    // NOP
    // 0x1021f8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1021F8u;
    {
        const bool branch_taken_0x1021f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1021FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021F8u;
        // 0x1021fc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021f8) {
            ctx->pc = 0x1021E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1021e8;
        }
    }
    ctx->pc = 0x102200u;
    // 0x102200: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_102204:
    // 0x102204: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102204u;
    {
        const bool branch_taken_0x102204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102204u;
        // 0x102208: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102204) {
            ctx->pc = 0x102218u;
            goto label_102218;
        }
    }
    ctx->pc = 0x10220Cu;
    // 0x10220c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10220Cu;
    SET_GPR_U32(ctx, 31, 0x102214u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10220Cu, 0x102214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102214u;
label_102214:
    // 0x102214: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x102214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_102218:
    // 0x102218: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x102218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x10221c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x10221cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x102220: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x102220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_102224:
    // 0x102224: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x102224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x102228: 0x92260010  lbu         $a2, 0x10($s1)
    ctx->pc = 0x102228u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10222c: 0xc0f65b2  jal         func_3D96C8
    ctx->pc = 0x10222Cu;
    SET_GPR_U32(ctx, 31, 0x102234u);
    ctx->pc = 0x102230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10222Cu;
    // 0x102230: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D96C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D96C8u, 0x10222Cu, 0x102234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102234u;
label_102234:
    // 0x102234: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_102238:
    // 0x102238: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x102238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10223c: 0x286102b  sltu        $v0, $s4, $a2
    ctx->pc = 0x10223cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x102240: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x102240u;
    {
        const bool branch_taken_0x102240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102240u;
        // 0x102244: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102240) {
            ctx->pc = 0x101FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101fb8;
        }
    }
    ctx->pc = 0x102248u;
label_102248:
    // 0x102248: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x102248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10224c:
    // 0x10224c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102250: 0x1462ff2f  bne         $v1, $v0, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x102250u;
    {
        const bool branch_taken_0x102250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102250u;
        // 0x102254: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102250) {
            ctx->pc = 0x101F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101f10;
        }
    }
    ctx->pc = 0x102258u;
label_102258:
    // 0x102258: 0x13c00013  beqz        $fp, . + 4 + (0x13 << 2)
    ctx->pc = 0x102258u;
    {
        const bool branch_taken_0x102258 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x10225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102258u;
        // 0x10225c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102258) {
            ctx->pc = 0x1022A8u;
            goto label_1022a8;
        }
    }
    ctx->pc = 0x102260u;
    // 0x102260: 0x93c20004  lbu         $v0, 0x4($fp)
    ctx->pc = 0x102260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x102264: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102264u;
    {
        const bool branch_taken_0x102264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102264u;
        // 0x102268: 0x8fa70050  lw          $a3, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102264) {
            ctx->pc = 0x1022A8u;
            goto label_1022a8;
        }
    }
    ctx->pc = 0x10226Cu;
    // 0x10226c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x10226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x102270: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x102270u;
    {
        const bool branch_taken_0x102270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102270u;
        // 0x102274: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102270) {
            ctx->pc = 0x10230Cu;
            goto label_10230c;
        }
    }
    ctx->pc = 0x102278u;
    // 0x102278: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x102278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10227c: 0x1043002e  beq         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x10227Cu;
    {
        const bool branch_taken_0x10227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x102280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10227Cu;
        // 0x102280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10227c) {
            ctx->pc = 0x102338u;
            goto label_102338;
        }
    }
    ctx->pc = 0x102284u;
    // 0x102284: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102288:
    // 0x102288: 0x0  nop
    ctx->pc = 0x102288u;
    // NOP
    // 0x10228c: 0x0  nop
    ctx->pc = 0x10228cu;
    // NOP
    // 0x102290: 0x0  nop
    ctx->pc = 0x102290u;
    // NOP
    // 0x102294: 0x0  nop
    ctx->pc = 0x102294u;
    // NOP
    // 0x102298: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102298u;
    {
        const bool branch_taken_0x102298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102298u;
        // 0x10229c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102298) {
            ctx->pc = 0x102288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102288;
        }
    }
    ctx->pc = 0x1022A0u;
    // 0x1022a0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1022A0u;
    {
        const bool branch_taken_0x1022a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022A0u;
        // 0x1022a4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022a0) {
            ctx->pc = 0x10233Cu;
            goto label_10233c;
        }
    }
    ctx->pc = 0x1022A8u;
label_1022a8:
    // 0x1022a8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1022ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1022ACu;
    {
        const bool branch_taken_0x1022ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022ACu;
        // 0x1022b0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022ac) {
            ctx->pc = 0x10230Cu;
            goto label_10230c;
        }
    }
    ctx->pc = 0x1022B4u;
    // 0x1022b4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1022b8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1022bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1022bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1022c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1022c4: 0xaca00718  sw          $zero, 0x718($a1)
    ctx->pc = 0x1022c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0718u, _value); } while (0);
    // 0x1022c8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1022C8u;
    {
        const bool branch_taken_0x1022c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1022CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022C8u;
        // 0x1022cc: 0xacc00714  sw          $zero, 0x714($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022c8) {
            ctx->pc = 0x1022F0u;
            goto label_1022f0;
        }
    }
    ctx->pc = 0x1022D0u;
    // 0x1022d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1022d4: 0x0  nop
    ctx->pc = 0x1022d4u;
    // NOP
label_1022d8:
    // 0x1022d8: 0x0  nop
    ctx->pc = 0x1022d8u;
    // NOP
    // 0x1022dc: 0x0  nop
    ctx->pc = 0x1022dcu;
    // NOP
    // 0x1022e0: 0x0  nop
    ctx->pc = 0x1022e0u;
    // NOP
    // 0x1022e4: 0x0  nop
    ctx->pc = 0x1022e4u;
    // NOP
    // 0x1022e8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1022E8u;
    {
        const bool branch_taken_0x1022e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1022ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022E8u;
        // 0x1022ec: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022e8) {
            ctx->pc = 0x1022D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1022d8;
        }
    }
    ctx->pc = 0x1022F0u;
label_1022f0:
    // 0x1022f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1022f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1022f4: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1022F4u;
    {
        const bool branch_taken_0x1022f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F4u;
        // 0x1022f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022f4) {
            ctx->pc = 0x102350u;
            goto label_102350;
        }
    }
    ctx->pc = 0x1022FCu;
    // 0x1022fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1022FCu;
    SET_GPR_U32(ctx, 31, 0x102304u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1022FCu, 0x102304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102304u;
label_102304:
    // 0x102304: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x102304u;
    {
        const bool branch_taken_0x102304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102304u;
        // 0x102308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102304) {
            ctx->pc = 0x102350u;
            goto label_102350;
        }
    }
    ctx->pc = 0x10230Cu;
label_10230c:
    // 0x10230c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102310: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x102310u;
    {
        const bool branch_taken_0x102310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x102314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102310u;
        // 0x102314: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102310) {
            ctx->pc = 0x102338u;
            goto label_102338;
        }
    }
    ctx->pc = 0x102318u;
    // 0x102318: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10231c: 0x0  nop
    ctx->pc = 0x10231cu;
    // NOP
label_102320:
    // 0x102320: 0x0  nop
    ctx->pc = 0x102320u;
    // NOP
    // 0x102324: 0x0  nop
    ctx->pc = 0x102324u;
    // NOP
    // 0x102328: 0x0  nop
    ctx->pc = 0x102328u;
    // NOP
    // 0x10232c: 0x0  nop
    ctx->pc = 0x10232cu;
    // NOP
    // 0x102330: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102330u;
    {
        const bool branch_taken_0x102330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x102334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102330u;
        // 0x102334: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102330) {
            ctx->pc = 0x102320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102320;
        }
    }
    ctx->pc = 0x102338u;
label_102338:
    // 0x102338: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x102338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10233c:
    // 0x10233c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10233Cu;
    {
        const bool branch_taken_0x10233c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10233Cu;
        // 0x102340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10233c) {
            ctx->pc = 0x102350u;
            goto label_102350;
        }
    }
    ctx->pc = 0x102344u;
    // 0x102344: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x102344u;
    SET_GPR_U32(ctx, 31, 0x10234Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x102344u, 0x10234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10234Cu;
label_10234c:
    // 0x10234c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102350:
    // 0x102350: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102354: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x102354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x102358: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x102358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10235c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x102360: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x102360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x102364: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x102364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x102368: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x102368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10236c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x10236cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x102370: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x102370u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x102374: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x102374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x102378: 0x3e00008  jr          $ra
    ctx->pc = 0x102378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102378u;
        // 0x10237c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102380u;
}

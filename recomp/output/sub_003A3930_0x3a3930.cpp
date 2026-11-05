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

// Function: sub_003A3930
// Address: 0x3a3930 - 0x3a3ac8
void sub_003A3930_0x3a3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3930_0x3a3930");
#endif

    switch (ctx->pc) {
        case 0x3a39bcu: goto label_3a39bc;
        case 0x3a39f0u: goto label_3a39f0;
        case 0x3a3a08u: goto label_3a3a08;
        case 0x3a3a4cu: goto label_3a3a4c;
        case 0x3a3a64u: goto label_3a3a64;
        case 0x3a3a7cu: goto label_3a3a7c;
        default: break;
    }

    ctx->pc = 0x3a3930u;

    // 0x3a3930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a3934: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a3934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a393c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a393cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3940: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x3a3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x3a3944: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3948: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a3948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a394c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a394cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3954: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3a3954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3958u;
    {
        const bool branch_taken_0x3a3958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3958u;
        // 0x3a395c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3958) {
            ctx->pc = 0x3A3970u;
            goto label_3a3970;
        }
    }
    ctx->pc = 0x3A3960u;
    // 0x3a3960: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a3964: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3A3964u;
    {
        const bool branch_taken_0x3a3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3964u;
        // 0x3a3968: 0x2484d648  addiu       $a0, $a0, -0x29B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3964) {
            ctx->pc = 0x3A3A00u;
            goto label_3a3a00;
        }
    }
    ctx->pc = 0x3A396Cu;
    // 0x3a396c: 0x0  nop
    ctx->pc = 0x3a396cu;
    // NOP
label_3a3970:
    // 0x3a3970: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x3a3970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x3a3974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3974u;
    {
        const bool branch_taken_0x3a3974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3974u;
        // 0x3a3978: 0x3222003f  andi        $v0, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3974) {
            ctx->pc = 0x3A3988u;
            goto label_3a3988;
        }
    }
    ctx->pc = 0x3A397Cu;
    // 0x3a397c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a397cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a3980: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A3980u;
    {
        const bool branch_taken_0x3a3980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3980u;
        // 0x3a3984: 0x2484d668  addiu       $a0, $a0, -0x2998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3980) {
            ctx->pc = 0x3A3A00u;
            goto label_3a3a00;
        }
    }
    ctx->pc = 0x3A3988u;
label_3a3988:
    // 0x3a3988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3988u;
    {
        const bool branch_taken_0x3a3988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3988u;
        // 0x3a398c: 0x2d020010  sltiu       $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3988) {
            ctx->pc = 0x3A39A0u;
            goto label_3a39a0;
        }
    }
    ctx->pc = 0x3A3990u;
    // 0x3a3990: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a3990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a3994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a3994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3998: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3998u;
    {
        const bool branch_taken_0x3a3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3998u;
        // 0x3a399c: 0x2484d688  addiu       $a0, $a0, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3998) {
            ctx->pc = 0x3A39B4u;
            goto label_3a39b4;
        }
    }
    ctx->pc = 0x3A39A0u;
label_3a39a0:
    // 0x3a39a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A39A0u;
    {
        const bool branch_taken_0x3a39a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39A0u;
        // 0x3a39a4: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39a0) {
            ctx->pc = 0x3A39C8u;
            goto label_3a39c8;
        }
    }
    ctx->pc = 0x3A39A8u;
    // 0x3a39a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a39ac: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3a39acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39b0: 0x2484d6a0  addiu       $a0, $a0, -0x2960
    ctx->pc = 0x3a39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956704));
label_3a39b4:
    // 0x3a39b4: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A39B4u;
    SET_GPR_U32(ctx, 31, 0x3A39BCu);
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A39B4u, 0x3A39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A39BCu;
label_3a39bc:
    // 0x3a39bc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3A39BCu;
    {
        const bool branch_taken_0x3a39bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39BCu;
        // 0x3a39c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39bc) {
            ctx->pc = 0x3A3AACu;
            goto label_3a3aac;
        }
    }
    ctx->pc = 0x3A39C4u;
    // 0x3a39c4: 0x0  nop
    ctx->pc = 0x3a39c4u;
    // NOP
label_3a39c8:
    // 0x3a39c8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3a39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3a39cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a39d0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a39d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a39d4: 0x26101e80  addiu       $s0, $s0, 0x1E80
    ctx->pc = 0x3a39d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
    // 0x3a39d8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3a39d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3a39dc: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x3a39dcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a39e0: 0x15000032  bnez        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A39E0u;
    {
        const bool branch_taken_0x3a39e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39E0u;
        // 0x3a39e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39e0) {
            ctx->pc = 0x3A3AACu;
            goto label_3a3aac;
        }
    }
    ctx->pc = 0x3A39E8u;
    // 0x3a39e8: 0xc0e8df6  jal         func_3A37D8
    ctx->pc = 0x3A39E8u;
    SET_GPR_U32(ctx, 31, 0x3A39F0u);
    ctx->pc = 0x3A37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37D8u, 0x3A39E8u, 0x3A39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A39F0u;
label_3a39f0:
    // 0x3a39f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A39F0u;
    {
        const bool branch_taken_0x3a39f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39F0u;
        // 0x3a39f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39f0) {
            ctx->pc = 0x3A3A10u;
            goto label_3a3a10;
        }
    }
    ctx->pc = 0x3A39F8u;
    // 0x3a39f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a39f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a39fc: 0x2484d6b8  addiu       $a0, $a0, -0x2948
    ctx->pc = 0x3a39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956728));
label_3a3a00:
    // 0x3a3a00: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A3A00u;
    SET_GPR_U32(ctx, 31, 0x3A3A08u);
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A3A00u, 0x3A3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A08u;
label_3a3a08:
    // 0x3a3a08: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3A3A08u;
    {
        const bool branch_taken_0x3a3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A08u;
        // 0x3a3a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a08) {
            ctx->pc = 0x3A3AACu;
            goto label_3a3aac;
        }
    }
    ctx->pc = 0x3A3A10u;
label_3a3a10:
    // 0x3a3a10: 0x2623ffc0  addiu       $v1, $s1, -0x40
    ctx->pc = 0x3a3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x3a3a14: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3a3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3a3a18: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x3a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3a3a1c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3a3a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3a3a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a3a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a3a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a2c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3a3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3a3a30: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x3a3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x3a3a34: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x3a3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x3a3a38: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3a3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x3a3a3c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3a3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3a3a40: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3a3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x3a3a44: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A3A44u;
    SET_GPR_U32(ctx, 31, 0x3A3A4Cu);
    ctx->pc = 0x3A3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A44u;
    // 0x3a3a48: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A3A44u, 0x3A3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A4Cu;
label_3a3a4c:
    // 0x3a3a4c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a3a50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a3a54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a3a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a58: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a3a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a3a5c: 0xc0f2878  jal         func_3CA1E0
    ctx->pc = 0x3A3A5Cu;
    SET_GPR_U32(ctx, 31, 0x3A3A64u);
    ctx->pc = 0x3A3A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A5Cu;
    // 0x3a3a60: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA1E0u, 0x3A3A5Cu, 0x3A3A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A64u;
label_3a3a64:
    // 0x3a3a64: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a3a68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a3a6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a3a74: 0xc0f28c4  jal         func_3CA310
    ctx->pc = 0x3A3A74u;
    SET_GPR_U32(ctx, 31, 0x3A3A7Cu);
    ctx->pc = 0x3A3A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A74u;
    // 0x3a3a78: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA310u, 0x3A3A74u, 0x3A3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A7Cu;
label_3a3a7c:
    // 0x3a3a7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3a3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3a3a80: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3a3a84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3a88: 0x246338b0  addiu       $v1, $v1, 0x38B0
    ctx->pc = 0x3a3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14512));
    // 0x3a3a8c: 0x24423898  addiu       $v0, $v0, 0x3898
    ctx->pc = 0x3a3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14488));
    // 0x3a3a90: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3a3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3a3a94: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3a3a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3a98: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3a3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x3a3a9c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3a3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3a3aa0: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x3a3aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3aa4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3a3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3a3aa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a3aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3aac:
    // 0x3a3aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3ab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a3ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3ab8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a3ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AC0u;
        // 0x3a3ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3AC8u;
}

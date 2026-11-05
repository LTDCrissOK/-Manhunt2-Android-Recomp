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

// Function: sub_00315BD0
// Address: 0x315bd0 - 0x315de8
void sub_00315BD0_0x315bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315BD0_0x315bd0");
#endif

    switch (ctx->pc) {
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        case 0x315c30u: goto label_315c30;
        case 0x315c34u: goto label_315c34;
        case 0x315c38u: goto label_315c38;
        case 0x315c3cu: goto label_315c3c;
        case 0x315c40u: goto label_315c40;
        case 0x315c44u: goto label_315c44;
        case 0x315c48u: goto label_315c48;
        case 0x315c4cu: goto label_315c4c;
        case 0x315c50u: goto label_315c50;
        case 0x315c54u: goto label_315c54;
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        case 0x315c68u: goto label_315c68;
        case 0x315c6cu: goto label_315c6c;
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        case 0x315c7cu: goto label_315c7c;
        case 0x315c80u: goto label_315c80;
        case 0x315c84u: goto label_315c84;
        case 0x315c88u: goto label_315c88;
        case 0x315c8cu: goto label_315c8c;
        case 0x315c90u: goto label_315c90;
        case 0x315c94u: goto label_315c94;
        case 0x315c98u: goto label_315c98;
        case 0x315c9cu: goto label_315c9c;
        case 0x315ca0u: goto label_315ca0;
        case 0x315ca4u: goto label_315ca4;
        case 0x315ca8u: goto label_315ca8;
        case 0x315cacu: goto label_315cac;
        case 0x315cb0u: goto label_315cb0;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cb8u: goto label_315cb8;
        case 0x315cbcu: goto label_315cbc;
        case 0x315cc0u: goto label_315cc0;
        case 0x315cc4u: goto label_315cc4;
        case 0x315cc8u: goto label_315cc8;
        case 0x315cccu: goto label_315ccc;
        case 0x315cd0u: goto label_315cd0;
        case 0x315cd4u: goto label_315cd4;
        case 0x315cd8u: goto label_315cd8;
        case 0x315cdcu: goto label_315cdc;
        case 0x315ce0u: goto label_315ce0;
        case 0x315ce4u: goto label_315ce4;
        case 0x315ce8u: goto label_315ce8;
        case 0x315cecu: goto label_315cec;
        case 0x315cf0u: goto label_315cf0;
        case 0x315cf4u: goto label_315cf4;
        case 0x315cf8u: goto label_315cf8;
        case 0x315cfcu: goto label_315cfc;
        case 0x315d00u: goto label_315d00;
        case 0x315d04u: goto label_315d04;
        case 0x315d08u: goto label_315d08;
        case 0x315d0cu: goto label_315d0c;
        case 0x315d10u: goto label_315d10;
        case 0x315d14u: goto label_315d14;
        case 0x315d18u: goto label_315d18;
        case 0x315d1cu: goto label_315d1c;
        case 0x315d20u: goto label_315d20;
        case 0x315d24u: goto label_315d24;
        case 0x315d28u: goto label_315d28;
        case 0x315d2cu: goto label_315d2c;
        case 0x315d30u: goto label_315d30;
        case 0x315d34u: goto label_315d34;
        case 0x315d38u: goto label_315d38;
        case 0x315d3cu: goto label_315d3c;
        case 0x315d40u: goto label_315d40;
        case 0x315d44u: goto label_315d44;
        case 0x315d48u: goto label_315d48;
        case 0x315d4cu: goto label_315d4c;
        case 0x315d50u: goto label_315d50;
        case 0x315d54u: goto label_315d54;
        case 0x315d58u: goto label_315d58;
        case 0x315d5cu: goto label_315d5c;
        case 0x315d60u: goto label_315d60;
        case 0x315d64u: goto label_315d64;
        case 0x315d68u: goto label_315d68;
        case 0x315d6cu: goto label_315d6c;
        case 0x315d70u: goto label_315d70;
        case 0x315d74u: goto label_315d74;
        case 0x315d78u: goto label_315d78;
        case 0x315d7cu: goto label_315d7c;
        case 0x315d80u: goto label_315d80;
        case 0x315d84u: goto label_315d84;
        case 0x315d88u: goto label_315d88;
        case 0x315d8cu: goto label_315d8c;
        case 0x315d90u: goto label_315d90;
        case 0x315d94u: goto label_315d94;
        case 0x315d98u: goto label_315d98;
        case 0x315d9cu: goto label_315d9c;
        case 0x315da0u: goto label_315da0;
        case 0x315da4u: goto label_315da4;
        case 0x315da8u: goto label_315da8;
        case 0x315dacu: goto label_315dac;
        case 0x315db0u: goto label_315db0;
        case 0x315db4u: goto label_315db4;
        case 0x315db8u: goto label_315db8;
        case 0x315dbcu: goto label_315dbc;
        case 0x315dc0u: goto label_315dc0;
        case 0x315dc4u: goto label_315dc4;
        case 0x315dc8u: goto label_315dc8;
        case 0x315dccu: goto label_315dcc;
        case 0x315dd0u: goto label_315dd0;
        case 0x315dd4u: goto label_315dd4;
        case 0x315dd8u: goto label_315dd8;
        case 0x315ddcu: goto label_315ddc;
        case 0x315de0u: goto label_315de0;
        case 0x315de4u: goto label_315de4;
        default: break;
    }

    ctx->pc = 0x315bd0u;

label_315bd0:
    // 0x315bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_315bd4:
    // 0x315bd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315bd8:
    // 0x315bd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x315bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_315bdc:
    // 0x315bdc: 0x8c62bd7c  lw          $v0, -0x4284($v1)
    ctx->pc = 0x315bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950268)));
label_315be0:
    // 0x315be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x315be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315be4:
    // 0x315be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x315be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_315be8:
    // 0x315be8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x315be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_315bec:
    // 0x315bec: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
label_315bf0:
    if (ctx->pc == 0x315BF0u) {
        ctx->pc = 0x315BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BECu;
        // 0x315bf0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BF4u;
        goto label_315bf4;
    }
    ctx->pc = 0x315BECu;
    {
        const bool branch_taken_0x315bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BECu;
        // 0x315bf0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bec) {
            ctx->pc = 0x315DE8u;
            return;
        }
    }
    ctx->pc = 0x315BF4u;
label_315bf4:
    // 0x315bf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x315bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315bf8:
    // 0x315bf8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x315bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_315bfc:
    // 0x315bfc: 0x24844d40  addiu       $a0, $a0, 0x4D40
    ctx->pc = 0x315bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
label_315c00:
    // 0x315c00: 0xc0ae686  jal         func_2B9A18
label_315c04:
    if (ctx->pc == 0x315C04u) {
        ctx->pc = 0x315C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C00u;
        // 0x315c04: 0xac70bd7c  sw          $s0, -0x4284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950268), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C08u;
        goto label_315c08;
    }
    ctx->pc = 0x315C00u;
    SET_GPR_U32(ctx, 31, 0x315C08u);
    ctx->pc = 0x315C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C00u;
    // 0x315c04: 0xac70bd7c  sw          $s0, -0x4284($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950268), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A18u, 0x315C00u, 0x315C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C08u;
label_315c08:
    // 0x315c08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315c0c:
    // 0x315c0c: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x315c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_315c10:
    // 0x315c10: 0xc0b941c  jal         func_2E5070
label_315c14:
    if (ctx->pc == 0x315C14u) {
        ctx->pc = 0x315C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C10u;
        // 0x315c14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C18u;
        goto label_315c18;
    }
    ctx->pc = 0x315C10u;
    SET_GPR_U32(ctx, 31, 0x315C18u);
    ctx->pc = 0x315C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C10u;
    // 0x315c14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5070u, 0x315C10u, 0x315C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C18u;
label_315c18:
    // 0x315c18: 0x16300009  bne         $s1, $s0, . + 4 + (0x9 << 2)
label_315c1c:
    if (ctx->pc == 0x315C1Cu) {
        ctx->pc = 0x315C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C18u;
        // 0x315c1c: 0x8e44bd50  lw          $a0, -0x42B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C20u;
        goto label_315c20;
    }
    ctx->pc = 0x315C18u;
    {
        const bool branch_taken_0x315c18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x315C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C18u;
        // 0x315c1c: 0x8e44bd50  lw          $a0, -0x42B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c18) {
            ctx->pc = 0x315C40u;
            goto label_315c40;
        }
    }
    ctx->pc = 0x315C20u;
label_315c20:
    // 0x315c20: 0x8e42bd50  lw          $v0, -0x42B0($s2)
    ctx->pc = 0x315c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
label_315c24:
    // 0x315c24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x315c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315c28:
    // 0x315c28: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x315c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315c2c:
    // 0x315c2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x315c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315c30:
    // 0x315c30: 0x0  nop
    ctx->pc = 0x315c30u;
    // NOP
label_315c34:
    // 0x315c34: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_315c38:
    if (ctx->pc == 0x315C38u) {
        ctx->pc = 0x315C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C34u;
        // 0x315c38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C3Cu;
        goto label_315c3c;
    }
    ctx->pc = 0x315C34u;
    {
        const bool branch_taken_0x315c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315c34) {
            ctx->pc = 0x315C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315C34u;
            // 0x315c38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315C40u;
            goto label_315c40;
        }
    }
    ctx->pc = 0x315C3Cu;
label_315c3c:
    // 0x315c3c: 0x8e44bd50  lw          $a0, -0x42B0($s2)
    ctx->pc = 0x315c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
label_315c40:
    // 0x315c40: 0x8c8211b4  lw          $v0, 0x11B4($a0)
    ctx->pc = 0x315c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4532)));
label_315c44:
    // 0x315c44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_315c48:
    if (ctx->pc == 0x315C48u) {
        ctx->pc = 0x315C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C44u;
        // 0x315c48: 0x8e45bd50  lw          $a1, -0x42B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C4Cu;
        goto label_315c4c;
    }
    ctx->pc = 0x315C44u;
    {
        const bool branch_taken_0x315c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C44u;
        // 0x315c48: 0x8e45bd50  lw          $a1, -0x42B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c44) {
            ctx->pc = 0x315C5Cu;
            goto label_315c5c;
        }
    }
    ctx->pc = 0x315C4Cu;
label_315c4c:
    // 0x315c4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x315c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_315c50:
    // 0x315c50: 0x8c432b50  lw          $v1, 0x2B50($v0)
    ctx->pc = 0x315c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11088)));
label_315c54:
    // 0x315c54: 0xac8311b4  sw          $v1, 0x11B4($a0)
    ctx->pc = 0x315c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4532), GPR_U32(ctx, 3));
label_315c58:
    // 0x315c58: 0x8e45bd50  lw          $a1, -0x42B0($s2)
    ctx->pc = 0x315c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
label_315c5c:
    // 0x315c5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x315c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_315c60:
    // 0x315c60: 0x8c462c1c  lw          $a2, 0x2C1C($v0)
    ctx->pc = 0x315c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
label_315c64:
    // 0x315c64: 0x8ca311b0  lw          $v1, 0x11B0($a1)
    ctx->pc = 0x315c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4528)));
label_315c68:
    // 0x315c68: 0x8ca411b4  lw          $a0, 0x11B4($a1)
    ctx->pc = 0x315c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4532)));
label_315c6c:
    // 0x315c6c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x315c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_315c70:
    // 0x315c70: 0xc0a2250  jal         func_288940
label_315c74:
    if (ctx->pc == 0x315C74u) {
        ctx->pc = 0x315C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C70u;
        // 0x315c74: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C78u;
        goto label_315c78;
    }
    ctx->pc = 0x315C70u;
    SET_GPR_U32(ctx, 31, 0x315C78u);
    ctx->pc = 0x315C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C70u;
    // 0x315c74: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288940u, 0x315C70u, 0x315C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C78u;
label_315c78:
    // 0x315c78: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x315c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_315c7c:
    // 0x315c7c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_315c80:
    if (ctx->pc == 0x315C80u) {
        ctx->pc = 0x315C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C7Cu;
        // 0x315c80: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C84u;
        goto label_315c84;
    }
    ctx->pc = 0x315C7Cu;
    {
        const bool branch_taken_0x315c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C7Cu;
        // 0x315c80: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c7c) {
            ctx->pc = 0x315DE8u;
            return;
        }
    }
    ctx->pc = 0x315C84u;
label_315c84:
    // 0x315c84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_315c88:
    // 0x315c88: 0x244235e0  addiu       $v0, $v0, 0x35E0
    ctx->pc = 0x315c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
label_315c8c:
    // 0x315c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315c90:
    // 0x315c90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x315c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315c94:
    // 0x315c94: 0x800008  jr          $a0
label_315c98:
    if (ctx->pc == 0x315C98u) {
        ctx->pc = 0x315C9Cu;
        goto label_315c9c;
    }
    ctx->pc = 0x315C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x315C9Cu: goto label_315c9c;
            case 0x315CFCu: goto label_315cfc;
            case 0x315D8Cu: goto label_315d8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x315C9Cu;
label_315c9c:
    // 0x315c9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315ca0:
    // 0x315ca0: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x315ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945416)));
label_315ca4:
    // 0x315ca4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_315ca8:
    if (ctx->pc == 0x315CA8u) {
        ctx->pc = 0x315CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CA4u;
        // 0x315ca8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CACu;
        goto label_315cac;
    }
    ctx->pc = 0x315CA4u;
    {
        const bool branch_taken_0x315ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CA4u;
        // 0x315ca8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ca4) {
            ctx->pc = 0x315CB8u;
            goto label_315cb8;
        }
    }
    ctx->pc = 0x315CACu;
label_315cac:
    // 0x315cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315cb0:
    // 0x315cb0: 0xac62aa88  sw          $v0, -0x5578($v1)
    ctx->pc = 0x315cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945416), GPR_U32(ctx, 2));
label_315cb4:
    // 0x315cb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315cb8:
    // 0x315cb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x315cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315cbc:
    // 0x315cbc: 0xc0a2306  jal         func_288C18
label_315cc0:
    if (ctx->pc == 0x315CC0u) {
        ctx->pc = 0x315CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CBCu;
        // 0x315cc0: 0xac40bd6c  sw          $zero, -0x4294($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CC4u;
        goto label_315cc4;
    }
    ctx->pc = 0x315CBCu;
    SET_GPR_U32(ctx, 31, 0x315CC4u);
    ctx->pc = 0x315CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CBCu;
    // 0x315cc0: 0xac40bd6c  sw          $zero, -0x4294($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x315CBCu, 0x315CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CC4u;
label_315cc4:
    // 0x315cc4: 0xc0a4758  jal         func_291D60
label_315cc8:
    if (ctx->pc == 0x315CC8u) {
        ctx->pc = 0x315CCCu;
        goto label_315ccc;
    }
    ctx->pc = 0x315CC4u;
    SET_GPR_U32(ctx, 31, 0x315CCCu);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x315CC4u, 0x315CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CCCu;
label_315ccc:
    // 0x315ccc: 0xa0400061  sb          $zero, 0x61($v0)
    ctx->pc = 0x315cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 0));
label_315cd0:
    // 0x315cd0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x315cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_315cd4:
    // 0x315cd4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315cd8:
    // 0x315cd8: 0x2483a330  addiu       $v1, $a0, -0x5CD0
    ctx->pc = 0x315cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943536));
label_315cdc:
    // 0x315cdc: 0xac40a7cc  sw          $zero, -0x5834($v0)
    ctx->pc = 0x315cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944716), GPR_U32(ctx, 0));
label_315ce0:
    // 0x315ce0: 0xac80a330  sw          $zero, -0x5CD0($a0)
    ctx->pc = 0x315ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943536), GPR_U32(ctx, 0));
label_315ce4:
    // 0x315ce4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x315ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_315ce8:
    // 0x315ce8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x315ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_315cec:
    // 0x315cec: 0xc0b699c  jal         func_2DA670
label_315cf0:
    if (ctx->pc == 0x315CF0u) {
        ctx->pc = 0x315CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CECu;
        // 0x315cf0: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CF4u;
        goto label_315cf4;
    }
    ctx->pc = 0x315CECu;
    SET_GPR_U32(ctx, 31, 0x315CF4u);
    ctx->pc = 0x315CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CECu;
    // 0x315cf0: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA670u, 0x315CECu, 0x315CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CF4u;
label_315cf4:
    // 0x315cf4: 0x10000023  b           . + 4 + (0x23 << 2)
label_315cf8:
    if (ctx->pc == 0x315CF8u) {
        ctx->pc = 0x315CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CF4u;
        // 0x315cf8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CFCu;
        goto label_315cfc;
    }
    ctx->pc = 0x315CF4u;
    {
        const bool branch_taken_0x315cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CF4u;
        // 0x315cf8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cf4) {
            ctx->pc = 0x315D84u;
            goto label_315d84;
        }
    }
    ctx->pc = 0x315CFCu;
label_315cfc:
    // 0x315cfc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x315cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_315d00:
    // 0x315d00: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x315d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_315d04:
    // 0x315d04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x315d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_315d08:
    // 0x315d08: 0x8ca4aa88  lw          $a0, -0x5578($a1)
    ctx->pc = 0x315d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945416)));
label_315d0c:
    // 0x315d0c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_315d10:
    if (ctx->pc == 0x315D10u) {
        ctx->pc = 0x315D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D0Cu;
        // 0x315d10: 0xac43259c  sw          $v1, 0x259C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D14u;
        goto label_315d14;
    }
    ctx->pc = 0x315D0Cu;
    {
        const bool branch_taken_0x315d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x315D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D0Cu;
        // 0x315d10: 0xac43259c  sw          $v1, 0x259C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d0c) {
            ctx->pc = 0x315D1Cu;
            goto label_315d1c;
        }
    }
    ctx->pc = 0x315D14u;
label_315d14:
    // 0x315d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315d18:
    // 0x315d18: 0xaca2aa88  sw          $v0, -0x5578($a1)
    ctx->pc = 0x315d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294945416), GPR_U32(ctx, 2));
label_315d1c:
    // 0x315d1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315d20:
    // 0x315d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315d24:
    // 0x315d24: 0xc0ab1e6  jal         func_2AC798
label_315d28:
    if (ctx->pc == 0x315D28u) {
        ctx->pc = 0x315D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D24u;
        // 0x315d28: 0xac62bd6c  sw          $v0, -0x4294($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D2Cu;
        goto label_315d2c;
    }
    ctx->pc = 0x315D24u;
    SET_GPR_U32(ctx, 31, 0x315D2Cu);
    ctx->pc = 0x315D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D24u;
    // 0x315d28: 0xac62bd6c  sw          $v0, -0x4294($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC798u, 0x315D24u, 0x315D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D2Cu;
label_315d2c:
    // 0x315d2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315d30:
    // 0x315d30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x315d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_315d34:
    // 0x315d34: 0x8c64a4e0  lw          $a0, -0x5B20($v1)
    ctx->pc = 0x315d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943968)));
label_315d38:
    // 0x315d38: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x315d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_315d3c:
    // 0x315d3c: 0x8c482c18  lw          $t0, 0x2C18($v0)
    ctx->pc = 0x315d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11288)));
label_315d40:
    // 0x315d40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315d44:
    // 0x315d44: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x315d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_315d48:
    // 0x315d48: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x315d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_315d4c:
    // 0x315d4c: 0x8c456570  lw          $a1, 0x6570($v0)
    ctx->pc = 0x315d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25968)));
label_315d50:
    // 0x315d50: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x315d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
label_315d54:
    // 0x315d54: 0x8c62a4e4  lw          $v0, -0x5B1C($v1)
    ctx->pc = 0x315d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943972)));
label_315d58:
    // 0x315d58: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x315d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_315d5c:
    // 0x315d5c: 0x8cc365b0  lw          $v1, 0x65B0($a2)
    ctx->pc = 0x315d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26032)));
label_315d60:
    // 0x315d60: 0x3c0a005a  lui         $t2, 0x5A
    ctx->pc = 0x315d60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)90 << 16));
label_315d64:
    // 0x315d64: 0x8ce92c14  lw          $t1, 0x2C14($a3)
    ctx->pc = 0x315d64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11284)));
label_315d68:
    // 0x315d68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x315d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_315d6c:
    // 0x315d6c: 0x8d476590  lw          $a3, 0x6590($t2)
    ctx->pc = 0x315d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 26000)));
label_315d70:
    // 0x315d70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x315d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_315d74:
    // 0x315d74: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x315d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_315d78:
    // 0x315d78: 0xc0ab220  jal         func_2AC880
label_315d7c:
    if (ctx->pc == 0x315D7Cu) {
        ctx->pc = 0x315D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D78u;
        // 0x315d7c: 0x1094823  subu        $t1, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D80u;
        goto label_315d80;
    }
    ctx->pc = 0x315D78u;
    SET_GPR_U32(ctx, 31, 0x315D80u);
    ctx->pc = 0x315D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D78u;
    // 0x315d7c: 0x1094823  subu        $t1, $t0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC880u, 0x315D78u, 0x315D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D80u;
label_315d80:
    // 0x315d80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x315d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_315d84:
    // 0x315d84: 0x10000018  b           . + 4 + (0x18 << 2)
label_315d88:
    if (ctx->pc == 0x315D88u) {
        ctx->pc = 0x315D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D84u;
        // 0x315d88: 0xac402b34  sw          $zero, 0x2B34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D8Cu;
        goto label_315d8c;
    }
    ctx->pc = 0x315D84u;
    {
        const bool branch_taken_0x315d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D84u;
        // 0x315d88: 0xac402b34  sw          $zero, 0x2B34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d84) {
            ctx->pc = 0x315DE8u;
            return;
        }
    }
    ctx->pc = 0x315D8Cu;
label_315d8c:
    // 0x315d8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x315d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_315d90:
    // 0x315d90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_315d94:
    // 0x315d94: 0xac82bd6c  sw          $v0, -0x4294($a0)
    ctx->pc = 0x315d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950252), GPR_U32(ctx, 2));
label_315d98:
    // 0x315d98: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x315d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_315d9c:
    // 0x315d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315da0:
    // 0x315da0: 0x8e44bd50  lw          $a0, -0x42B0($s2)
    ctx->pc = 0x315da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
label_315da4:
    // 0x315da4: 0xaca3bd60  sw          $v1, -0x42A0($a1)
    ctx->pc = 0x315da4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950240), GPR_U32(ctx, 3));
label_315da8:
    // 0x315da8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x315da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315dac:
    // 0x315dac: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x315dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315db0:
    // 0x315db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x315db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315db4:
    // 0x315db4: 0x0  nop
    ctx->pc = 0x315db4u;
    // NOP
label_315db8:
    // 0x315db8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_315dbc:
    if (ctx->pc == 0x315DBCu) {
        ctx->pc = 0x315DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DB8u;
        // 0x315dbc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DC0u;
        goto label_315dc0;
    }
    ctx->pc = 0x315DB8u;
    {
        const bool branch_taken_0x315db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DB8u;
        // 0x315dbc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315db8) {
            ctx->pc = 0x315DD4u;
            goto label_315dd4;
        }
    }
    ctx->pc = 0x315DC0u;
label_315dc0:
    // 0x315dc0: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x315dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_315dc4:
    // 0x315dc4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x315dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_315dc8:
    // 0x315dc8: 0x40f809  jalr        $v0
label_315dcc:
    if (ctx->pc == 0x315DCCu) {
        ctx->pc = 0x315DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DC8u;
        // 0x315dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DD0u;
        goto label_315dd0;
    }
    ctx->pc = 0x315DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315DD0u);
        ctx->pc = 0x315DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DC8u;
        // 0x315dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315DC8u, 0x315DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315DD0u;
label_315dd0:
    // 0x315dd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315dd4:
    // 0x315dd4: 0x8c62bd5c  lw          $v0, -0x42A4($v1)
    ctx->pc = 0x315dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950236)));
label_315dd8:
    // 0x315dd8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_315ddc:
    if (ctx->pc == 0x315DDCu) {
        ctx->pc = 0x315DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DD8u;
        // 0x315ddc: 0xac60bd5c  sw          $zero, -0x42A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DE0u;
        goto label_315de0;
    }
    ctx->pc = 0x315DD8u;
    {
        const bool branch_taken_0x315dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315dd8) {
            ctx->pc = 0x315DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315DD8u;
            // 0x315ddc: 0xac60bd5c  sw          $zero, -0x42A4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315DE0u;
            goto label_315de0;
        }
    }
    ctx->pc = 0x315DE0u;
label_315de0:
    // 0x315de0: 0xc0a1b2c  jal         func_286CB0
label_315de4:
    if (ctx->pc == 0x315DE4u) {
        ctx->pc = 0x315DE8u;
        goto label_fallthrough_0x315de0;
    }
    ctx->pc = 0x315DE0u;
    SET_GPR_U32(ctx, 31, 0x315DE8u);
    ctx->pc = 0x286CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286CB0u, 0x315DE0u, 0x315DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x315de0:
    ctx->pc = 0x315DE8u;
}

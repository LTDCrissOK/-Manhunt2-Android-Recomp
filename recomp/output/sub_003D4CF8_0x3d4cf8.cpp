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

// Function: sub_003D4CF8
// Address: 0x3d4cf8 - 0x3d4f18
void sub_003D4CF8_0x3d4cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4CF8_0x3d4cf8");
#endif

    switch (ctx->pc) {
        case 0x3d4cf8u: goto label_3d4cf8;
        case 0x3d4cfcu: goto label_3d4cfc;
        case 0x3d4d00u: goto label_3d4d00;
        case 0x3d4d04u: goto label_3d4d04;
        case 0x3d4d08u: goto label_3d4d08;
        case 0x3d4d0cu: goto label_3d4d0c;
        case 0x3d4d10u: goto label_3d4d10;
        case 0x3d4d14u: goto label_3d4d14;
        case 0x3d4d18u: goto label_3d4d18;
        case 0x3d4d1cu: goto label_3d4d1c;
        case 0x3d4d20u: goto label_3d4d20;
        case 0x3d4d24u: goto label_3d4d24;
        case 0x3d4d28u: goto label_3d4d28;
        case 0x3d4d2cu: goto label_3d4d2c;
        case 0x3d4d30u: goto label_3d4d30;
        case 0x3d4d34u: goto label_3d4d34;
        case 0x3d4d38u: goto label_3d4d38;
        case 0x3d4d3cu: goto label_3d4d3c;
        case 0x3d4d40u: goto label_3d4d40;
        case 0x3d4d44u: goto label_3d4d44;
        case 0x3d4d48u: goto label_3d4d48;
        case 0x3d4d4cu: goto label_3d4d4c;
        case 0x3d4d50u: goto label_3d4d50;
        case 0x3d4d54u: goto label_3d4d54;
        case 0x3d4d58u: goto label_3d4d58;
        case 0x3d4d5cu: goto label_3d4d5c;
        case 0x3d4d60u: goto label_3d4d60;
        case 0x3d4d64u: goto label_3d4d64;
        case 0x3d4d68u: goto label_3d4d68;
        case 0x3d4d6cu: goto label_3d4d6c;
        case 0x3d4d70u: goto label_3d4d70;
        case 0x3d4d74u: goto label_3d4d74;
        case 0x3d4d78u: goto label_3d4d78;
        case 0x3d4d7cu: goto label_3d4d7c;
        case 0x3d4d80u: goto label_3d4d80;
        case 0x3d4d84u: goto label_3d4d84;
        case 0x3d4d88u: goto label_3d4d88;
        case 0x3d4d8cu: goto label_3d4d8c;
        case 0x3d4d90u: goto label_3d4d90;
        case 0x3d4d94u: goto label_3d4d94;
        case 0x3d4d98u: goto label_3d4d98;
        case 0x3d4d9cu: goto label_3d4d9c;
        case 0x3d4da0u: goto label_3d4da0;
        case 0x3d4da4u: goto label_3d4da4;
        case 0x3d4da8u: goto label_3d4da8;
        case 0x3d4dacu: goto label_3d4dac;
        case 0x3d4db0u: goto label_3d4db0;
        case 0x3d4db4u: goto label_3d4db4;
        case 0x3d4db8u: goto label_3d4db8;
        case 0x3d4dbcu: goto label_3d4dbc;
        case 0x3d4dc0u: goto label_3d4dc0;
        case 0x3d4dc4u: goto label_3d4dc4;
        case 0x3d4dc8u: goto label_3d4dc8;
        case 0x3d4dccu: goto label_3d4dcc;
        case 0x3d4dd0u: goto label_3d4dd0;
        case 0x3d4dd4u: goto label_3d4dd4;
        case 0x3d4dd8u: goto label_3d4dd8;
        case 0x3d4ddcu: goto label_3d4ddc;
        case 0x3d4de0u: goto label_3d4de0;
        case 0x3d4de4u: goto label_3d4de4;
        case 0x3d4de8u: goto label_3d4de8;
        case 0x3d4decu: goto label_3d4dec;
        case 0x3d4df0u: goto label_3d4df0;
        case 0x3d4df4u: goto label_3d4df4;
        case 0x3d4df8u: goto label_3d4df8;
        case 0x3d4dfcu: goto label_3d4dfc;
        case 0x3d4e00u: goto label_3d4e00;
        case 0x3d4e04u: goto label_3d4e04;
        case 0x3d4e08u: goto label_3d4e08;
        case 0x3d4e0cu: goto label_3d4e0c;
        case 0x3d4e10u: goto label_3d4e10;
        case 0x3d4e14u: goto label_3d4e14;
        case 0x3d4e18u: goto label_3d4e18;
        case 0x3d4e1cu: goto label_3d4e1c;
        case 0x3d4e20u: goto label_3d4e20;
        case 0x3d4e24u: goto label_3d4e24;
        case 0x3d4e28u: goto label_3d4e28;
        case 0x3d4e2cu: goto label_3d4e2c;
        case 0x3d4e30u: goto label_3d4e30;
        case 0x3d4e34u: goto label_3d4e34;
        case 0x3d4e38u: goto label_3d4e38;
        case 0x3d4e3cu: goto label_3d4e3c;
        case 0x3d4e40u: goto label_3d4e40;
        case 0x3d4e44u: goto label_3d4e44;
        case 0x3d4e48u: goto label_3d4e48;
        case 0x3d4e4cu: goto label_3d4e4c;
        case 0x3d4e50u: goto label_3d4e50;
        case 0x3d4e54u: goto label_3d4e54;
        case 0x3d4e58u: goto label_3d4e58;
        case 0x3d4e5cu: goto label_3d4e5c;
        case 0x3d4e60u: goto label_3d4e60;
        case 0x3d4e64u: goto label_3d4e64;
        case 0x3d4e68u: goto label_3d4e68;
        case 0x3d4e6cu: goto label_3d4e6c;
        case 0x3d4e70u: goto label_3d4e70;
        case 0x3d4e74u: goto label_3d4e74;
        case 0x3d4e78u: goto label_3d4e78;
        case 0x3d4e7cu: goto label_3d4e7c;
        case 0x3d4e80u: goto label_3d4e80;
        case 0x3d4e84u: goto label_3d4e84;
        case 0x3d4e88u: goto label_3d4e88;
        case 0x3d4e8cu: goto label_3d4e8c;
        case 0x3d4e90u: goto label_3d4e90;
        case 0x3d4e94u: goto label_3d4e94;
        case 0x3d4e98u: goto label_3d4e98;
        case 0x3d4e9cu: goto label_3d4e9c;
        case 0x3d4ea0u: goto label_3d4ea0;
        case 0x3d4ea4u: goto label_3d4ea4;
        case 0x3d4ea8u: goto label_3d4ea8;
        case 0x3d4eacu: goto label_3d4eac;
        case 0x3d4eb0u: goto label_3d4eb0;
        case 0x3d4eb4u: goto label_3d4eb4;
        case 0x3d4eb8u: goto label_3d4eb8;
        case 0x3d4ebcu: goto label_3d4ebc;
        case 0x3d4ec0u: goto label_3d4ec0;
        case 0x3d4ec4u: goto label_3d4ec4;
        case 0x3d4ec8u: goto label_3d4ec8;
        case 0x3d4eccu: goto label_3d4ecc;
        case 0x3d4ed0u: goto label_3d4ed0;
        case 0x3d4ed4u: goto label_3d4ed4;
        case 0x3d4ed8u: goto label_3d4ed8;
        case 0x3d4edcu: goto label_3d4edc;
        case 0x3d4ee0u: goto label_3d4ee0;
        case 0x3d4ee4u: goto label_3d4ee4;
        case 0x3d4ee8u: goto label_3d4ee8;
        case 0x3d4eecu: goto label_3d4eec;
        case 0x3d4ef0u: goto label_3d4ef0;
        case 0x3d4ef4u: goto label_3d4ef4;
        case 0x3d4ef8u: goto label_3d4ef8;
        case 0x3d4efcu: goto label_3d4efc;
        case 0x3d4f00u: goto label_3d4f00;
        case 0x3d4f04u: goto label_3d4f04;
        case 0x3d4f08u: goto label_3d4f08;
        case 0x3d4f0cu: goto label_3d4f0c;
        case 0x3d4f10u: goto label_3d4f10;
        case 0x3d4f14u: goto label_3d4f14;
        default: break;
    }

    ctx->pc = 0x3d4cf8u;

label_3d4cf8:
    // 0x3d4cf8: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x3d4cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_3d4cfc:
    // 0x3d4cfc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d4d00:
    // 0x3d4d00: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x3d4d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_3d4d04:
    // 0x3d4d04: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x3d4d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_3d4d08:
    // 0x3d4d08: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x3d4d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_3d4d0c:
    // 0x3d4d0c: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x3d4d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_3d4d10:
    // 0x3d4d10: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x3d4d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_3d4d14:
    // 0x3d4d14: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x3d4d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_3d4d18:
    // 0x3d4d18: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x3d4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_3d4d1c:
    // 0x3d4d1c: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x3d4d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_3d4d20:
    // 0x3d4d20: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x3d4d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_3d4d24:
    // 0x3d4d24: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x3d4d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_3d4d28:
    // 0x3d4d28: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x3d4d28u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_3d4d2c:
    // 0x3d4d2c: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x3d4d2cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_3d4d30:
    // 0x3d4d30: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x3d4d30u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_3d4d34:
    // 0x3d4d34: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x3d4d34u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_3d4d38:
    // 0x3d4d38: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x3d4d38u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_3d4d3c:
    // 0x3d4d3c: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x3d4d3cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_3d4d40:
    // 0x3d4d40: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x3d4d40u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_3d4d44:
    // 0x3d4d44: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x3d4d44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_3d4d48:
    // 0x3d4d48: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x3d4d48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_3d4d4c:
    // 0x3d4d4c: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x3d4d4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_3d4d50:
    // 0x3d4d50: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x3d4d50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_3d4d54:
    // 0x3d4d54: 0xe7b406f0  swc1        $f20, 0x6F0($sp)
    ctx->pc = 0x3d4d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_3d4d58:
    // 0x3d4d58: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d4d5c:
    // 0x3d4d5c: 0x40f809  jalr        $v0
label_3d4d60:
    if (ctx->pc == 0x3D4D60u) {
        ctx->pc = 0x3D4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D5Cu;
        // 0x3d4d60: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4D64u;
        goto label_3d4d64;
    }
    ctx->pc = 0x3D4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4D64u);
        ctx->pc = 0x3D4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D5Cu;
        // 0x3d4d60: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4D5Cu, 0x3D4D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4D64u;
label_3d4d64:
    // 0x3d4d64: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x3d4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_3d4d68:
    // 0x3d4d68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d4d6c:
    // 0x3d4d6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3d4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d4d70:
    // 0x3d4d70: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3d4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d4d74:
    // 0x3d4d74: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x3d4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_3d4d78:
    // 0x3d4d78: 0xafc50648  sw          $a1, 0x648($fp)
    ctx->pc = 0x3d4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 5));
label_3d4d7c:
    // 0x3d4d7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d4d80:
    // 0x3d4d80: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3d4d84:
    if (ctx->pc == 0x3D4D84u) {
        ctx->pc = 0x3D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D80u;
        // 0x3d4d84: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4D88u;
        goto label_3d4d88;
    }
    ctx->pc = 0x3D4D80u;
    {
        const bool branch_taken_0x3d4d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D80u;
        // 0x3d4d84: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4d80) {
            ctx->pc = 0x3D4E20u;
            goto label_3d4e20;
        }
    }
    ctx->pc = 0x3D4D88u;
label_3d4d88:
    // 0x3d4d88: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x3d4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_3d4d8c:
    // 0x3d4d8c: 0x24424db0  addiu       $v0, $v0, 0x4DB0
    ctx->pc = 0x3d4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19888));
label_3d4d90:
    // 0x3d4d90: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x3d4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_3d4d94:
    // 0x3d4d94: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x3d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3d4d98:
    // 0x3d4d98: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x3d4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_3d4d9c:
    // 0x3d4d9c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3d4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3d4da0:
    // 0x3d4da0: 0xafde064c  sw          $fp, 0x64C($fp)
    ctx->pc = 0x3d4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1612), GPR_U32(ctx, 30));
label_3d4da4:
    // 0x3d4da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d4da8:
    // 0x3d4da8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d4dac:
    if (ctx->pc == 0x3D4DACu) {
        ctx->pc = 0x3D4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DA8u;
        // 0x3d4dac: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DB0u;
        goto label_3d4db0;
    }
    ctx->pc = 0x3D4DA8u;
    {
        const bool branch_taken_0x3d4da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DA8u;
        // 0x3d4dac: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4da8) {
            ctx->pc = 0x3D4DB4u;
            goto label_3d4db4;
        }
    }
    ctx->pc = 0x3D4DB0u;
label_3d4db0:
    // 0x3d4db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4db4:
    // 0x3d4db4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3d4db8:
    if (ctx->pc == 0x3D4DB8u) {
        ctx->pc = 0x3D4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DB4u;
        // 0x3d4db8: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DBCu;
        goto label_3d4dbc;
    }
    ctx->pc = 0x3D4DB4u;
    {
        const bool branch_taken_0x3d4db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DB4u;
        // 0x3d4db8: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4db4) {
            ctx->pc = 0x3D4E18u;
            goto label_3d4e18;
        }
    }
    ctx->pc = 0x3D4DBCu;
label_3d4dbc:
    // 0x3d4dbc: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x3d4dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_3d4dc0:
    // 0x3d4dc0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3d4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3d4dc4:
    // 0x3d4dc4: 0x8fc50648  lw          $a1, 0x648($fp)
    ctx->pc = 0x3d4dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_3d4dc8:
    // 0x3d4dc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d4dcc:
    // 0x3d4dcc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3d4dd0:
    if (ctx->pc == 0x3D4DD0u) {
        ctx->pc = 0x3D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DCCu;
        // 0x3d4dd0: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DD4u;
        goto label_3d4dd4;
    }
    ctx->pc = 0x3D4DCCu;
    {
        const bool branch_taken_0x3d4dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DCCu;
        // 0x3d4dd0: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4dcc) {
            ctx->pc = 0x3D4E08u;
            goto label_3d4e08;
        }
    }
    ctx->pc = 0x3D4DD4u;
label_3d4dd4:
    // 0x3d4dd4: 0x0  nop
    ctx->pc = 0x3d4dd4u;
    // NOP
label_3d4dd8:
    // 0x3d4dd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4ddc:
    // 0x3d4ddc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4de0:
    // 0x3d4de0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3d4de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d4de4:
    // 0x3d4de4: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x3d4de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_3d4de8:
    // 0x3d4de8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3d4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d4dec:
    // 0x3d4dec: 0x60f809  jalr        $v1
label_3d4df0:
    if (ctx->pc == 0x3D4DF0u) {
        ctx->pc = 0x3D4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DECu;
        // 0x3d4df0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DF4u;
        goto label_3d4df4;
    }
    ctx->pc = 0x3D4DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D4DF4u);
        ctx->pc = 0x3D4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DECu;
        // 0x3d4df0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4DECu, 0x3D4DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4DF4u;
label_3d4df4:
    // 0x3d4df4: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x3d4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_3d4df8:
    // 0x3d4df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4dfc:
    // 0x3d4dfc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3d4e00:
    if (ctx->pc == 0x3D4E00u) {
        ctx->pc = 0x3D4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DFCu;
        // 0x3d4e00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E04u;
        goto label_3d4e04;
    }
    ctx->pc = 0x3D4DFCu;
    {
        const bool branch_taken_0x3d4dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DFCu;
        // 0x3d4e00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4dfc) {
            ctx->pc = 0x3D4DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4dd8;
        }
    }
    ctx->pc = 0x3D4E04u;
label_3d4e04:
    // 0x3d4e04: 0x8fc5064c  lw          $a1, 0x64C($fp)
    ctx->pc = 0x3d4e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
label_3d4e08:
    // 0x3d4e08: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x3d4e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_3d4e0c:
    // 0x3d4e0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d4e10:
    // 0x3d4e10: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d4e14:
    if (ctx->pc == 0x3D4E14u) {
        ctx->pc = 0x3D4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E10u;
        // 0x3d4e14: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E18u;
        goto label_3d4e18;
    }
    ctx->pc = 0x3D4E10u;
    {
        const bool branch_taken_0x3d4e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E10u;
        // 0x3d4e14: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e10) {
            ctx->pc = 0x3D4E20u;
            goto label_3d4e20;
        }
    }
    ctx->pc = 0x3D4E18u;
label_3d4e18:
    // 0x3d4e18: 0xc0f52ce  jal         func_3D4B38
label_3d4e1c:
    if (ctx->pc == 0x3D4E1Cu) {
        ctx->pc = 0x3D4E20u;
        goto label_3d4e20;
    }
    ctx->pc = 0x3D4E18u;
    SET_GPR_U32(ctx, 31, 0x3D4E20u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D4E18u, 0x3D4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E20u;
label_3d4e20:
    // 0x3d4e20: 0x8fc30640  lw          $v1, 0x640($fp)
    ctx->pc = 0x3d4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_3d4e24:
    // 0x3d4e24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d4e28:
    // 0x3d4e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d4e2c:
    if (ctx->pc == 0x3D4E2Cu) {
        ctx->pc = 0x3D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E28u;
        // 0x3d4e2c: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E30u;
        goto label_3d4e30;
    }
    ctx->pc = 0x3D4E28u;
    {
        const bool branch_taken_0x3d4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E28u;
        // 0x3d4e2c: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e28) {
            ctx->pc = 0x3D4E40u;
            goto label_3d4e40;
        }
    }
    ctx->pc = 0x3D4E30u;
label_3d4e30:
    // 0x3d4e30: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3d4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d4e34:
    // 0x3d4e34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d4e38:
    // 0x3d4e38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3d4e3c:
    if (ctx->pc == 0x3D4E3Cu) {
        ctx->pc = 0x3D4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E38u;
        // 0x3d4e3c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E40u;
        goto label_3d4e40;
    }
    ctx->pc = 0x3D4E38u;
    {
        const bool branch_taken_0x3d4e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E38u;
        // 0x3d4e3c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e38) {
            ctx->pc = 0x3D4E5Cu;
            goto label_3d4e5c;
        }
    }
    ctx->pc = 0x3D4E40u;
label_3d4e40:
    // 0x3d4e40: 0xc0f52ce  jal         func_3D4B38
label_3d4e44:
    if (ctx->pc == 0x3D4E44u) {
        ctx->pc = 0x3D4E48u;
        goto label_3d4e48;
    }
    ctx->pc = 0x3D4E40u;
    SET_GPR_U32(ctx, 31, 0x3D4E48u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D4E40u, 0x3D4E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E48u;
label_3d4e48:
    // 0x3d4e48: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x3d4e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_3d4e4c:
    // 0x3d4e4c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3d4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d4e50:
    // 0x3d4e50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d4e54:
    // 0x3d4e54: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x3d4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3d4e58:
    // 0x3d4e58: 0x8fc50644  lw          $a1, 0x644($fp)
    ctx->pc = 0x3d4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_3d4e5c:
    // 0x3d4e5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3d4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3d4e60:
    // 0x3d4e60: 0x8c9e0008  lw          $fp, 0x8($a0)
    ctx->pc = 0x3d4e60u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3d4e64:
    // 0x3d4e64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d4e68:
    // 0x3d4e68: 0x400008  jr          $v0
label_3d4e6c:
    if (ctx->pc == 0x3D4E6Cu) {
        ctx->pc = 0x3D4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E68u;
        // 0x3d4e6c: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E70u;
        goto label_3d4e70;
    }
    ctx->pc = 0x3D4E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x3D4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E68u;
        // 0x3d4e6c: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4E68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D4E70u;
label_3d4e70:
    // 0x3d4e70: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d4e74:
    // 0x3d4e74: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x3d4e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_3d4e78:
    // 0x3d4e78: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d4e7c:
    // 0x3d4e7c: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x3d4e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_3d4e80:
    // 0x3d4e80: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x3d4e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_3d4e84:
    // 0x3d4e84: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x3d4e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_3d4e88:
    // 0x3d4e88: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x3d4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_3d4e8c:
    // 0x3d4e8c: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x3d4e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_3d4e90:
    // 0x3d4e90: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x3d4e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_3d4e94:
    // 0x3d4e94: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x3d4e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_3d4e98:
    // 0x3d4e98: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x3d4e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_3d4e9c:
    // 0x3d4e9c: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x3d4e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_3d4ea0:
    // 0x3d4ea0: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x3d4ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_3d4ea4:
    // 0x3d4ea4: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x3d4ea4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_3d4ea8:
    // 0x3d4ea8: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x3d4ea8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_3d4eac:
    // 0x3d4eac: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x3d4eacu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_3d4eb0:
    // 0x3d4eb0: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x3d4eb0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_3d4eb4:
    // 0x3d4eb4: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x3d4eb4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_3d4eb8:
    // 0x3d4eb8: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x3d4eb8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_3d4ebc:
    // 0x3d4ebc: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x3d4ebcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_3d4ec0:
    // 0x3d4ec0: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x3d4ec0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_3d4ec4:
    // 0x3d4ec4: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x3d4ec4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_3d4ec8:
    // 0x3d4ec8: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x3d4ec8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_3d4ecc:
    // 0x3d4ecc: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x3d4eccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_3d4ed0:
    // 0x3d4ed0: 0x40f809  jalr        $v0
label_3d4ed4:
    if (ctx->pc == 0x3D4ED4u) {
        ctx->pc = 0x3D4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ED0u;
        // 0x3d4ed4: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4ED8u;
        goto label_3d4ed8;
    }
    ctx->pc = 0x3D4ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4ED8u);
        ctx->pc = 0x3D4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ED0u;
        // 0x3d4ed4: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4ED0u, 0x3D4ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4ED8u;
label_3d4ed8:
    // 0x3d4ed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d4edc:
    // 0x3d4edc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3d4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d4ee0:
    // 0x3d4ee0: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x3d4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_3d4ee4:
    // 0x3d4ee4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3d4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d4ee8:
    // 0x3d4ee8: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x3d4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_3d4eec:
    // 0x3d4eec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d4ef0:
    // 0x3d4ef0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3d4ef4:
    if (ctx->pc == 0x3D4EF4u) {
        ctx->pc = 0x3D4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EF0u;
        // 0x3d4ef4: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4EF8u;
        goto label_3d4ef8;
    }
    ctx->pc = 0x3D4EF0u;
    {
        const bool branch_taken_0x3d4ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EF0u;
        // 0x3d4ef4: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ef0) {
            ctx->pc = 0x3D4F74u;
            return;
        }
    }
    ctx->pc = 0x3D4EF8u;
label_3d4ef8:
    // 0x3d4ef8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3d4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3d4efc:
    // 0x3d4efc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3d4efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3d4f00:
    // 0x3d4f00: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x3d4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3d4f04:
    // 0x3d4f04: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x3d4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_3d4f08:
    // 0x3d4f08: 0x24424f18  addiu       $v0, $v0, 0x4F18
    ctx->pc = 0x3d4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20248));
label_3d4f0c:
    // 0x3d4f0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3d4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3d4f10:
    // 0x3d4f10: 0xafbd0648  sw          $sp, 0x648($sp)
    ctx->pc = 0x3d4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 29));
label_3d4f14:
    // 0x3d4f14: 0xac7d0008  sw          $sp, 0x8($v1)
    ctx->pc = 0x3d4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
    ctx->pc = 0x3d4f18u;
}

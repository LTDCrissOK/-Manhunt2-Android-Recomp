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

// Function: sub_002C1930
// Address: 0x2c1930 - 0x2c1e88
void sub_002C1930_0x2c1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1930_0x2c1930");
#endif

    switch (ctx->pc) {
        case 0x2c1974u: goto label_2c1974;
        case 0x2c1988u: goto label_2c1988;
        case 0x2c1994u: goto label_2c1994;
        case 0x2c199cu: goto label_2c199c;
        case 0x2c19a4u: goto label_2c19a4;
        case 0x2c1ac8u: goto label_2c1ac8;
        case 0x2c1adcu: goto label_2c1adc;
        case 0x2c1b08u: goto label_2c1b08;
        case 0x2c1b20u: goto label_2c1b20;
        case 0x2c1b38u: goto label_2c1b38;
        case 0x2c1b50u: goto label_2c1b50;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1b80u: goto label_2c1b80;
        case 0x2c1b98u: goto label_2c1b98;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bc8u: goto label_2c1bc8;
        case 0x2c1be0u: goto label_2c1be0;
        case 0x2c1bf8u: goto label_2c1bf8;
        case 0x2c1c10u: goto label_2c1c10;
        case 0x2c1c28u: goto label_2c1c28;
        case 0x2c1c40u: goto label_2c1c40;
        case 0x2c1c58u: goto label_2c1c58;
        case 0x2c1c70u: goto label_2c1c70;
        case 0x2c1c88u: goto label_2c1c88;
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1cb8u: goto label_2c1cb8;
        case 0x2c1cd0u: goto label_2c1cd0;
        case 0x2c1ce8u: goto label_2c1ce8;
        case 0x2c1d00u: goto label_2c1d00;
        case 0x2c1d18u: goto label_2c1d18;
        case 0x2c1d30u: goto label_2c1d30;
        case 0x2c1d48u: goto label_2c1d48;
        case 0x2c1d60u: goto label_2c1d60;
        case 0x2c1d78u: goto label_2c1d78;
        case 0x2c1d90u: goto label_2c1d90;
        case 0x2c1da8u: goto label_2c1da8;
        case 0x2c1dc0u: goto label_2c1dc0;
        case 0x2c1dd8u: goto label_2c1dd8;
        case 0x2c1df0u: goto label_2c1df0;
        case 0x2c1e08u: goto label_2c1e08;
        case 0x2c1e20u: goto label_2c1e20;
        case 0x2c1e38u: goto label_2c1e38;
        case 0x2c1e50u: goto label_2c1e50;
        default: break;
    }

    ctx->pc = 0x2c1930u;

    // 0x2c1930: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c1934: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2c1934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2c1938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c193c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2c193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2c1940: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2c1940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2c1944: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2c1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2c1948: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2c1948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2c194c: 0x34843890  ori         $a0, $a0, 0x3890
    ctx->pc = 0x2c194cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14480);
    // 0x2c1950: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2c1950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2c1954: 0x241303e7  addiu       $s3, $zero, 0x3E7
    ctx->pc = 0x2c1954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2c1958: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2c1958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x2c195c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2c195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2c1960: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2c1960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x2c1964: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2c1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2c1968: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2c1968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2c196c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2C196Cu;
    SET_GPR_U32(ctx, 31, 0x2C1974u);
    ctx->pc = 0x2C1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C196Cu;
    // 0x2c1970: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2C196Cu, 0x2C1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1974u;
label_2c1974:
    // 0x2c1974: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2c1974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2c1978: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x2c1978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c197c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c197cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c1980: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2c1980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1984: 0x0  nop
    ctx->pc = 0x2c1984u;
    // NOP
label_2c1988:
    // 0x2c1988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c198c: 0xc0b0578  jal         func_2C15E0
    ctx->pc = 0x2C198Cu;
    SET_GPR_U32(ctx, 31, 0x2C1994u);
    ctx->pc = 0x2C1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C198Cu;
    // 0x2c1990: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15E0u, 0x2C198Cu, 0x2C1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1994u;
label_2c1994:
    // 0x2c1994: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C1994u;
    SET_GPR_U32(ctx, 31, 0x2C199Cu);
    ctx->pc = 0x2C1998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1994u;
    // 0x2c1998: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C1994u, 0x2C199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C199Cu;
label_2c199c:
    // 0x2c199c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C199Cu;
    SET_GPR_U32(ctx, 31, 0x2C19A4u);
    ctx->pc = 0x2C19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C199Cu;
    // 0x2c19a0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C199Cu, 0x2C19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19A4u;
label_2c19a4:
    // 0x2c19a4: 0x1672fff8  bne         $s3, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C19A4u;
    {
        const bool branch_taken_0x2c19a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19A4u;
        // 0x2c19a8: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19a4) {
            ctx->pc = 0x2C1988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1988;
        }
    }
    ctx->pc = 0x2C19ACu;
    // 0x2c19ac: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x2c19acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x2c19b0: 0x26020268  addiu       $v0, $s0, 0x268
    ctx->pc = 0x2c19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x2c19b4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2c19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2c19b8: 0x2613001c  addiu       $s3, $s0, 0x1C
    ctx->pc = 0x2c19b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2c19bc: 0x260202b4  addiu       $v0, $s0, 0x2B4
    ctx->pc = 0x2c19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    // 0x2c19c0: 0x261400ec  addiu       $s4, $s0, 0xEC
    ctx->pc = 0x2c19c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x2c19c4: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2c19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2c19c8: 0x26150138  addiu       $s5, $s0, 0x138
    ctx->pc = 0x2c19c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x2c19cc: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x2c19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2c19d0: 0x26160184  addiu       $s6, $s0, 0x184
    ctx->pc = 0x2c19d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x2c19d4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2c19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2c19d8: 0x261701d0  addiu       $s7, $s0, 0x1D0
    ctx->pc = 0x2c19d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x2c19dc: 0x2602034c  addiu       $v0, $s0, 0x34C
    ctx->pc = 0x2c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 844));
    // 0x2c19e0: 0x261e021c  addiu       $fp, $s0, 0x21C
    ctx->pc = 0x2c19e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x2c19e4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2c19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2c19e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c19e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19ec: 0x26020398  addiu       $v0, $s0, 0x398
    ctx->pc = 0x2c19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
    // 0x2c19f0: 0x241103e7  addiu       $s1, $zero, 0x3E7
    ctx->pc = 0x2c19f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2c19f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2c19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2c19f8: 0x260203e4  addiu       $v0, $s0, 0x3E4
    ctx->pc = 0x2c19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 996));
    // 0x2c19fc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2c19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2c1a00: 0x26020430  addiu       $v0, $s0, 0x430
    ctx->pc = 0x2c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    // 0x2c1a04: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2c1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2c1a08: 0x2602047c  addiu       $v0, $s0, 0x47C
    ctx->pc = 0x2c1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1148));
    // 0x2c1a0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c1a10: 0x260204c8  addiu       $v0, $s0, 0x4C8
    ctx->pc = 0x2c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1224));
    // 0x2c1a14: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2c1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2c1a18: 0x26020514  addiu       $v0, $s0, 0x514
    ctx->pc = 0x2c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1300));
    // 0x2c1a1c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2c1a20: 0x26020560  addiu       $v0, $s0, 0x560
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x2c1a24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2c1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2c1a28: 0x260205ac  addiu       $v0, $s0, 0x5AC
    ctx->pc = 0x2c1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1452));
    // 0x2c1a2c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2c1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2c1a30: 0x260205f8  addiu       $v0, $s0, 0x5F8
    ctx->pc = 0x2c1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1528));
    // 0x2c1a34: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2c1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2c1a38: 0x26020644  addiu       $v0, $s0, 0x644
    ctx->pc = 0x2c1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1604));
    // 0x2c1a3c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2c1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2c1a40: 0x26020690  addiu       $v0, $s0, 0x690
    ctx->pc = 0x2c1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
    // 0x2c1a44: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c1a48: 0x260206dc  addiu       $v0, $s0, 0x6DC
    ctx->pc = 0x2c1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
    // 0x2c1a4c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2c1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2c1a50: 0x26020728  addiu       $v0, $s0, 0x728
    ctx->pc = 0x2c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
    // 0x2c1a54: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2c1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2c1a58: 0x26020774  addiu       $v0, $s0, 0x774
    ctx->pc = 0x2c1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1908));
    // 0x2c1a5c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2c1a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2c1a60: 0x260207c0  addiu       $v0, $s0, 0x7C0
    ctx->pc = 0x2c1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
    // 0x2c1a64: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2c1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2c1a68: 0x2602080c  addiu       $v0, $s0, 0x80C
    ctx->pc = 0x2c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2060));
    // 0x2c1a6c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2c1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2c1a70: 0x26020858  addiu       $v0, $s0, 0x858
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2136));
    // 0x2c1a74: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2c1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2c1a78: 0x260208a4  addiu       $v0, $s0, 0x8A4
    ctx->pc = 0x2c1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2212));
    // 0x2c1a7c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2c1a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2c1a80: 0x260208f0  addiu       $v0, $s0, 0x8F0
    ctx->pc = 0x2c1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2288));
    // 0x2c1a84: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2c1a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2c1a88: 0x2602093c  addiu       $v0, $s0, 0x93C
    ctx->pc = 0x2c1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2364));
    // 0x2c1a8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c1a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c1a90: 0x26020988  addiu       $v0, $s0, 0x988
    ctx->pc = 0x2c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2440));
    // 0x2c1a94: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2c1a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2c1a98: 0x260209d4  addiu       $v0, $s0, 0x9D4
    ctx->pc = 0x2c1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2516));
    // 0x2c1a9c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2c1a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2c1aa0: 0x26020a20  addiu       $v0, $s0, 0xA20
    ctx->pc = 0x2c1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2592));
    // 0x2c1aa4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2c1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2c1aa8: 0x26020a6c  addiu       $v0, $s0, 0xA6C
    ctx->pc = 0x2c1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2668));
    // 0x2c1aac: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2c1ab0: 0x26020ab8  addiu       $v0, $s0, 0xAB8
    ctx->pc = 0x2c1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2744));
    // 0x2c1ab4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c1ab8: 0x26020b04  addiu       $v0, $s0, 0xB04
    ctx->pc = 0x2c1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2820));
    // 0x2c1abc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2c1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2c1ac0: 0x26020b50  addiu       $v0, $s0, 0xB50
    ctx->pc = 0x2c1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2896));
    // 0x2c1ac4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2c1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_2c1ac8:
    // 0x2c1ac8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2c1ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c1acc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ad0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c1ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2c1ad4: 0xc0b0596  jal         func_2C1658
    ctx->pc = 0x2C1AD4u;
    SET_GPR_U32(ctx, 31, 0x2C1ADCu);
    ctx->pc = 0x2C1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1AD4u;
    // 0x2c1ad8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1658u, 0x2C1AD4u, 0x2C1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1ADCu;
label_2c1adc:
    // 0x2c1adc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C1ADCu;
    {
        const bool branch_taken_0x2c1adc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2C1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1ADCu;
        // 0x2c1ae0: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1adc) {
            ctx->pc = 0x2C1AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1ac8;
        }
    }
    ctx->pc = 0x2C1AE4u;
    // 0x2c1ae4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2c1ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2c1ae8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1aec: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2c1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x2c1af0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1af4: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2c1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2c1af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1afc: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x2c1afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
    // 0x2c1b00: 0xc0faede  jal         func_3EBB78
    ctx->pc = 0x2C1B00u;
    SET_GPR_U32(ctx, 31, 0x2C1B08u);
    ctx->pc = 0x2C1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B00u;
    // 0x2c1b04: 0x24c60210  addiu       $a2, $a2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBB78u, 0x2C1B00u, 0x2C1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B08u;
label_2c1b08:
    // 0x2c1b08: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b0c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c1b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b14: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x2c1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    // 0x2c1b18: 0xc0faee8  jal         func_3EBBA0
    ctx->pc = 0x2C1B18u;
    SET_GPR_U32(ctx, 31, 0x2C1B20u);
    ctx->pc = 0x2C1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B18u;
    // 0x2c1b1c: 0x24c60230  addiu       $a2, $a2, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBBA0u, 0x2C1B18u, 0x2C1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B20u;
label_2c1b20:
    // 0x2c1b20: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b24: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c1b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b2c: 0x24a50240  addiu       $a1, $a1, 0x240
    ctx->pc = 0x2c1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x2c1b30: 0xc0faef2  jal         func_3EBBC8
    ctx->pc = 0x2C1B30u;
    SET_GPR_U32(ctx, 31, 0x2C1B38u);
    ctx->pc = 0x2C1B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B30u;
    // 0x2c1b34: 0x24c60248  addiu       $a2, $a2, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBBC8u, 0x2C1B30u, 0x2C1B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B38u;
label_2c1b38:
    // 0x2c1b38: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b3c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b40: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c1b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b44: 0x24a50258  addiu       $a1, $a1, 0x258
    ctx->pc = 0x2c1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 600));
    // 0x2c1b48: 0xc0faefc  jal         func_3EBBF0
    ctx->pc = 0x2C1B48u;
    SET_GPR_U32(ctx, 31, 0x2C1B50u);
    ctx->pc = 0x2C1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B48u;
    // 0x2c1b4c: 0x24c60260  addiu       $a2, $a2, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBBF0u, 0x2C1B48u, 0x2C1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B50u;
label_2c1b50:
    // 0x2c1b50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b54: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1b54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b5c: 0x24a50278  addiu       $a1, $a1, 0x278
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 632));
    // 0x2c1b60: 0xc0faf06  jal         func_3EBC18
    ctx->pc = 0x2C1B60u;
    SET_GPR_U32(ctx, 31, 0x2C1B68u);
    ctx->pc = 0x2C1B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B60u;
    // 0x2c1b64: 0x24c60280  addiu       $a2, $a2, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBC18u, 0x2C1B60u, 0x2C1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B68u;
label_2c1b68:
    // 0x2c1b68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c1b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c1b6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b70: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b74: 0x24a50298  addiu       $a1, $a1, 0x298
    ctx->pc = 0x2c1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 664));
    // 0x2c1b78: 0xc0faf10  jal         func_3EBC40
    ctx->pc = 0x2C1B78u;
    SET_GPR_U32(ctx, 31, 0x2C1B80u);
    ctx->pc = 0x2C1B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B78u;
    // 0x2c1b7c: 0x24c602a0  addiu       $a2, $a2, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBC40u, 0x2C1B78u, 0x2C1B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B80u;
label_2c1b80:
    // 0x2c1b80: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x2c1b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2c1b84: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b88: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1b88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1b8c: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x2c1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
    // 0x2c1b90: 0xc0faf1a  jal         func_3EBC68
    ctx->pc = 0x2C1B90u;
    SET_GPR_U32(ctx, 31, 0x2C1B98u);
    ctx->pc = 0x2C1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B90u;
    // 0x2c1b94: 0x24c602c8  addiu       $a2, $a2, 0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBC68u, 0x2C1B90u, 0x2C1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B98u;
label_2c1b98:
    // 0x2c1b98: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c1b9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1ba0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1ba4: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x2c1ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    // 0x2c1ba8: 0xc0faf24  jal         func_3EBC90
    ctx->pc = 0x2C1BA8u;
    SET_GPR_U32(ctx, 31, 0x2C1BB0u);
    ctx->pc = 0x2C1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BA8u;
    // 0x2c1bac: 0x24c602f0  addiu       $a2, $a2, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBC90u, 0x2C1BA8u, 0x2C1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BB0u;
label_2c1bb0:
    // 0x2c1bb0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2c1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c1bb4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1bb8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1bbc: 0x24a50308  addiu       $a1, $a1, 0x308
    ctx->pc = 0x2c1bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 776));
    // 0x2c1bc0: 0xc0faf2e  jal         func_3EBCB8
    ctx->pc = 0x2C1BC0u;
    SET_GPR_U32(ctx, 31, 0x2C1BC8u);
    ctx->pc = 0x2C1BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BC0u;
    // 0x2c1bc4: 0x24c60318  addiu       $a2, $a2, 0x318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBCB8u, 0x2C1BC0u, 0x2C1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BC8u;
label_2c1bc8:
    // 0x2c1bc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1bcc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1bd0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1bd4: 0x24a50330  addiu       $a1, $a1, 0x330
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
    // 0x2c1bd8: 0xc0faf38  jal         func_3EBCE0
    ctx->pc = 0x2C1BD8u;
    SET_GPR_U32(ctx, 31, 0x2C1BE0u);
    ctx->pc = 0x2C1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BD8u;
    // 0x2c1bdc: 0x24c60340  addiu       $a2, $a2, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBCE0u, 0x2C1BD8u, 0x2C1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BE0u;
label_2c1be0:
    // 0x2c1be0: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2c1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2c1be4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1be8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1bec: 0x24a50358  addiu       $a1, $a1, 0x358
    ctx->pc = 0x2c1becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 856));
    // 0x2c1bf0: 0xc0faf42  jal         func_3EBD08
    ctx->pc = 0x2C1BF0u;
    SET_GPR_U32(ctx, 31, 0x2C1BF8u);
    ctx->pc = 0x2C1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BF0u;
    // 0x2c1bf4: 0x24c60368  addiu       $a2, $a2, 0x368 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBD08u, 0x2C1BF0u, 0x2C1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BF8u;
label_2c1bf8:
    // 0x2c1bf8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c1bfc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c00: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c04: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x2c1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x2c1c08: 0xc0faf4c  jal         func_3EBD30
    ctx->pc = 0x2C1C08u;
    SET_GPR_U32(ctx, 31, 0x2C1C10u);
    ctx->pc = 0x2C1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C08u;
    // 0x2c1c0c: 0x24c60390  addiu       $a2, $a2, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBD30u, 0x2C1C08u, 0x2C1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C10u;
label_2c1c10:
    // 0x2c1c10: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2c1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2c1c14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c18: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c1c: 0x24a503a8  addiu       $a1, $a1, 0x3A8
    ctx->pc = 0x2c1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 936));
    // 0x2c1c20: 0xc0faf56  jal         func_3EBD58
    ctx->pc = 0x2C1C20u;
    SET_GPR_U32(ctx, 31, 0x2C1C28u);
    ctx->pc = 0x2C1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C20u;
    // 0x2c1c24: 0x24c603b8  addiu       $a2, $a2, 0x3B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBD58u, 0x2C1C20u, 0x2C1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C28u;
label_2c1c28:
    // 0x2c1c28: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c1c2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c30: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c34: 0x24a503d0  addiu       $a1, $a1, 0x3D0
    ctx->pc = 0x2c1c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
    // 0x2c1c38: 0xc0faf60  jal         func_3EBD80
    ctx->pc = 0x2C1C38u;
    SET_GPR_U32(ctx, 31, 0x2C1C40u);
    ctx->pc = 0x2C1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C38u;
    // 0x2c1c3c: 0x24c603e0  addiu       $a2, $a2, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBD80u, 0x2C1C38u, 0x2C1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C40u;
label_2c1c40:
    // 0x2c1c40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c44: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c48: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c4c: 0x24a503f8  addiu       $a1, $a1, 0x3F8
    ctx->pc = 0x2c1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1016));
    // 0x2c1c50: 0xc0faf6a  jal         func_3EBDA8
    ctx->pc = 0x2C1C50u;
    SET_GPR_U32(ctx, 31, 0x2C1C58u);
    ctx->pc = 0x2C1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C50u;
    // 0x2c1c54: 0x24c60408  addiu       $a2, $a2, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBDA8u, 0x2C1C50u, 0x2C1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C58u;
label_2c1c58:
    // 0x2c1c58: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2c1c5c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c60: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c64: 0x24a50420  addiu       $a1, $a1, 0x420
    ctx->pc = 0x2c1c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
    // 0x2c1c68: 0xc0faf74  jal         func_3EBDD0
    ctx->pc = 0x2C1C68u;
    SET_GPR_U32(ctx, 31, 0x2C1C70u);
    ctx->pc = 0x2C1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C68u;
    // 0x2c1c6c: 0x24c60430  addiu       $a2, $a2, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBDD0u, 0x2C1C68u, 0x2C1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C70u;
label_2c1c70:
    // 0x2c1c70: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c1c74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c78: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c7c: 0x24a50448  addiu       $a1, $a1, 0x448
    ctx->pc = 0x2c1c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1096));
    // 0x2c1c80: 0xc0faf7e  jal         func_3EBDF8
    ctx->pc = 0x2C1C80u;
    SET_GPR_U32(ctx, 31, 0x2C1C88u);
    ctx->pc = 0x2C1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C80u;
    // 0x2c1c84: 0x24c60458  addiu       $a2, $a2, 0x458 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBDF8u, 0x2C1C80u, 0x2C1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C88u;
label_2c1c88:
    // 0x2c1c88: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2c1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2c1c8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c90: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1c94: 0x24a50470  addiu       $a1, $a1, 0x470
    ctx->pc = 0x2c1c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1136));
    // 0x2c1c98: 0xc0faf88  jal         func_3EBE20
    ctx->pc = 0x2C1C98u;
    SET_GPR_U32(ctx, 31, 0x2C1CA0u);
    ctx->pc = 0x2C1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C98u;
    // 0x2c1c9c: 0x24c60480  addiu       $a2, $a2, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBE20u, 0x2C1C98u, 0x2C1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CA0u;
label_2c1ca0:
    // 0x2c1ca0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c1ca4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1ca8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cac: 0x24a50498  addiu       $a1, $a1, 0x498
    ctx->pc = 0x2c1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1176));
    // 0x2c1cb0: 0xc0faf92  jal         func_3EBE48
    ctx->pc = 0x2C1CB0u;
    SET_GPR_U32(ctx, 31, 0x2C1CB8u);
    ctx->pc = 0x2C1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CB0u;
    // 0x2c1cb4: 0x24c604a8  addiu       $a2, $a2, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBE48u, 0x2C1CB0u, 0x2C1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CB8u;
label_2c1cb8:
    // 0x2c1cb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c1cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1cbc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cc0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cc4: 0x24a504c0  addiu       $a1, $a1, 0x4C0
    ctx->pc = 0x2c1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
    // 0x2c1cc8: 0xc0faf9c  jal         func_3EBE70
    ctx->pc = 0x2C1CC8u;
    SET_GPR_U32(ctx, 31, 0x2C1CD0u);
    ctx->pc = 0x2C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CC8u;
    // 0x2c1ccc: 0x24c604d0  addiu       $a2, $a2, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBE70u, 0x2C1CC8u, 0x2C1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CD0u;
label_2c1cd0:
    // 0x2c1cd0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2c1cd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cd8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cdc: 0x24a504e8  addiu       $a1, $a1, 0x4E8
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
    // 0x2c1ce0: 0xc0fafa6  jal         func_3EBE98
    ctx->pc = 0x2C1CE0u;
    SET_GPR_U32(ctx, 31, 0x2C1CE8u);
    ctx->pc = 0x2C1CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CE0u;
    // 0x2c1ce4: 0x24c60500  addiu       $a2, $a2, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBE98u, 0x2C1CE0u, 0x2C1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CE8u;
label_2c1ce8:
    // 0x2c1ce8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2c1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c1cec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cf0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1cf4: 0x24a50520  addiu       $a1, $a1, 0x520
    ctx->pc = 0x2c1cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1312));
    // 0x2c1cf8: 0xc0fafb0  jal         func_3EBEC0
    ctx->pc = 0x2C1CF8u;
    SET_GPR_U32(ctx, 31, 0x2C1D00u);
    ctx->pc = 0x2C1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CF8u;
    // 0x2c1cfc: 0x24c60538  addiu       $a2, $a2, 0x538 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBEC0u, 0x2C1CF8u, 0x2C1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D00u;
label_2c1d00:
    // 0x2c1d00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1d04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d08: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d0c: 0x24a50558  addiu       $a1, $a1, 0x558
    ctx->pc = 0x2c1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
    // 0x2c1d10: 0xc0fafba  jal         func_3EBEE8
    ctx->pc = 0x2C1D10u;
    SET_GPR_U32(ctx, 31, 0x2C1D18u);
    ctx->pc = 0x2C1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D10u;
    // 0x2c1d14: 0x24c60570  addiu       $a2, $a2, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBEE8u, 0x2C1D10u, 0x2C1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D18u;
label_2c1d18:
    // 0x2c1d18: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2c1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2c1d1c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d20: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d24: 0x24a50590  addiu       $a1, $a1, 0x590
    ctx->pc = 0x2c1d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1424));
    // 0x2c1d28: 0xc0fafc4  jal         func_3EBF10
    ctx->pc = 0x2C1D28u;
    SET_GPR_U32(ctx, 31, 0x2C1D30u);
    ctx->pc = 0x2C1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D28u;
    // 0x2c1d2c: 0x24c605a8  addiu       $a2, $a2, 0x5A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBF10u, 0x2C1D28u, 0x2C1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D30u;
label_2c1d30:
    // 0x2c1d30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c1d34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d38: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d3c: 0x24a505c8  addiu       $a1, $a1, 0x5C8
    ctx->pc = 0x2c1d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1480));
    // 0x2c1d40: 0xc0fafce  jal         func_3EBF38
    ctx->pc = 0x2C1D40u;
    SET_GPR_U32(ctx, 31, 0x2C1D48u);
    ctx->pc = 0x2C1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D40u;
    // 0x2c1d44: 0x24c605d8  addiu       $a2, $a2, 0x5D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBF38u, 0x2C1D40u, 0x2C1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D48u;
label_2c1d48:
    // 0x2c1d48: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2c1d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2c1d4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d50: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d54: 0x24a505f0  addiu       $a1, $a1, 0x5F0
    ctx->pc = 0x2c1d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
    // 0x2c1d58: 0xc0fafd8  jal         func_3EBF60
    ctx->pc = 0x2C1D58u;
    SET_GPR_U32(ctx, 31, 0x2C1D60u);
    ctx->pc = 0x2C1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D58u;
    // 0x2c1d5c: 0x24c60600  addiu       $a2, $a2, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBF60u, 0x2C1D58u, 0x2C1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D60u;
label_2c1d60:
    // 0x2c1d60: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2c1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2c1d64: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d68: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d6c: 0x24a50620  addiu       $a1, $a1, 0x620
    ctx->pc = 0x2c1d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
    // 0x2c1d70: 0xc0fafe2  jal         func_3EBF88
    ctx->pc = 0x2C1D70u;
    SET_GPR_U32(ctx, 31, 0x2C1D78u);
    ctx->pc = 0x2C1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D70u;
    // 0x2c1d74: 0x24c60630  addiu       $a2, $a2, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBF88u, 0x2C1D70u, 0x2C1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D78u;
label_2c1d78:
    // 0x2c1d78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c1d7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d80: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d84: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x2c1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x2c1d88: 0xc0fafec  jal         func_3EBFB0
    ctx->pc = 0x2C1D88u;
    SET_GPR_U32(ctx, 31, 0x2C1D90u);
    ctx->pc = 0x2C1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D88u;
    // 0x2c1d8c: 0x24c60660  addiu       $a2, $a2, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBFB0u, 0x2C1D88u, 0x2C1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D90u;
label_2c1d90:
    // 0x2c1d90: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2c1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1d94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d98: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1d9c: 0x24a50678  addiu       $a1, $a1, 0x678
    ctx->pc = 0x2c1d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1656));
    // 0x2c1da0: 0xc0faff6  jal         func_3EBFD8
    ctx->pc = 0x2C1DA0u;
    SET_GPR_U32(ctx, 31, 0x2C1DA8u);
    ctx->pc = 0x2C1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DA0u;
    // 0x2c1da4: 0x24c60690  addiu       $a2, $a2, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBFD8u, 0x2C1DA0u, 0x2C1DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DA8u;
label_2c1da8:
    // 0x2c1da8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1dac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1db0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1db4: 0x24a506b0  addiu       $a1, $a1, 0x6B0
    ctx->pc = 0x2c1db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1712));
    // 0x2c1db8: 0xc0fb000  jal         func_3EC000
    ctx->pc = 0x2C1DB8u;
    SET_GPR_U32(ctx, 31, 0x2C1DC0u);
    ctx->pc = 0x2C1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DB8u;
    // 0x2c1dbc: 0x24c606c0  addiu       $a2, $a2, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC000u, 0x2C1DB8u, 0x2C1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DC0u;
label_2c1dc0:
    // 0x2c1dc0: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2c1dc4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1dc8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1dcc: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x2c1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    // 0x2c1dd0: 0xc0fb00a  jal         func_3EC028
    ctx->pc = 0x2C1DD0u;
    SET_GPR_U32(ctx, 31, 0x2C1DD8u);
    ctx->pc = 0x2C1DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DD0u;
    // 0x2c1dd4: 0x24c606f8  addiu       $a2, $a2, 0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC028u, 0x2C1DD0u, 0x2C1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DD8u;
label_2c1dd8:
    // 0x2c1dd8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2c1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2c1ddc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1de0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1de4: 0x24a50718  addiu       $a1, $a1, 0x718
    ctx->pc = 0x2c1de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
    // 0x2c1de8: 0xc0fb014  jal         func_3EC050
    ctx->pc = 0x2C1DE8u;
    SET_GPR_U32(ctx, 31, 0x2C1DF0u);
    ctx->pc = 0x2C1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DE8u;
    // 0x2c1dec: 0x24c60730  addiu       $a2, $a2, 0x730 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC050u, 0x2C1DE8u, 0x2C1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DF0u;
label_2c1df0:
    // 0x2c1df0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1df4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1df8: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1dfc: 0x24a50750  addiu       $a1, $a1, 0x750
    ctx->pc = 0x2c1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    // 0x2c1e00: 0xc0fb01e  jal         func_3EC078
    ctx->pc = 0x2C1E00u;
    SET_GPR_U32(ctx, 31, 0x2C1E08u);
    ctx->pc = 0x2C1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E00u;
    // 0x2c1e04: 0x24c60760  addiu       $a2, $a2, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC078u, 0x2C1E00u, 0x2C1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E08u;
label_2c1e08:
    // 0x2c1e08: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1e0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1e10: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1e10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1e14: 0x24a50778  addiu       $a1, $a1, 0x778
    ctx->pc = 0x2c1e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1912));
    // 0x2c1e18: 0xc0fb028  jal         func_3EC0A0
    ctx->pc = 0x2C1E18u;
    SET_GPR_U32(ctx, 31, 0x2C1E20u);
    ctx->pc = 0x2C1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E18u;
    // 0x2c1e1c: 0x24c60788  addiu       $a2, $a2, 0x788 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC0A0u, 0x2C1E18u, 0x2C1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E20u;
label_2c1e20:
    // 0x2c1e20: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2c1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2c1e24: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1e28: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1e2c: 0x24a507a0  addiu       $a1, $a1, 0x7A0
    ctx->pc = 0x2c1e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1952));
    // 0x2c1e30: 0xc0fb032  jal         func_3EC0C8
    ctx->pc = 0x2C1E30u;
    SET_GPR_U32(ctx, 31, 0x2C1E38u);
    ctx->pc = 0x2C1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E30u;
    // 0x2c1e34: 0x24c607b8  addiu       $a2, $a2, 0x7B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC0C8u, 0x2C1E30u, 0x2C1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E38u;
label_2c1e38:
    // 0x2c1e38: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2c1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c1e3c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c1e40: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2c1e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2c1e44: 0x24a507d8  addiu       $a1, $a1, 0x7D8
    ctx->pc = 0x2c1e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2008));
    // 0x2c1e48: 0xc0fb03c  jal         func_3EC0F0
    ctx->pc = 0x2C1E48u;
    SET_GPR_U32(ctx, 31, 0x2C1E50u);
    ctx->pc = 0x2C1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E48u;
    // 0x2c1e4c: 0x24c607f0  addiu       $a2, $a2, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC0F0u, 0x2C1E48u, 0x2C1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E50u;
label_2c1e50:
    // 0x2c1e50: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2c1e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c1e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1e58: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2c1e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c1e5c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2c1e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c1e60: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2c1e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c1e64: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2c1e64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c1e68: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2c1e68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c1e6c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2c1e6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c1e70: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2c1e70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c1e74: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2c1e74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c1e78: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2c1e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c1e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E7Cu;
        // 0x2c1e80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1E84u;
    // 0x2c1e84: 0x0  nop
    ctx->pc = 0x2c1e84u;
    // NOP
    ctx->pc = 0x2c1e88u;
}
